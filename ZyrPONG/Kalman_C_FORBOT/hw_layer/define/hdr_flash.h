/** \file hdr_flash.h
 * \brief Header with definition of bits in FLASH control registers
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-04-12
 */

/******************************************************************************
* chip: STM32F10x
* compiler: arm-none-eabi-gcc (Sourcery G++ Lite 2010q1-188) 4.4.1
******************************************************************************/

#ifndef HDR_FLASH_H_
#define HDR_FLASH_H_

#include "hdr_bitband.h"

/*
+=============================================================================+
| global definitions
+=============================================================================+
*/

/*
+-----------------------------------------------------------------------------+
| FLASH_ACR - Flash access control register
+-----------------------------------------------------------------------------+
*/

#define FLASH_ACR_LATENCY_bit				0
#define FLASH_ACR_LATENCY_0_bit				0
#define FLASH_ACR_LATENCY_1_bit				1
#define FLASH_ACR_LATENCY_2_bit				2
#define FLASH_ACR_PRFTEN_bit				8
#define FLASH_ACR_ICEN_bit					9
#define FLASH_ACR_DCEN_bit					10
#define FLASH_ACR_ICRST_bit					11
#define FLASH_ACR_DCRST_bit					12

#define FLASH_ACR_LATENCY_0WS_value			0
#define FLASH_ACR_LATENCY_1WS_value			1
#define FLASH_ACR_LATENCY_2WS_value			2
#define FLASH_ACR_LATENCY_3WS_value			3
#define FLASH_ACR_LATENCY_4WS_value			4
#define FLASH_ACR_LATENCY_5WS_value			5
#define FLASH_ACR_LATENCY_6WS_value			6
#define FLASH_ACR_LATENCY_7WS_value			7
#define FLASH_ACR_LATENCY_mask				0x07

#ifndef FLASH_ACR_LATENCY_7WS
#define FLASH_ACR_LATENCY_0WS				(FLASH_ACR_LATENCY_0WS_value << FLASH_ACR_LATENCY_bit)
#define FLASH_ACR_LATENCY_1WS				(FLASH_ACR_LATENCY_1WS_value << FLASH_ACR_LATENCY_bit)
#define FLASH_ACR_LATENCY_2WS				(FLASH_ACR_LATENCY_2WS_value << FLASH_ACR_LATENCY_bit)
#define FLASH_ACR_LATENCY_3WS				(FLASH_ACR_LATENCY_3WS_value << FLASH_ACR_LATENCY_bit)
#define FLASH_ACR_LATENCY_4WS				(FLASH_ACR_LATENCY_4WS_value << FLASH_ACR_LATENCY_bit)
#define FLASH_ACR_LATENCY_5WS				(FLASH_ACR_LATENCY_5WS_value << FLASH_ACR_LATENCY_bit)
#define FLASH_ACR_LATENCY_6WS				(FLASH_ACR_LATENCY_6WS_value << FLASH_ACR_LATENCY_bit)
#define FLASH_ACR_LATENCY_7WS				(FLASH_ACR_LATENCY_7WS_value << FLASH_ACR_LATENCY_bit)
#endif

#define FLASH_ACR_PRFTEN_bb					bitband_t m_BITBAND_PERIPH(&FLASH->ACR, FLASH_ACR_PRFTEN_bit)
#define FLASH_ACR_ICEN_bb					bitband_t m_BITBAND_PERIPH(&FLASH->ACR, FLASH_ACR_ICEN_bit)
#define FLASH_ACR_DCEN_bb					bitband_t m_BITBAND_PERIPH(&FLASH->ACR, FLASH_ACR_DCEN_bit)
#define FLASH_ACR_ICRST_bb					bitband_t m_BITBAND_PERIPH(&FLASH->ACR, FLASH_ACR_ICRST_bit)
#define FLASH_ACR_DCRST_bb					bitband_t m_BITBAND_PERIPH(&FLASH->ACR, FLASH_ACR_DCRST_bit)
#define FLASH_ACR_LATENCY_0_bb				bitband_t m_BITBAND_PERIPH(&FLASH->ACR, FLASH_ACR_LATENCY_0_bit)
#define FLASH_ACR_LATENCY_1_bb				bitband_t m_BITBAND_PERIPH(&FLASH->ACR, FLASH_ACR_LATENCY_1_bit)
#define FLASH_ACR_LATENCY_2_bb				bitband_t m_BITBAND_PERIPH(&FLASH->ACR, FLASH_ACR_LATENCY_2_bit)

/*
+-----------------------------------------------------------------------------+
| FLASH_KEYR - FPEC key register
+-----------------------------------------------------------------------------+
*/

