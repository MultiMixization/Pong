/** \file hdr_rtc.h
 * \brief Header with definition of bits in RTC control registers
 */

/******************************************************************************
* chip: STM32F2xx
* compiler: arm-none-eabi-gcc (Sourcery G++ Lite 2010q4-188) 4.6.2
******************************************************************************/

#ifndef HDR_RTC_H_
#define HDR_RTC_H_

#include "hdr_bitband.h"

/*
+=============================================================================+
| global definitions
+=============================================================================+
*/

/*
+-----------------------------------------------------------------------------+
| RTC_TR - RTC time register
+-----------------------------------------------------------------------------+
*/

#define RTC_TR_PM_bit						22
#define RTC_TR_HT_1_bit						21
#define RTC_TR_HT_0_bit						20
#define RTC_TR_HT_bit						20
#define RTC_TR_HU_3_bit						19
#define RTC_TR_HU_2_bit						18
#define RTC_TR_HU_1_bit						17
#define RTC_TR_HU_0_bit						16
#define RTC_TR_HU_bit						16
#define RTC_TR_MNT_2_bit					14
#define RTC_TR_MNT_1_bit					13
#define RTC_TR_MNT_0_bit					12
#define RTC_TR_MNT_bit						12
#define RTC_TR_MNU_3_bit					11
#define RTC_TR_MNU_2_bit					10
#define RTC_TR_MNU_1_bit					9
#define RTC_TR_MNU_0_bit					8
#define RTC_TR_MNU_bit						8
#define RTC_TR_ST_2_bit						6
#define RTC_TR_ST_1_bit						5
#define RTC_TR_ST_0_bit						4
#define RTC_TR_ST_bit						4
#define RTC_TR_SU_3_bit						3
#define RTC_TR_SU_2_bit						2
#define RTC_TR_SU_1_bit						1
#define RTC_TR_SU_0_bit						0
#define RTC_TR_SU_bit						0

#define RTC_TR_HT_mask						3
#define RTC_TR_HU_mask						15
#define RTC_TR_MNT_mask						7
#define RTC_TR_MNU_mask						15
#define RTC_TR_ST_mask						7
#define RTC_TR_SU_mask						15

#define RTC_TR_PM_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_PM_bit)
#define RTC_TR_HT_1_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_HT_1_bit)
#define RTC_TR_HT_0_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_HT_0_bit)
#define RTC_TR_HU_2_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_HU_2_bit)
#define RTC_TR_HU_1_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_HU_1_bit)
#define RTC_TR_HU_0_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_HU_0_bit)
#define RTC_TR_MNT_2_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_MNT_2_bit)
#define RTC_TR_MNT_1_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_MNT_1_bit)
#define RTC_TR_MNT_0_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_MNT_0_bit)
#define RTC_TR_MNU_3_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_MNU_3_bit)
#define RTC_TR_MNU_2_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_MNU_2_bit)
#define RTC_TR_MNU_1_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_MNU_1_bit)
#define RTC_TR_MNU_0_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_MNU_0_bit)
#define RTC_TR_ST_2_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_ST_2_bit)
#define RTC_TR_ST_1_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_ST_1_bit)
#define RTC_TR_ST_0_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_ST_0_bit)
#define RTC_TR_SU_3_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_SU_3_bit)
#define RTC_TR_SU_2_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_SU_2_bit)
#define RTC_TR_SU_1_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_SU_1_bit)
#define RTC_TR_SU_0_bb						bitband_t m_BITBAND_PERIPH(&RTC->TR, RTC_TR_SU_0_bit)

/*
+-----------------------------------------------------------------------------+
| RTC_DR - RTC date register
+-----------------------------------------------------------------------------+
*/

#define RTC_DR_YT_3_bit						23
#define RTC_DR_YT_2_bit						22
#define RTC_DR_YT_1_bit						21
#define RTC_DR_YT_0_bit						20
#define RTC_DR_YT_bit						20
#define RTC_DR_YU_3_bit						19
#define RTC_DR_YU_2_bit						18
#define RTC_DR_YU_1_bit						17
#define RTC_DR_YU_0_bit						16
#define RTC_DR_YU_bit						16
#define RTC_DR_WDU_2_bit					15
#define RTC_DR_WDU_1_bit					14
#define RTC_DR_WDU_0_bit					13
#define RTC_DR_WDU_bit						13
#define RTC_DR_MT_bit						12
#define RTC_DR_MU_3_bit						11
#define RTC_DR_MU_2_bit						10
#define RTC_DR_MU_1_bit						9
#define RTC_DR_MU_0_bit						8
#define RTC_DR_MU_bit						8
#define RTC_DR_DT_1_bit						5
#define RTC_DR_DT_0_bit						4
#define RTC_DR_DT_bit						4
#define RTC_DR_DU_3_bit						3
#define RTC_DR_DU_2_bit						2
#define RTC_DR_DU_1_bit						1
#define RTC_DR_DU_0_bit						0
#define RTC_DR_DU_bit						0

