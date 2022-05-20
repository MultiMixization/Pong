#include "filter.h"

#include "sensor/sensor.h"
#include "matrix/matrix.h"
#include <math.h>

float x_post[2];

static void filter_task(void *);

void filter_task_init(void)
{
   rtos_task_create(filter_task, "filter", FILTER_STACKSIZE, FILTER_PRIORITY);
}

float filter_get_est(void)
{
   return x_post[0];
}

/**
 * @brief Task filtru alfa-beta.
 *
 * @param params                       Parametry dla tasku - nieuzywane.
 */
static void filter_task(void * params)
{
   (void) params;

   float dt;
   portTickType ticks;

   float A[4], B[2], C[2];
   float std_dev_v, std_dev_w;
   float V[4], W[1];
   float P_pri[4], P_post[4];
   float x_pri[2];
   float eps[1], S[1], K[2];
   float u[1], y[1];
   float acc_x, acc_y;

   float Ax[2], Bu[2];
   float AP[4], AT[4], APAT[4];
   float Cx[1];
   float CP[2], CPCT[1];
   float PCT[2], S1[1];
   float Keps[2];
   float KS[2], KSKT[2];

   /* Inicjalizacja zmiennych */
   dt = 0.1;

   A[0] = 1;
   A[1] = -dt;
   A[2] = 0;
   A[3] = 1;

   B[0] = dt;
   B[1] = 0;

   C[0] = 1;
   C[1] = 0;

   std_dev_v = 1;
   std_dev_w = 2;
   V[0] = std_dev_v*std_dev_v*dt;
   V[1] = 0;
   V[2] = 0;
   V[3] = std_dev_v*std_dev_v*dt;
   W[0] = std_dev_w*std_dev_w;

   /* Wartosci poczatkowe filtru */
   P_post[0] = 1;
   P_post[1] = 0;
   P_post[2] = 0;
   P_post[3] = 1;

   rtos_delay(150);

   acc_x = sensor_acc_get_x();
   acc_y = sensor_acc_get_y();
   x_post[0] = atan(acc_x/acc_y)*180/M_PI;
   x_post[1] = 0;

   /* Obliczenia sa wykonywane co 100 ms */
   while (1)
   {
      ticks = rtos_get_tick_count();

      /* x(t+1|t) = Ax(t|t) + Bu(t) */
      u[0] = sensor_gyro_get_z()*250/32768;
      matrix_2x2_mul_2x1(A, x_post, Ax);
      matrix_2x1_mul_1x1(B, u, Bu);
      matrix_2x1_add_2x1(Ax, Bu, x_pri);

      /* P(t+1|t) = AP(t|t)A^T + V */
      matrix_2x2_mul_2x2(A, P_post, AP);
      matrix_2x2_trans(A, AT);
      matrix_2x2_mul_2x2(AP, AT, APAT);
      matrix_2x2_add_2x2(APAT, V, P_pri);

      /* eps(t) = y(t) - Cx(t|t-1) */
      acc_x = sensor_acc_get_x();
      acc_y = sensor_acc_get_y();
      y[0] = atan(acc_x/acc_y)*180/M_PI;
      matrix_1x2_mul_2x1(C, x_pri, Cx);
      eps[0] = y[0] - Cx[0];

      /* S(t) = CP(t|t-1)C^T + W */
      matrix_1x2_mul_2x2(C, P_pri, CP);
      matrix_1x2_mul_2x1(C, C, CPCT);
      S[0] = CPCT[0] + W[0];

      /* K(t) = P(t|t-1)C^TS(t)^-1 */
      matrix_2x2_mul_2x1(P_pri, C, PCT);
      S1[0] = 1/S[0];
      matrix_2x1_mul_1x1(PCT, S1, K);

      /* x(t|t) = x(t|t-1) + K(t)eps(t) */
      matrix_2x1_mul_1x1(K, eps, Keps);
      matrix_2x1_add_2x1(x_pri, Keps, x_post);

      /* P(t|t) = P(t|t-1) - K(t)S(t)K(t)^T */
      matrix_2x1_mul_1x1(K, S, KS);
      matrix_2x1_mul_1x2(KS, K, KSKT);
      matrix_2x2_sub_2x2(P_pri, KSKT, P_post);

      rtos_delay_until(ticks, 100);
   }
}