#define FLASH_KEYR_KEY1						0x45670123
#define FLASH_KEYR_KEY2						0xCDEF89AB

/*
+-----------------------------------------------------------------------------+
| FLASH_OPTKEYR - Flash OPTKEY register
+-----------------------------------------------------------------------------+
*/

#define FLASH_OPTKEYR_KEY1					0x08192A3B
#define FLASH_OPTKEYR_KEY2					0x4C5D6E7F

/*
+-----------------------------------------------------------------------------+
| FLASH_SR - Flash status register
+-----------------------------------------------------------------------------+
*/

#define FLASH_SR_BSY_bit					16
#define FLASH_SR_PGSERR_bit					7
#define FLASH_SR_PGPERR_bit					6
#define FLASH_SR_PGAERR_bit					5
#define FLASH_SR_WRPERR_bit					4
#define FLASH_SR_OPERR_bit					1
#define FLASH_SR_EOP_bit					0

#define FLASH_SR_BSY_bb						bitband_t m_BITBAND_PERIPH(&FLASH->SR, FLASH_SR_BSY_bit)
#define FLASH_SR_PGSERR_bb					bitband_t m_BITBAND_PERIPH(&FLASH->SR, FLASH_SR_PGSERR_bit)
#define FLASH_SR_PGPERR_bb					bitband_t m_BITBAND_PERIPH(&FLASH->SR, FLASH_SR_PGPERR_bit)
#define FLASH_SR_PGAERR_bb					bitband_t m_BITBAND_PERIPH(&FLASH->SR, FLASH_SR_PGAERR_bit)
#define FLASH_SR_WRPERR_bb					bitband_t m_BITBAND_PERIPH(&FLASH->SR, FLASH_SR_WRPERR_bit)
#define FLASH_SR_OPERR_bb					bitband_t m_BITBAND_PERIPH(&FLASH->SR, FLASH_SR_OPERR_bit)
#define FLASH_SR_EOP_bb						bitband_t m_BITBAND_PERIPH(&FLASH->SR, FLASH_SR_EOP_bit)

/*
+-----------------------------------------------------------------------------+
| FLASH_CR - Flash control register
+-----------------------------------------------------------------------------+
*/

#define FLASH_CR_LOCK_bit					31
#define FLASH_CR_ERRIE_bit					25
#define FLASH_CR_EOPIE_bit					24
#define FLASH_CR_STRT_bit					16
#define FLASH_CR_PSIZE_1_bit				9
#define FLASH_CR_PSIZE_0_bit				8
#define FLASH_CR_PSIZE_bit					8
#define FLASH_CR_SNB_3_bit					6
#define FLASH_CR_SNB_2_bit					5
#define FLASH_CR_SNB_1_bit					4
#define FLASH_CR_SNB_0_bit					3
#define FLASH_CR_SNB_bit					3
#define FLASH_CR_MER_bit					2
#define FLASH_CR_SER_bit					1
#define FLASH_CR_PG_bit						0

#define FLASH_CR_PSIZE_PROGRAMx08			0
#define FLASH_CR_PSIZE_PROGRAMx16			1
#define FLASH_CR_PSIZE_PROGRAMx32			2
#define FLASH_CR_PSIZE_PROGRAMx64			3
#define FLASH_CR_PSIZE_mask					0x00000300
#define FLASH_CR_SNB_mask					0x00000078

#define FLASH_CR_LOCK_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_LOCK_bit)
#define FLASH_CR_ERRIE_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_ERRIE_bit)
#define FLASH_CR_EOPIE_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_EOPIE_bit)
#define FLASH_CR_STRT_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_STRT_bit)
#define FLASH_CR_PSIZE_1_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_PSIZE_1_bit)
#define FLASH_CR_PSIZE_0_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_PSIZE_0_bit)
#define FLASH_CR_SNB_3_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_SNB_3_bit)
#define FLASH_CR_SNB_2_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_SNB_2_bit)
#define FLASH_CR_SNB_1_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_SNB_1_bit)
#define FLASH_CR_SNB_0_bb					bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_SNB_0_bit)
#define FLASH_CR_MER_bb						bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_MER_bit)
#define FLASH_CR_SER_bb						bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_SER_bit)
#define FLASH_CR_PG_bb						bitband_t m_BITBAND_PERIPH(&FLASH->CR, FLASH_CR_PG_bit)


/*
+-----------------------------------------------------------------------------+
| FLASH_OPTCR - Option control register
+-----------------------------------------------------------------------------+
*/