#define RTC_DR_YT_mask						15
#define RTC_DR_YU_mask						15
#define RTC_DR_MU_mask						7
#define RTC_DR_DT_mask						3
#define RTC_DR_DU_mask						15

#define RTC_DR_WDU_mask						7
#define RTC_DR_WDU_MONDAY					(1<<RTC_DR_WDU_bit)
#define RTC_DR_WDU_TUESDAY					(2<<RTC_DR_WDU_bit)
#define RTC_DR_WDU_WENDEDAY					(3<<RTC_DR_WDU_bit)
#define RTC_DR_WDU_THURSDAY					(4<<RTC_DR_WDU_bit)
#define RTC_DR_WDU_FRIDAY					(5<<RTC_DR_WDU_bit)
#define RTC_DR_WDU_SATURDAY					(6<<RTC_DR_WDU_bit)
#define RTC_DR_WDU_SUNDAY					(7<<RTC_DR_WDU_bit)

#define RTC_DR_YT_3_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_YT_3_bit)
#define RTC_DR_YT_2_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_YT_2_bit)
#define RTC_DR_YT_1_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_YT_1_bit)
#define RTC_DR_YT_0_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_YT_0_bit)
#define RTC_DR_YU_3_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_YU_3_bit)
#define RTC_DR_YU_2_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_YU_2_bit)
#define RTC_DR_YU_1_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_YU_1_bit)
#define RTC_DR_YU_0_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_YU_0_bit)
#define RTC_DR_WDU_2_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_WDU_2_bit)
#define RTC_DR_WDU_1_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_WDU_1_bit)
#define RTC_DR_WDU_0_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_WDU_0_bit)
#define RTC_DR_MT_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_MT_bit)
#define RTC_DR_MU_3_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_MU_3_bit)
#define RTC_DR_MU_2_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_MU_2_bit)
#define RTC_DR_MU_1_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_MU_1_bit)
#define RTC_DR_MU_0_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_MU_0_bit)
#define RTC_DR_DT_1_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_DT_1_bit)
#define RTC_DR_DT_0_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_DT_0_bit)
#define RTC_DR_DU_3_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_DU_3_bit)
#define RTC_DR_DU_2_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_DU_2_bit)
#define RTC_DR_DU_1_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_DU_1_bit)
#define RTC_DR_DU_0_bb						bitband_t m_BITBAND_PERIPH(&RTC->DR, RTC_DR_DU_0_bit)

/*
+-----------------------------------------------------------------------------+
| RTC_CR - RTC control register
+-----------------------------------------------------------------------------+
*/

#define RTC_CR_COE_bit						23
#define RTC_CR_OSEL_1_bit					22
#define RTC_CR_OSEL_0_bit					21
#define RTC_CR_OSEL_bit						21
#define RTC_CR_POL_bit						20
#define RTC_CR_BKP_bit						18
#define RTC_CR_SUB1H_bit					17
#define RTC_CR_ADD1H_bit					16
#define RTC_CR_TSIE_bit						15
#define RTC_CR_WUTIE_bit					14
#define RTC_CR_ALRBIE_bit					13
#define RTC_CR_ALRAIE_bit					12
#define RTC_CR_TSE_bit						11
#define RTC_CR_WUTE_bit						10
#define RTC_CR_ALRBE_bit					9
#define RTC_CR_ALRAE_bit					8
#define RTC_CR_DCE_bit						7
#define RTC_CR_FMT_bit						6
#define RTC_CR_REFCKON_bit					4
#define RTC_CR_TSEDGE_bit					3
#define RTC_CR_WUCKSEL_2_bit				2
#define RTC_CR_WUCKSEL_1_bit				1
#define RTC_CR_WUCKSEL_0_bit				0
#define RTC_CR_WUCKSEL_bit					0

#define RTC_CR_OSEL_mask					3
#define RTC_CR_OSEL_OUTPUT_DISABLED			(0<<RTC_CR_OSEL_bit)
#define RTC_CR_OSEL_ALARM_A_OUTPUT_ENABLED	(1<<RTC_CR_OSEL_bit)
#define RTC_CR_OSEL_ALARM_B_OUTPUT_ENABLED	(2<<RTC_CR_OSEL_bit)
#define RTC_CR_OSEL_WAKEUP_OUTPUT_ENABLED	(3<<RTC_CR_OSEL_bit)

