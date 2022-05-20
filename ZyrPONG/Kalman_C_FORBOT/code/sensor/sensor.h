#ifndef SENSOR_H_
#define SENSOR_H_

#include "platform_specific.h"

typedef struct
{
   float x;
   float y;
   float z;
} sensor_data_t;

/**
 * @brief Inicjalizacja tasku sensora I2C.
 */
void sensor_task_init(void);

/**
 * @brief Funkcja zwraca predkosc katowa w osi x odczytana przez zyroskop.
 *
 * @return                             Wartosc w osi x odczytana przez czujnik.
 */
float sensor_gyro_get_x(void);

/**
 * @brief Funkcja zwraca predkosc katowa w osi y odczytana przez zyroskop.
 *
 * @return                             Wartosc w osi y odczytana przez czujnik.
 */
float sensor_gyro_get_y(void);

/**
 * @brief Funkcja zwraca predkosc katowa w osi z odczytana przez zyroskop.
 *
 * @return                             Wartosc w osi z odczytana przez czujnik.
 */
float sensor_gyro_get_z(void);

/**
 * @brief Funkcja zwraca przyspieszenie w osi x odczytane przez akcelerometr.
 *
 * @return                             Wartosc w osi x odczytana przez czujnik.
 */
float sensor_acc_get_x(void);

/**
 * @brief Funkcja zwraca przyspieszenie w osi y odczytane przez akcelerometr.
 *
 * @return                             Wartosc w osi y odczytana przez czujnik.
 */
float sensor_acc_get_y(void);

/**
 * @brief Funkcja zwraca przyspieszenie w osi z odczytane przez akcelerometr.
 *
 * @return                             Wartosc w osi z odczytana przez czujnik.
 */
float sensor_acc_get_z(void);

/**
 * @brief Funkcja zwraca natezenie pola magnetycznego w osi x odczytane przez
 *        magnetometr.
 *
 * @return                             Wartosc w osi x odczytana przez czujnik.
 */
float sensor_mag_get_x(void);

/**
 * @brief Funkcja zwraca natezenie pola magnetycznego w osi y odczytane przez
 *        magnetometr.
 *
 * @return                             Wartosc w osi y odczytana przez czujnik.
 */
float sensor_mag_get_y(void);

/**
 * @brief Funkcja zwraca natezenie pola magnetycznego w osi z odczytane przez
 *        magnetometr.
 *
 * @return                             Wartosc w osi z odczytana przez czujnik.
 */
float sensor_mag_get_z(void);

#endif /* SENSOR_H_ */