#define FLASH_OPTCR_nWRP_11_bit				27
#define FLASH_OPTCR_nWRP_10_bit				26
#define FLASH_OPTCR_nWRP_9_bit				25
#define FLASH_OPTCR_nWRP_8_bit				24
#define FLASH_OPTCR_nWRP_7_bit				23
#define FLASH_OPTCR_nWRP_6_bit				22
#define FLASH_OPTCR_nWRP_5_bit				21
#define FLASH_OPTCR_nWRP_4_bit				20
#define FLASH_OPTCR_nWRP_3_bit				19
#define FLASH_OPTCR_nWRP_2_bit				18
#define FLASH_OPTCR_nWRP_1_bit				17
#define FLASH_OPTCR_nWRP_0_bit				16
#define FLASH_OPTCR_nWRP_bit				16
#define FLASH_OPTCR_RDP_7_bit				15
#define FLASH_OPTCR_RDP_6_bit				14
#define FLASH_OPTCR_RDP_5_bit				13
#define FLASH_OPTCR_RDP_4_bit				12
#define FLASH_OPTCR_RDP_3_bit				11
#define FLASH_OPTCR_RDP_2_bit				10
#define FLASH_OPTCR_RDP_1_bit				9
#define FLASH_OPTCR_RDP_0_bit				8
#define FLASH_OPTCR_RDP_bit					8
#define FLASH_OPTCR_nRST_STDBY_bit			7
#define FLASH_OPTCR_nRST_STOP_bit			6
#define FLASH_OPTCR_WDG_SW_bit				5
#define FLASH_OPTCR_BOR_LEV_1_bit			3
#define FLASH_OPTCR_BOR_LEV_0_bit			2
#define FLASH_OPTCR_BOR_LEV_bit				2
#define FLASH_OPTCR_OPTSTRT_bit				1
#define FLASH_OPTCR_OPTLOCK_bit				0

#define FLASH_OPTCR_wWRP_mask				0x0FFF0000
#define FLASH_OPTCR_RDP_mask				0x0000FF00
#define FLASH_OPTCR_BOR_LEV_mask			0x00000006

#define FLASH_OPTCR_nWRP_11_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_nWRP_11_bit)
#define FLASH_OPTCR_nWRP_10_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_nWRP_10_bit)
#define FLASH_OPTCR_nWRP_9_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_nWRP_9_bit)
#define FLASH_OPTCR_nWRP_8_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_nWRP_8_bit)
#define FLASH_OPTCR_nWRP_7_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_nWRP_7_bit)
#define FLASH_OPTCR_nWRP_6_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_nWRP_6_bit)
#define FLASH_OPTCR_nWRP_5_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_nWRP_5_bit)
#define FLASH_OPTCR_nWRP_4_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_nWRP_4_bit)
#define FLASH_OPTCR_nWRP_3_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_nWRP_3_bit)
#define FLASH_OPTCR_nWRP_2_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_nWRP_2_bit)
#define FLASH_OPTCR_nWRP_1_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_nWRP_1_bit)
#define FLASH_OPTCR_nWRP_0_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_nWRP_0_bit)
#define FLASH_OPTCR_RDP_7_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_RDP_7_bit)
#define FLASH_OPTCR_RDP_6_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_RDP_6_bit)
#define FLASH_OPTCR_RDP_5_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_RDP_5_bit)
#define FLASH_OPTCR_RDP_4_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_RDP_4_bit)
#define FLASH_OPTCR_RDP_3_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_RDP_3_bit)
#define FLASH_OPTCR_RDP_2_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_RDP_2_bit)
#define FLASH_OPTCR_RDP_1_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_RDP_1_bit)
#define FLASH_OPTCR_RDP_0_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_RDP_0_bit)
#define FLASH_OPTCR_nRST_STDBY_bb			bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_nRST_STDBY_bit)
#define FLASH_OPTCR_nRST_STOP_bb			bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_nRST_STOP_bit)
#define FLASH_OPTCR_WDG_SW_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_WDG_SW_bit)
#define FLASH_BOR_LEV_1_bb					bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_BOR_LEV_1_bit)
#define FLASH_BOR_LEV_0_bb					bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_BOR_LEV_0_bit)
#define FLASH_OPTCR_OPTSTRT_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_OPTSTRT_bit)
#define FLASH_OPTCR_OPTLOCK_bb				bitband_t m_BITBAND_PERIPH(&FLASH->OPTCR, FLASH_OPTCR_OPTLOCK_bit)

/******************************************************************************
* END OF FILE
******************************************************************************/
#endif /* HDR_FLASH_H_ */