#define RTC_CR_WUCKSEL_mask					7
#define RTC_CR_WUCKSEL_RTCdiv16				(0<<RTC_CR_OSEL_bit)
#define RTC_CR_WUCKSEL_RTCdiv8				(1<<RTC_CR_OSEL_bit)
#define RTC_CR_WUCKSEL_RTCdiv4				(2<<RTC_CR_OSEL_bit)
#define RTC_CR_WUCKSEL_RTCdiv2				(3<<RTC_CR_OSEL_bit)
#define RTC_CR_WUCKSEL_CK_SPRE				(4<<RTC_CR_OSEL_bit)
#define RTC_CR_WUCKSEL_CK_SPRE_2pow16		(6<<RTC_CR_OSEL_bit)

#define RTC_CR_COE_bb						bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_COE_bit)
#define RTC_CR_OSEL_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_OSEL_1_bit)
#define RTC_CR_OSEL_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_OSEL_0_bit)
#define RTC_CR_POL_bb						bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_POL_bit)
#define RTC_CR_BKP_bb						bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_BKP_bit)
#define RTC_CR_SUB1H_bb						bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_SUB1H_bit)
#define RTC_CR_ADD1H_bb						bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_ADD1H_bit)
#define RTC_CR_TSIE_bb						bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_TSIE_bit)
#define RTC_CR_WUTIE_bb						bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_WUTIE_bit)
#define RTC_CR_ALRBIE_bb					bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_ALRBIE_bit)
#define RTC_CR_ALRAIE_bb					bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_ALRAIE_bit)
#define RTC_CR_TSE_bb						bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_TSE_bit)
#define RTC_CR_WUTE_bb						bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_WUTE_bit)
#define RTC_CR_ALRBE_bb						bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_ALRBE_bit)
#define RTC_CR_ALRAE_bb						bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_ALRAE_bit)
#define RTC_CR_DCE_bb						bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_DCE_bit)
#define RTC_CR_FMT_bb						bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_FMT_bit)
#define RTC_CR_REFCKON_bb					bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_REFCKON_bit)
#define RTC_CR_TSEDGE_bb					bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_TSEDGE_bit)
#define RTC_CR_WUCKSEL_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_WUCKSEL_2_bit)
#define RTC_CR_WUCKSEL_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_WUCKSEL_1_bit)
#define RTC_CR_WUCKSEL_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->CR, RTC_CR_WUCKSEL_0_bit)

/*
+-----------------------------------------------------------------------------+
| RTC_ISR - RTC initialization and status register
+-----------------------------------------------------------------------------+
*/

#define RTC_ISR_TAMP1F_bit					13
#define RTC_ISR_TSOVF_bit					12
#define RTC_ISR_TSF_bit						11
#define RTC_ISR_WUTF_bit					10
#define RTC_ISR_ALRBF_bit					9
#define RTC_ISR_ALRAF_bit					8
#define RTC_ISR_INIT_bit					7
#define RTC_ISR_INITF_bit					6
#define RTC_ISR_RSF_bit						5
#define RTC_ISR_INITS_bit					4
#define RTC_ISR_WUTWF_bit					2
#define RTC_ISR_ALRBWF_bit					1
#define RTC_ISR_ALRAWF_bit					0

#define RTC_ISR_TAMP1F_bb					bitband_t m_BITBAND_PERIPH(&RTC->ISR, RTC_ISR_TAMP1F_bit)
#define RTC_ISR_TSOVF_bb					bitband_t m_BITBAND_PERIPH(&RTC->ISR, RTC_ISR_TSOVF_bit)
#define RTC_ISR_TSF_bb						bitband_t m_BITBAND_PERIPH(&RTC->ISR, RTC_ISR_TSF_bit)
#define RTC_ISR_WUTF_bb						bitband_t m_BITBAND_PERIPH(&RTC->ISR, RTC_ISR_WUTF_bit)
#define RTC_ISR_ALRBF_bb					bitband_t m_BITBAND_PERIPH(&RTC->ISR, RTC_ISR_ALRBF_bit)
#define RTC_ISR_ALRAF_bb					bitband_t m_BITBAND_PERIPH(&RTC->ISR, RTC_ISR_ALRAF_bit)
#define RTC_ISR_INIT_bb						bitband_t m_BITBAND_PERIPH(&RTC->ISR, RTC_ISR_INIT_bit)
#define RTC_ISR_INITF_bb					bitband_t m_BITBAND_PERIPH(&RTC->ISR, RTC_ISR_INITF_bit)
#define RTC_ISR_RSF_bb						bitband_t m_BITBAND_PERIPH(&RTC->ISR, RTC_ISR_RSF_bit)
#define RTC_ISR_INITS_bb					bitband_t m_BITBAND_PERIPH(&RTC->ISR, RTC_ISR_INITS_bit)
#define RTC_ISR_WUTWF_bb					bitband_t m_BITBAND_PERIPH(&RTC->ISR, RTC_ISR_WUTWF_bit)
#define RTC_ISR_ALRBWF_bb					bitband_t m_BITBAND_PERIPH(&RTC->ISR, RTC_ISR_ALRAWF_bit)

