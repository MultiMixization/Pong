/*
 * usart.h
 *
 *  Created on: 19 cze 2014
 *      Author: Gandalf
 */

#ifndef USART_H_
#define USART_H_

#include "platform_specific.h"

/**
 * @brief Inicjalizacja interfejsu USART do pracy.
 */
void usart_init(void);

/**
 * @brief Funkcja wysylajaca bufor przez USART.
 *
 * @param [in]buf                      Bufor do wyslania.
 * @param len                          Ilosc bajtow do wyslania.
 */
void usart_send_buf(uint8_t * buf, int32_t len);

#endif /* USART_H_ */
