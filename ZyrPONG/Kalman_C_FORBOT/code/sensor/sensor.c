#include "sensor.h"

#include "l3gd20.h"
#include "lsm303.h"
#include "i2c_master/i2c_master.h"

#define GYRO_ADDR                0b1101011
#define ACC_ADDR                 0b0011001
#define MAG_ADDR                 0b0011110

static sensor_data_t gyro_data, acc_data, mag_data;

static void sensor_task(void *);

void sensor_task_init(void)
{
   i2c_master_init();

   /* Power on zyroskopu */
   i2c_master_write_reg(GYRO_ADDR, L3GD20_CTRL_REG1, 0x0F);

   /* Power on akcelerometru */
   i2c_master_write_reg(ACC_ADDR, LSM303_CTRL_REG1_A, 0x27);

   rtos_task_create(sensor_task, "sensor", SENSOR_STACKSIZE, SENSOR_PRIORITY);
}

float sensor_gyro_get_x(void)
{
   return gyro_data.x;
}

float sensor_gyro_get_y(void)
{
   return gyro_data.y;
}

float sensor_gyro_get_z(void)
{
   return gyro_data.z;
}

float sensor_acc_get_x(void)
{
   return acc_data.x;
}

float sensor_acc_get_y(void)
{
   return acc_data.y;
}

float sensor_acc_get_z(void)
{
   return acc_data.z;
}

float sensor_mag_get_x(void)
{
   return mag_data.x;
}

float sensor_mag_get_y(void)
{
   return mag_data.y;
}

float sensor_mag_get_z(void)
{
   return mag_data.z;
}

/**
 * @brief Implementacja tasku sensora I2C.
 *
 * @param params                       Parametry dla tasku - nieuzywane.
 */
static void sensor_task(void * params)
{
   (void) params;

   uint32_t tmp;
   portTickType ticks;

   while (1)
   {
      ticks = rtos_get_tick_count();

      tmp = i2c_master_read_reg(GYRO_ADDR, L3GD20_OUT_X_L);
      tmp |= i2c_master_read_reg(GYRO_ADDR, L3GD20_OUT_X_H) << 8;
      gyro_data.x = (int16_t) tmp;

      tmp = i2c_master_read_reg(GYRO_ADDR, L3GD20_OUT_Y_L);
      tmp |= i2c_master_read_reg(GYRO_ADDR, L3GD20_OUT_Y_H) << 8;
      gyro_data.y = (int16_t) tmp;

      tmp = i2c_master_read_reg(GYRO_ADDR, L3GD20_OUT_Z_L);
      tmp |= i2c_master_read_reg(GYRO_ADDR, L3GD20_OUT_Z_H) << 8;
      gyro_data.z = (int16_t) tmp;

      tmp = i2c_master_read_reg(ACC_ADDR, LSM303_OUT_X_L_A);
      tmp |= i2c_master_read_reg(ACC_ADDR, LSM303_OUT_X_H_A) << 8;
      acc_data.x = (int16_t) tmp;

      tmp = i2c_master_read_reg(ACC_ADDR, LSM303_OUT_Y_L_A);
      tmp |= i2c_master_read_reg(ACC_ADDR, LSM303_OUT_Y_H_A) << 8;
      acc_data.y = (int16_t) tmp;

      tmp = i2c_master_read_reg(ACC_ADDR, LSM303_OUT_Z_L_A);
      tmp |= i2c_master_read_reg(ACC_ADDR, LSM303_OUT_Z_H_A) << 8;
      acc_data.z = (int16_t) tmp;

      tmp = i2c_master_read_reg(MAG_ADDR, LSM303_OUT_X_L_M);
      tmp |= i2c_master_read_reg(MAG_ADDR, LSM303_OUT_X_H_M) << 8;
      mag_data.x = (int16_t) tmp;

      tmp = i2c_master_read_reg(MAG_ADDR, LSM303_OUT_Y_L_M);
      tmp |= i2c_master_read_reg(MAG_ADDR, LSM303_OUT_Y_H_M) << 8;
      mag_data.y = (int16_t) tmp;

      tmp = i2c_master_read_reg(MAG_ADDR, LSM303_OUT_Z_L_M);
      tmp |= i2c_master_read_reg(MAG_ADDR, LSM303_OUT_Z_H_M) << 8;
      mag_data.z = (int16_t) tmp;

      rtos_delay_until(ticks, 100);
   }
}