/*
+-----------------------------------------------------------------------------+
| RTC_PRER - RTC prescaler register
+-----------------------------------------------------------------------------+
*/

#define RTC_PRER_PREDIV_A_6_bit				22
#define RTC_PRER_PREDIV_A_5_bit				21
#define RTC_PRER_PREDIV_A_4_bit				20
#define RTC_PRER_PREDIV_A_3_bit				19
#define RTC_PRER_PREDIV_A_2_bit				18
#define RTC_PRER_PREDIV_A_1_bit				17
#define RTC_PRER_PREDIV_A_0_bit				16
#define RTC_PRER_PREDIV_A_bit				16
#define RTC_PRER_PREDIV_B_12_bit			12
#define RTC_PRER_PREDIV_B_11_bit			11
#define RTC_PRER_PREDIV_B_10_bit			10
#define RTC_PRER_PREDIV_B_9_bit				9
#define RTC_PRER_PREDIV_B_8_bit				8
#define RTC_PRER_PREDIV_B_7_bit				7
#define RTC_PRER_PREDIV_B_6_bit				6
#define RTC_PRER_PREDIV_B_5_bit				5
#define RTC_PRER_PREDIV_B_4_bit				4
#define RTC_PRER_PREDIV_B_3_bit				3
#define RTC_PRER_PREDIV_B_2_bit				2
#define RTC_PRER_PREDIV_B_1_bit				1
#define RTC_PRER_PREDIV_B_0_bit				0
#define RTC_PRER_PREDIV_B_bit				0

#define RTC_PRER_PREDIV_A_6_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_A_6_bit)
#define RTC_PRER_PREDIV_A_5_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_A_5_bit)
#define RTC_PRER_PREDIV_A_4_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_A_4_bit)
#define RTC_PRER_PREDIV_A_3_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_A_3_bit)
#define RTC_PRER_PREDIV_A_2_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_A_2_bit)
#define RTC_PRER_PREDIV_A_1_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_A_1_bit)
#define RTC_PRER_PREDIV_A_0_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_A_0_bit)
#define RTC_PRER_PREDIV_B_12_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_B_12_bit)
#define RTC_PRER_PREDIV_B_11_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_B_11_bit)
#define RTC_PRER_PREDIV_B_10_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_B_10_bit)
#define RTC_PRER_PREDIV_B_9_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_B_9_bit)
#define RTC_PRER_PREDIV_B_8_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_B_8_bit)
#define RTC_PRER_PREDIV_B_7_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_B_7_bit)
#define RTC_PRER_PREDIV_B_6_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_B_6_bit)
#define RTC_PRER_PREDIV_B_5_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_B_5_bit)
#define RTC_PRER_PREDIV_B_4_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_B_4_bit)
#define RTC_PRER_PREDIV_B_3_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_B_3_bit)
#define RTC_PRER_PREDIV_B_2_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_B_2_bit)
#define RTC_PRER_PREDIV_B_1_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_B_1_bit)
#define RTC_PRER_PREDIV_B_0_bb				bitband_t m_BITBAND_PERIPH(&RTC->PRER, RTC_PRER_PREDIV_B_0_bit)

/*
+-----------------------------------------------------------------------------+
| RTC_WUTR - RTC wake up timer register
+-----------------------------------------------------------------------------+
*/

#define RTC_WUTR_WUT_15_bit					15
#define RTC_WUTR_WUT_14_bit					14
#define RTC_WUTR_WUT_13_bit					13
#define RTC_WUTR_WUT_12_bit					12
#define RTC_WUTR_WUT_11_bit					11
#define RTC_WUTR_WUT_10_bit					10
#define RTC_WUTR_WUT_9_bit					9
#define RTC_WUTR_WUT_8_bit					8
#define RTC_WUTR_WUT_7_bit					7
#define RTC_WUTR_WUT_6_bit					6
#define RTC_WUTR_WUT_5_bit					5
#define RTC_WUTR_WUT_4_bit					4
#define RTC_WUTR_WUT_3_bit					3
#define RTC_WUTR_WUT_2_bit					2
#define RTC_WUTR_WUT_1_bit					1
#define RTC_WUTR_WUT_0_bit					0
#define RTC_WUTR_WUT_bit					0

