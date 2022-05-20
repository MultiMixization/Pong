#ifndef I2C_MASTER_H_
#define I2C_MASTER_H_

#include "platform_specific.h"

/**
 * @brief Inicjalizacja I2C do pracy w trybie master.
 */
void i2c_master_init(void);

/**
 * @brief Odczytanie wartosci rejestru spod zadanego adresu.
 *
 * @param slave_addr                   Adres slave I2C.
 * @param reg_addr                     Adres rejestru w urzadzeniu I2C.
 *
 * @return                             Odczytana wartosc rejestru.
 */
int32_t i2c_master_read_reg(int32_t slave_addr, int32_t reg_addr);

/**
 * @brief Zapis wartosci do rejestru o zadanym adresie.
 *
 * @param slave_addr                   Adres slave I2C.
 * @param reg_addr                     Adres rejestru w urzadzeniu I2C.
 * @param val                          Wartosc do zapisania w rejestrze.
 */
void i2c_master_write_reg(int32_t slave_addr, int32_t reg_addr, int32_t val);

#endif /* I2C_MASTER_H_ */
