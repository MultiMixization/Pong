/** \file hdr_dma.h
 * \brief Header with definition of bits in DMA control registers
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-04-12
 */

/******************************************************************************
 * chip: STM32F10x
 * compiler: arm-none-eabi-gcc (Sourcery G++ Lite 2010q1-188) 4.4.1
 ******************************************************************************/

#ifndef HDR_DMA_H_
#define HDR_DMA_H_

#include "define/hdr_bitband.h"

/*
 +=============================================================================+
 | global definitions
 +=============================================================================+
 */

/*
 +-----------------------------------------------------------------------------+
 | DMA2->LISR register
 +-----------------------------------------------------------------------------+
 */

#define DMA2_S3_TCIF_bit	 	(27)
#define DMA2_S3_HTIF_bit		(26)
#define DMA2_S3_TEIF_bit 		(25)
#define DMA2_S3_DMEIF_bit 		(24)
#define DMA2_S3_FEIF_bit 		(22)
#define DMA2_S2_TCIF_bit	 	(21)
#define DMA2_S2_HTIF_bit		(20)
#define DMA2_S2_TEIF_bit 		(19)
#define DMA2_S2_DMEIF_bit 		(18)
#define DMA2_S2_FEIF_bit 		(16)
#define DMA2_S1_TCIF_bit	 	(11)
#define DMA2_S1_HTIF_bit		(10)
#define DMA2_S1_TEIF_bit 		(9)
#define DMA2_S1_DMEIF_bit 		(8)
#define DMA2_S1_FEIF_bit 		(6)
#define DMA2_S0_TCIF_bit	 	(5)
#define DMA2_S0_HTIF_bit		(4)
#define DMA2_S0_TEIF_bit 		(3)
#define DMA2_S0_DMEIF_bit 		(2)
#define DMA2_S0_FEIF_bit 		(0)

#define DMA2_TCIF0_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S0_TCIF_bit)
#define DMA2_HTIF0_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S0_HTIF_bit)
#define DMA2_TEIF0_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S0_TEIF_bit)
#define DMA2_DMEIF0_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S0_DMEIF_bit)
#define DMA2_FEIF0_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S0_FEIF_bit)

#define DMA2_TCIF1_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S1_TCIF_bit)
#define DMA2_HTIF1_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S1_HTIF_bit)
#define DMA2_TEIF1_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S1_TEIF_bit)
#define DMA2_DMEIF1_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S1_DMEIF_bit)
#define DMA2_FEIF1_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S1_FEIF_bit)

#define DMA2_TCIF2_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S2_TCIF_bit)
#define DMA2_HTIF2_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S2_HTIF_bit)
#define DMA2_TEIF2_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S2_TEIF_bit)
#define DMA2_DMEIF2_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S2_DMEIF_bit)
#define DMA2_FEIF2_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S2_FEIF_bit)

#define DMA2_TCIF3_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S3_TCIF_bit)
#define DMA2_HTIF3_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S3_HTIF_bit)
#define DMA2_TEIF3_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S3_TEIF_bit)
#define DMA2_DMEIF3_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S3_DMEIF_bit)
#define DMA2_FEIF3_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S3_FEIF_bit)

#define DMA2_TCIF4_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S0_TCIF_bit)
#define DMA2_HTIF4_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S0_HTIF_bit)
#define DMA2_TEIF4_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S0_TEIF_bit)
#define DMA2_DMEIF4_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S0_DMEIF_bit)
#define DMA2_FEIF4_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S0_FEIF_bit)

#define DMA2_TCIF5_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S1_TCIF_bit)
#define DMA2_HTIF5_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S1_HTIF_bit)
#define DMA2_TEIF5_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S1_TEIF_bit)
#define DMA2_DMEIF5_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S1_DMEIF_bit)
#define DMA2_FEIF5_bb 	bitband_t m_BITBAND_PERIPH(&DMA2->LISR, DMA2_S1_FEIF_bit)

/*
 +-----------------------------------------------------------------------------+
 | DMA2 Stream enable definition
 +-----------------------------------------------------------------------------+
 */

#define DMA2_EN_bb 		(0)

#define DMA2_S0_EN_bb 	bitband_t m_BITBAND_PERIPH(&DMA2_Stream0->CR, DMA2_EN_bb)
#define DMA2_S1_EN_bb 	bitband_t m_BITBAND_PERIPH(&DMA2_Stream1->CR, DMA2_EN_bb)
#define DMA2_S2_EN_bb 	bitband_t m_BITBAND_PERIPH(&DMA2_Stream2->CR, DMA2_EN_bb)
#define DMA2_S3_EN_bb 	bitband_t m_BITBAND_PERIPH(&DMA2_Stream3->CR, DMA2_EN_bb)

#define DMA2_S4_EN_bb 	bitband_t m_BITBAND_PERIPH(&DMA2_Stream4->CR, DMA2_EN_bb)
#define DMA2_S5_EN_bb 	bitband_t m_BITBAND_PERIPH(&DMA2_Stream5->CR, DMA2_EN_bb)
#define DMA2_S6_EN_bb 	bitband_t m_BITBAND_PERIPH(&DMA2_Stream6->CR, DMA2_EN_bb)
#define DMA2_S7_EN_bb 	bitband_t m_BITBAND_PERIPH(&DMA2_Stream7->CR, DMA2_EN_bb)

/******************************************************************************
 * END OF FILE
 ******************************************************************************/
#endif /* HDR_DMA_H_ */