#define RTC_WUTR_WUT_15_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_15_bit)
#define RTC_WUTR_WUT_14_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_14_bit)
#define RTC_WUTR_WUT_13_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_13_bit)
#define RTC_WUTR_WUT_12_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_12_bit)
#define RTC_WUTR_WUT_11_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_11_bit)
#define RTC_WUTR_WUT_10_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_10_bit)
#define RTC_WUTR_WUT_9_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_9_bit)
#define RTC_WUTR_WUT_8_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_8_bit)
#define RTC_WUTR_WUT_7_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_7_bit)
#define RTC_WUTR_WUT_6_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_6_bit)
#define RTC_WUTR_WUT_5_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_5_bit)
#define RTC_WUTR_WUT_4_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_4_bit)
#define RTC_WUTR_WUT_3_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_3_bit)
#define RTC_WUTR_WUT_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_2_bit)
#define RTC_WUTR_WUT_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_1_bit)
#define RTC_WUTR_WUT_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->WUTR, RTC_PRER_WUT_0_bit)

/*
+-----------------------------------------------------------------------------+
| RTC_CALIBR - RTC calibration register
+-----------------------------------------------------------------------------+
*/

#define RTC_CALIBR_DCS_bit					7
#define RTC_CALIBR_DC_4_bit					4
#define RTC_CALIBR_DC_3_bit					3
#define RTC_CALIBR_DC_2_bit					2
#define RTC_CALIBR_DC_1_bit					1
#define RTC_CALIBR_DC_0_bit					0
#define RTC_CALIBR_DC_bit					0

#define RTC_CALIBR_DCS_bb					bitband_t m_BITBAND_PERIPH(&RTC->CALIBR, RTC_CALIBR_DCS_bit)
#define RTC_CALIBR_DC_4_bb					bitband_t m_BITBAND_PERIPH(&RTC->CALIBR, RTC_CALIBR_DC_4_bit)
#define RTC_CALIBR_DC_3_bb					bitband_t m_BITBAND_PERIPH(&RTC->CALIBR, RTC_CALIBR_DC_3_bit)
#define RTC_CALIBR_DC_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->CALIBR, RTC_CALIBR_DC_2_bit)
#define RTC_CALIBR_DC_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->CALIBR, RTC_CALIBR_DC_1_bit)
#define RTC_CALIBR_DC_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->CALIBR, RTC_CALIBR_DC_0_bit)

/*
+-----------------------------------------------------------------------------+
| RTC_ALRMAR - RTC alarm A register
+-----------------------------------------------------------------------------+
*/

#define RTC_ALRMAR_MSK4_bit					31
#define RTC_ALRMAR_WDSEL_bit				30
#define RTC_ALRMAR_DT_1_bit					29
#define RTC_ALRMAR_DT_0_bit					28
#define RTC_ALRMAR_DU_3_bit					27
#define RTC_ALRMAR_DU_2_bit					26
#define RTC_ALRMAR_DU_1_bit					25
#define RTC_ALRMAR_DU_0_bit					24
#define RTC_ALRMAR_DU_bit					24
#define RTC_ALRMAR_MSK3_bit					23
#define RTC_ALRMAR_PM_bit					22
#define RTC_ALRMAR_HT_1_bit					21
#define RTC_ALRMAR_HT_0_bit					20
#define RTC_ALRMAR_HT_bit					20
#define RTC_ALRMAR_HU_3_bit					19
#define RTC_ALRMAR_HU_2_bit					18
#define RTC_ALRMAR_HU_1_bit					17
#define RTC_ALRMAR_HU_0_bit					16
#define RTC_ALRMAR_HU_bit					16
#define RTC_ALRMAR_MSK2_bit					15
#define RTC_ALRMAR_MNT_2_bit				14
#define RTC_ALRMAR_MNT_1_bit				13
#define RTC_ALRMAR_MNT_0_bit				12
#define RTC_ALRMAR_MNT_bit					12
#define RTC_ALRMAR_MNU_2_bit				11
#define RTC_ALRMAR_MNU_1_bit				10
#define RTC_ALRMAR_MNU_0_bit				9
#define RTC_ALRMAR_MNU_bit					8
#define RTC_ALRMAR_MSK1_bit					7
#define RTC_ALRMAR_ST_2_bit					6
#define RTC_ALRMAR_ST_1_bit					5
#define RTC_ALRMAR_ST_0_bit					4
#define RTC_ALRMAR_ST_bit					4
#define RTC_ALRMAR_SU_3_bit					3
#define RTC_ALRMAR_SU_2_bit					2
#define RTC_ALRMAR_SU_1_bit					1
#define RTC_ALRMAR_SU_0_bit					0
#define RTC_ALRMAR_SU_bit					0

#define RTC_ALRMAR_MSK4_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_MSK4_bit)
#define RTC_ALRMAR_WDSEL_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_WDSEL_bit)
#define RTC_ALRMAR_DT_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_DT_1_bit)
#define RTC_ALRMAR_DT_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_DT_0_bit)
#define RTC_ALRMAR_DU_3_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_DU_3_bit)
#define RTC_ALRMAR_DU_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_DU_2_bit)
#define RTC_ALRMAR_DU_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_DU_1_bit)
#define RTC_ALRMAR_DU_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_DU_0_bit)
#define RTC_ALRMAR_MSK3_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_MSK3_bit)
#define RTC_ALRMAR_PM_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_PM_bit)
#define RTC_ALRMAR_HT_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_HT_1_bit)
#define RTC_ALRMAR_HT_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_HT_0_bit)
#define RTC_ALRMAR_HU_3_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_HU_3_bit)
#define RTC_ALRMAR_HU_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_HU_2_bit)
#define RTC_ALRMAR_HU_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_HU_1_bit)
#define RTC_ALRMAR_HU_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_HU_0_bit)
#define RTC_ALRMAR_MSK2_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_MSK2_bit)
#define RTC_ALRMAR_MNT_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_MNT_2_bit)
#define RTC_ALRMAR_MNT_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_MNT_1_bit)
#define RTC_ALRMAR_MNT_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_MNT_0_bit)
#define RTC_ALRMAR_MNU_3_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_MNU_3_bit)
#define RTC_ALRMAR_MNU_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_MNU_2_bit)
#define RTC_ALRMAR_MNU_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_MNU_1_bit)
#define RTC_ALRMAR_MNU_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_MNU_0_bit)
#define RTC_ALRMAR_MSK1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_MSK1_bit)
#define RTC_ALRMAR_ST_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_ST_2_bit)
#define RTC_ALRMAR_ST_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_ST_1_bit)
#define RTC_ALRMAR_ST_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_ST_0_bit)
#define RTC_ALRMAR_SU_3_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_SU_3_bit)
#define RTC_ALRMAR_SU_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_SU_2_bit)
#define RTC_ALRMAR_SU_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_SU_1_bit)
#define RTC_ALRMAR_SU_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMAR, RTC_ALRMAR_SU_0_bit)

/*
+-----------------------------------------------------------------------------+
| RTC_ALRMBR - RTC alarm B register
+-----------------------------------------------------------------------------+
*/

#define RTC_ALRMBR_MSK4_bit					31
#define RTC_ALRMBR_WDSEL_bit				30
#define RTC_ALRMBR_DT_1_bit					29
#define RTC_ALRMBR_DT_0_bit					28
#define RTC_ALRMBR_DU_3_bit					27
#define RTC_ALRMBR_DU_2_bit					26
#define RTC_ALRMBR_DU_1_bit					25
#define RTC_ALRMBR_DU_0_bit					24
#define RTC_ALRMBR_DU_bit					24
#define RTC_ALRMBR_MSK3_bit					23
#define RTC_ALRMBR_PM_bit					22
#define RTC_ALRMBR_HT_1_bit					21
#define RTC_ALRMBR_HT_0_bit					20
#define RTC_ALRMBR_HT_bit					20
#define RTC_ALRMBR_HU_3_bit					19
#define RTC_ALRMBR_HU_2_bit					18
#define RTC_ALRMBR_HU_1_bit					17
#define RTC_ALRMBR_HU_0_bit					16
#define RTC_ALRMBR_HU_bit					16
#define RTC_ALRMBR_MSK2_bit					15
#define RTC_ALRMBR_MNT_2_bit				14
#define RTC_ALRMBR_MNT_1_bit				13
#define RTC_ALRMBR_MNT_0_bit				12
#define RTC_ALRMBR_MNT_bit					12
#define RTC_ALRMBR_MNU_2_bit				11
#define RTC_ALRMBR_MNU_1_bit				10
#define RTC_ALRMBR_MNU_0_bit				9
#define RTC_ALRMBR_MNU_bit					8
#define RTC_ALRMBR_MSK1_bit					7
#define RTC_ALRMBR_ST_2_bit					6
#define RTC_ALRMBR_ST_1_bit					5
#define RTC_ALRMBR_ST_0_bit					4
#define RTC_ALRMBR_ST_bit					4
#define RTC_ALRMBR_SU_3_bit					3
#define RTC_ALRMBR_SU_2_bit					2
#define RTC_ALRMBR_SU_1_bit					1
#define RTC_ALRMBR_SU_0_bit					0
#define RTC_ALRMBR_SU_bit					0

#define RTC_ALRMBR_MSK4_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_MSK4_bit)
#define RTC_ALRMBR_WDSEL_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_WDSEL_bit)
#define RTC_ALRMBR_DT_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_DT_1_bit)
#define RTC_ALRMBR_DT_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_DT_0_bit)
#define RTC_ALRMBR_DU_3_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_DU_3_bit)
#define RTC_ALRMBR_DU_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_DU_2_bit)
#define RTC_ALRMBR_DU_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_DU_1_bit)
#define RTC_ALRMBR_DU_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_DU_0_bit)
#define RTC_ALRMBR_MSK3_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_MSK3_bit)
#define RTC_ALRMBR_PM_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_PM_bit)
#define RTC_ALRMBR_HT_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_HT_1_bit)
#define RTC_ALRMBR_HT_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_HT_0_bit)
#define RTC_ALRMBR_HU_3_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_HU_3_bit)
#define RTC_ALRMBR_HU_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_HU_2_bit)
#define RTC_ALRMBR_HU_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_HU_1_bit)
#define RTC_ALRMBR_HU_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_HU_0_bit)
#define RTC_ALRMBR_MSK2_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_MSK2_bit)
#define RTC_ALRMBR_MNT_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_MNT_2_bit)
#define RTC_ALRMBR_MNT_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_MNT_1_bit)
#define RTC_ALRMBR_MNT_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_MNT_0_bit)
#define RTC_ALRMBR_MNU_3_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_MNU_3_bit)
#define RTC_ALRMBR_MNU_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_MNU_2_bit)
#define RTC_ALRMBR_MNU_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_MNU_1_bit)
#define RTC_ALRMBR_MNU_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_MNU_0_bit)
#define RTC_ALRMBR_MSK1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_MSK1_bit)
#define RTC_ALRMBR_ST_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_ST_2_bit)
#define RTC_ALRMBR_ST_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_ST_1_bit)
#define RTC_ALRMBR_ST_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_ST_0_bit)
#define RTC_ALRMBR_SU_3_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_SU_3_bit)
#define RTC_ALRMBR_SU_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_SU_2_bit)
#define RTC_ALRMBR_SU_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_SU_1_bit)
#define RTC_ALRMBR_SU_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->ALRMBR, RTC_ALRMBR_SU_0_bit)

/*
+-----------------------------------------------------------------------------+
| RTC_WPR - RTC write protection register
+-----------------------------------------------------------------------------+
*/

#define RTC_WPR_KEY1						0xCA
#define RTC_WPR_KEY2						0x53

/*
+-----------------------------------------------------------------------------+
| RTC_TSTR - RTC time stamp time register
+-----------------------------------------------------------------------------+
*/

#define RTC_TSTR_PM_bit						22
#define RTC_TSTR_HT_1_bit					21
#define RTC_TSTR_HT_0_bit					20
#define RTC_TSTR_HT_bit						20
#define RTC_TSTR_HU_3_bit					19
#define RTC_TSTR_HU_2_bit					18
#define RTC_TSTR_HU_1_bit					17
#define RTC_TSTR_HU_0_bit					16
#define RTC_TSTR_HU_bit						16
#define RTC_TSTR_MNT_2_bit					14
#define RTC_TSTR_MNT_1_bit					13
#define RTC_TSTR_MNT_0_bit					12
#define RTC_TSTR_MNT_bit					12
#define RTC_TSTR_MNU_3_bit					11
#define RTC_TSTR_MNU_2_bit					10
#define RTC_TSTR_MNU_1_bit					9
#define RTC_TSTR_MNU_0_bit					8
#define RTC_TSTR_MNU_bit					8
#define RTC_TSTR_ST_2_bit					6
#define RTC_TSTR_ST_1_bit					5
#define RTC_TSTR_ST_0_bit					4
#define RTC_TSTR_ST_bit						4
#define RTC_TSTR_SU_3_bit					3
#define RTC_TSTR_SU_2_bit					2
#define RTC_TSTR_SU_1_bit					1
#define RTC_TSTR_SU_0_bit					0
#define RTC_TSTR_SU_bit						0

#define RTC_TSTR_PM_bb						bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_PM_bit)
#define RTC_TSTR_HT_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_HT_1_bit)
#define RTC_TSTR_HT_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_HT_0_bit)
#define RTC_TSTR_HU_3_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_HU_3_bit)
#define RTC_TSTR_HU_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_HU_2_bit)
#define RTC_TSTR_HU_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_HU_1_bit)
#define RTC_TSTR_HU_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_HU_0_bit)
#define RTC_TSTR_MNT_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_MNT_2_bit)
#define RTC_TSTR_MNT_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_MNT_1_bit)
#define RTC_TSTR_MNT_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_MNT_0_bit)
#define RTC_TSTR_MNU_3_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_MNU_3_bit)
#define RTC_TSTR_MNU_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_MNU_2_bit)
#define RTC_TSTR_MNU_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_MNU_1_bit)
#define RTC_TSTR_MNU_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_MNU_0_bit)
#define RTC_TSTR_ST_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_ST_2_bit)
#define RTC_TSTR_ST_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_ST_1_bit)
#define RTC_TSTR_ST_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_ST_0_bit)
#define RTC_TSTR_SU_3_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_SU_3_bit)
#define RTC_TSTR_SU_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_SU_2_bit)
#define RTC_TSTR_SU_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_SU_1_bit)
#define RTC_TSTR_SU_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSTR, RTC_TSTR_SU_0_bit)

/*
+-----------------------------------------------------------------------------+
| RTC_TSDR - RTC time stamp date register
+-----------------------------------------------------------------------------+
*/

#define RTC_TSDR_WDU_2_bit					15
#define RTC_TSDR_WDU_1_bit					14
#define RTC_TSDR_WDU_0_bit					13
#define RTC_TSDR_WDU_bit					13
#define RTC_TSDR_MT_bit						12
#define RTC_TSDR_MU_3_bit					11
#define RTC_TSDR_MU_2_bit					10
#define RTC_TSDR_MU_1_bit					9
#define RTC_TSDR_MU_0_bit					8
#define RTC_TSDR_MU_bit						8
#define RTC_TSDR_DT_1_bit					5
#define RTC_TSDR_DT_0_bit					4
#define RTC_TSDR_DT_bit						4
#define RTC_TSDR_DU_3_bit					3
#define RTC_TSDR_DU_2_bit					2
#define RTC_TSDR_DU_1_bit					1
#define RTC_TSDR_DU_0_bit					0
#define RTC_TSDR_DU_bit						0

#define RTC_TSDR_WDU_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSDR, RTC_TSDR_WDU_2_bit)
#define RTC_TSDR_WDU_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSDR, RTC_TSDR_WDU_1_bit)
#define RTC_TSDR_WDU_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSDR, RTC_TSDR_WDU_0_bit)
#define RTC_TSDR_MT_bb						bitband_t m_BITBAND_PERIPH(&RTC->TSDR, RTC_TSDR_MT_bit)
#define RTC_TSDR_MU_3_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSDR, RTC_TSDR_MU_3_bit)
#define RTC_TSDR_MU_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSDR, RTC_TSDR_MU_2_bit)
#define RTC_TSDR_MU_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSDR, RTC_TSDR_MU_1_bit)
#define RTC_TSDR_MU_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSDR, RTC_TSDR_MU_0_bit)
#define RTC_TSDR_DT_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSDR, RTC_TSDR_DT_1_bit)
#define RTC_TSDR_DT_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSDR, RTC_TSDR_DT_0_bit)
#define RTC_TSDR_DU_3_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSDR, RTC_TSDR_DU_3_bit)
#define RTC_TSDR_DU_2_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSDR, RTC_TSDR_DU_2_bit)
#define RTC_TSDR_DU_1_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSDR, RTC_TSDR_DU_1_bit)
#define RTC_TSDR_DU_0_bb					bitband_t m_BITBAND_PERIPH(&RTC->TSDR, RTC_TSDR_DU_0_bit)

/*
+-----------------------------------------------------------------------------+
| RTC_TAFCR - RTC tamper and alternate function configuration register
+-----------------------------------------------------------------------------+
*/

#define RTC_TAFCR_ALARMOUTTYPE_bit			18
#define RTC_TAFCR_TSINSEL_bit				17
#define RTC_TAFCR_TAMP1INSEL_bit			16
#define RTC_TAFCR_TAMPIE_bit				2
#define RTC_TAFCR_TAMP1TRG_bit				1
#define RTC_TAFCR_TAMP1E_bit				0

#define RTC_TAFCR_ALARMOUTTYPE_bb			bitband_t m_BITBAND_PERIPH(&RTC->TAFCR, RTC_TAFCR_ALARMOUTTYPE_bit)
#define RTC_TAFCR_TSINSEL_bb				bitband_t m_BITBAND_PERIPH(&RTC->TAFCR, RTC_TAFCR_TSINSEL_bit)
#define RTC_TAFCR_TAMP1INSEL_bb				bitband_t m_BITBAND_PERIPH(&RTC->TAFCR, RTC_TAFCR_TAMP1INSEL_bit)
#define RTC_TAFCR_TAMPIE_bb					bitband_t m_BITBAND_PERIPH(&RTC->TAFCR, RTC_TAFCR_TAMPIE_bit)
#define RTC_TAFCR_TAMP1TRG_bb				bitband_t m_BITBAND_PERIPH(&RTC->TAFCR, RTC_TAFCR_TAMP1TRG_bit)
#define RTC_TAFCR_TAMP1E_bb					bitband_t m_BITBAND_PERIPH(&RTC->TAFCR, RTC_TAFCR_TAMP1E_bit)

/******************************************************************************
* END OF FILE
******************************************************************************/
#endif /* HDR_RTC_H_ */
