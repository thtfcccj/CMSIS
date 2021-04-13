/*******************************************************************************
 * Copyright (C) 2017, Huada Semiconductor Co.,Ltd All rights reserved.
 *
 * This software is owned and published by:
 * Huada Semiconductor Co.,Ltd. ("HDSC").
 *
 * BY DOWNLOADING, INSTALLING OR USING THIS SOFTWARE, YOU AGREE TO BE BOUND
 * BY ALL THE TERMS AND CONDITIONS OF THIS AGREEMENT.
 *
 * This software contains source code for use with HDSC
 * components. This software is licensed by HDSC to be adapted only
 * for use in systems utilizing HDSC components. HDSC shall not be
 * responsible for misuse or illegal use of this software for devices not
 * supported herein. HDSC is providing this software "AS IS" and will
 * not be responsible for issues arising from incorrect user implementation
 * of the software.
 *
 * Disclaimer:
 * HDSC MAKES NO WARRANTY, EXPRESS OR IMPLIED, ARISING BY LAW OR OTHERWISE,
 * REGARDING THE SOFTWARE (INCLUDING ANY ACCOMPANYING WRITTEN MATERIALS),
 * ITS PERFORMANCE OR SUITABILITY FOR YOUR INTENDED USE, INCLUDING,
 * WITHOUT LIMITATION, THE IMPLIED WARRANTY OF MERCHANTABILITY, THE IMPLIED
 * WARRANTY OF FITNESS FOR A PARTICULAR PURPOSE OR USE, AND THE IMPLIED
 * WARRANTY OF NONINFRINGEMENT.
 * HDSC SHALL HAVE NO LIABILITY (WHETHER IN CONTRACT, WARRANTY, TORT,
 * NEGLIGENCE OR OTHERWISE) FOR ANY DAMAGES WHATSOEVER (INCLUDING, WITHOUT
 * LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION,
 * LOSS OF BUSINESS INFORMATION, OR OTHER PECUNIARY LOSS) ARISING FROM USE OR
 * INABILITY TO USE THE SOFTWARE, INCLUDING, WITHOUT LIMITATION, ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL OR CONSEQUENTIAL DAMAGES OR LOSS OF DATA,
 * SAVINGS OR PROFITS,
 * EVEN IF Disclaimer HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 * YOU ASSUME ALL RESPONSIBILITIES FOR SELECTION OF THE SOFTWARE TO ACHIEVE YOUR
 * INTENDED RESULTS, AND FOR THE INSTALLATION OF, USE OF, AND RESULTS OBTAINED
 * FROM, THE SOFTWARE.
 *
 * This software may be replicated in part or whole for the licensed use,
 * with the restriction that this Disclaimer and Copyright notice must be
 * included with each copy of this software, whether used in part or whole,
 * at all times.
 */
/******************************************************************************/
/** \file HC32F46X.h
 **
 ** Auto generate.
 ** Headerfile for HC32F46X series MCU
 **
 ** History:
 **
 **   - 2020-12-16  1.03   First version for Device Driver Library of HC32F46X series MCU.
 **
 ******************************************************************************/

#ifndef __HC32F46X_H__
#define __HC32F46X_H__

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
 * Configuration of the Cortex-M4 Processor and Core Peripherals
 ******************************************************************************/
#define __CM4_REV                 0x0001  /*!< Core revision r0p1                                   */
#define __MPU_PRESENT             1       /*!< HC32F46X provides an MPU                             */
#define __NVIC_PRIO_BITS          4       /*!< HC32F46X uses 4 Bits for the Priority Levels         */
#define __Vendor_SysTickConfig    0       /*!< Set to 1 if different SysTick Config is used         */
#define __FPU_PRESENT             1       /*!< FPU present                                          */

/*******************************************************************************
 * Interrupt Number Definition
 ******************************************************************************/
typedef enum IRQn
{
    NMI_IRQn            = -14, /*  2 Non Maskable                            */
    HardFault_IRQn      = -13, /*  3 Hard Fault                              */
    MemManageFault_IRQn = -12, /*  4 MemManage Fault                         */
    BusFault_IRQn       = -11, /*  5 Bus Fault                               */
    UsageFault_IRQn     = -10, /*  6 Usage Fault                             */
    SVC_IRQn            = -5,  /* 11 SV Call                                 */
    DM_IRQn             = -4,  /* 12 Debug Monitor                           */
    PendSV_IRQn         = -2,  /* 14 Pend SV                                 */
    SysTick_IRQn        = -1,  /* 15 System Tick                             */
    Int000_IRQn         = 0,
    Int001_IRQn         = 1,
    Int002_IRQn         = 2,
    Int003_IRQn         = 3,
    Int004_IRQn         = 4,
    Int005_IRQn         = 5,
    Int006_IRQn         = 6,
    Int007_IRQn         = 7,
    Int008_IRQn         = 8,
    Int009_IRQn         = 9,
    Int010_IRQn         = 10,
    Int011_IRQn         = 11,
    Int012_IRQn         = 12,
    Int013_IRQn         = 13,
    Int014_IRQn         = 14,
    Int015_IRQn         = 15,
    Int016_IRQn         = 16,
    Int017_IRQn         = 17,
    Int018_IRQn         = 18,
    Int019_IRQn         = 19,
    Int020_IRQn         = 20,
    Int021_IRQn         = 21,
    Int022_IRQn         = 22,
    Int023_IRQn         = 23,
    Int024_IRQn         = 24,
    Int025_IRQn         = 25,
    Int026_IRQn         = 26,
    Int027_IRQn         = 27,
    Int028_IRQn         = 28,
    Int029_IRQn         = 29,
    Int030_IRQn         = 30,
    Int031_IRQn         = 31,
    Int032_IRQn         = 32,
    Int033_IRQn         = 33,
    Int034_IRQn         = 34,
    Int035_IRQn         = 35,
    Int036_IRQn         = 36,
    Int037_IRQn         = 37,
    Int038_IRQn         = 38,
    Int039_IRQn         = 39,
    Int040_IRQn         = 40,
    Int041_IRQn         = 41,
    Int042_IRQn         = 42,
    Int043_IRQn         = 43,
    Int044_IRQn         = 44,
    Int045_IRQn         = 45,
    Int046_IRQn         = 46,
    Int047_IRQn         = 47,
    Int048_IRQn         = 48,
    Int049_IRQn         = 49,
    Int050_IRQn         = 50,
    Int051_IRQn         = 51,
    Int052_IRQn         = 52,
    Int053_IRQn         = 53,
    Int054_IRQn         = 54,
    Int055_IRQn         = 55,
    Int056_IRQn         = 56,
    Int057_IRQn         = 57,
    Int058_IRQn         = 58,
    Int059_IRQn         = 59,
    Int060_IRQn         = 60,
    Int061_IRQn         = 61,
    Int062_IRQn         = 62,
    Int063_IRQn         = 63,
    Int064_IRQn         = 64,
    Int065_IRQn         = 65,
    Int066_IRQn         = 66,
    Int067_IRQn         = 67,
    Int068_IRQn         = 68,
    Int069_IRQn         = 69,
    Int070_IRQn         = 70,
    Int071_IRQn         = 71,
    Int072_IRQn         = 72,
    Int073_IRQn         = 73,
    Int074_IRQn         = 74,
    Int075_IRQn         = 75,
    Int076_IRQn         = 76,
    Int077_IRQn         = 77,
    Int078_IRQn         = 78,
    Int079_IRQn         = 79,
    Int080_IRQn         = 80,
    Int081_IRQn         = 81,
    Int082_IRQn         = 82,
    Int083_IRQn         = 83,
    Int084_IRQn         = 84,
    Int085_IRQn         = 85,
    Int086_IRQn         = 86,
    Int087_IRQn         = 87,
    Int088_IRQn         = 88,
    Int089_IRQn         = 89,
    Int090_IRQn         = 90,
    Int091_IRQn         = 91,
    Int092_IRQn         = 92,
    Int093_IRQn         = 93,
    Int094_IRQn         = 94,
    Int095_IRQn         = 95,
    Int096_IRQn         = 96,
    Int097_IRQn         = 97,
    Int098_IRQn         = 98,
    Int099_IRQn         = 99,
    Int100_IRQn         = 100,
    Int101_IRQn         = 101,
    Int102_IRQn         = 102,
    Int103_IRQn         = 103,
    Int104_IRQn         = 104,
    Int105_IRQn         = 105,
    Int106_IRQn         = 106,
    Int107_IRQn         = 107,
    Int108_IRQn         = 108,
    Int109_IRQn         = 109,
    Int110_IRQn         = 110,
    Int111_IRQn         = 111,
    Int112_IRQn         = 112,
    Int113_IRQn         = 113,
    Int114_IRQn         = 114,
    Int115_IRQn         = 115,
    Int116_IRQn         = 116,
    Int117_IRQn         = 117,
    Int118_IRQn         = 118,
    Int119_IRQn         = 119,
    Int120_IRQn         = 120,
    Int121_IRQn         = 121,
    Int122_IRQn         = 122,
    Int123_IRQn         = 123,
    Int124_IRQn         = 124,
    Int125_IRQn         = 125,
    Int126_IRQn         = 126,
    Int127_IRQn         = 127,
    Int128_IRQn         = 128,
    Int129_IRQn         = 129,
    Int130_IRQn         = 130,
    Int131_IRQn         = 131,
    Int132_IRQn         = 132,
    Int133_IRQn         = 133,
    Int134_IRQn         = 134,
    Int135_IRQn         = 135,
    Int136_IRQn         = 136,
    Int137_IRQn         = 137,
    Int138_IRQn         = 138,
    Int139_IRQn         = 139,
    Int140_IRQn         = 140,
    Int141_IRQn         = 141,
    Int142_IRQn         = 142,
    Int143_IRQn         = 143,

}IRQn_Type;

#include <core_cm4.h>
#include <stdint.h>

/**
 *******************************************************************************
 ** \brief Event number enumeration
 ******************************************************************************/
typedef enum en_event_src
{
    EVT_SWI_IRQ0            = 0u,
    EVT_SWI_IRQ1            = 1u,
    EVT_SWI_IRQ2            = 2u,
    EVT_SWI_IRQ3            = 3u,
    EVT_SWI_IRQ4            = 4u,
    EVT_SWI_IRQ5            = 5u,
    EVT_SWI_IRQ6            = 6u,
    EVT_SWI_IRQ7            = 7u,
    EVT_SWI_IRQ8            = 8u,
    EVT_SWI_IRQ9            = 9u,
    EVT_SWI_IRQ10           = 10u,
    EVT_SWI_IRQ11           = 11u,
    EVT_SWI_IRQ12           = 12u,
    EVT_SWI_IRQ13           = 13u,
    EVT_SWI_IRQ14           = 14u,
    EVT_SWI_IRQ15           = 15u,
    EVT_SWI_IRQ16           = 16u,
    EVT_SWI_IRQ17           = 17u,
    EVT_SWI_IRQ18           = 18u,
    EVT_SWI_IRQ19           = 19u,
    EVT_SWI_IRQ20           = 20u,
    EVT_SWI_IRQ21           = 21u,
    EVT_SWI_IRQ22           = 22u,
    EVT_SWI_IRQ23           = 23u,
    EVT_SWI_IRQ24           = 24u,
    EVT_SWI_IRQ25           = 25u,
    EVT_SWI_IRQ26           = 26u,
    EVT_SWI_IRQ27           = 27u,
    EVT_SWI_IRQ28           = 28u,
    EVT_SWI_IRQ29           = 29u,
    EVT_SWI_IRQ30           = 30u,
    EVT_SWI_IRQ31           = 31u,

    /* External Interrupt. */
    EVT_PORT_EIRQ0          = 0u,
    EVT_PORT_EIRQ1          = 1u,
    EVT_PORT_EIRQ2          = 2u,
    EVT_PORT_EIRQ3          = 3u,
    EVT_PORT_EIRQ4          = 4u,
    EVT_PORT_EIRQ5          = 5u,
    EVT_PORT_EIRQ6          = 6u,
    EVT_PORT_EIRQ7          = 7u,
    EVT_PORT_EIRQ8          = 8u,
    EVT_PORT_EIRQ9          = 9u,
    EVT_PORT_EIRQ10         = 10u,
    EVT_PORT_EIRQ11         = 11u,
    EVT_PORT_EIRQ12         = 12u,
    EVT_PORT_EIRQ13         = 13u,
    EVT_PORT_EIRQ14         = 14u,
    EVT_PORT_EIRQ15         = 15u,

    /* DMAC */
    EVT_DMA1_TC0            = 32u,
    EVT_DMA1_TC1            = 33u,
    EVT_DMA1_TC2            = 34u,
    EVT_DMA1_TC3            = 35u,
    EVT_DMA2_TC0            = 36u,
    EVT_DMA2_TC1            = 37u,
    EVT_DMA2_TC2            = 38u,
    EVT_DMA2_TC3            = 39u,
    EVT_DMA1_BTC0           = 40u,
    EVT_DMA1_BTC1           = 41u,
    EVT_DMA1_BTC2           = 42u,
    EVT_DMA1_BTC3           = 43u,
    EVT_DMA2_BTC0           = 44u,
    EVT_DMA2_BTC1           = 45u,
    EVT_DMA2_BTC2           = 46u,
    EVT_DMA2_BTC3           = 47u,

    /* EFM */
    EVT_EFM_OPTEND          = 52u,

    /* USB SOF */
    EVT_USBFS_SOF           = 53u,

    /* DCU */
    EVT_DCU1                = 55u,
    EVT_DCU2                = 56u,
    EVT_DCU3                = 57u,
    EVT_DCU4                = 58u,

    /* TIMER 0 */
    EVT_TMR01_GCMA          = 64u,
    EVT_TMR01_GCMB          = 65u,
    EVT_TMR02_GCMA          = 66u,
    EVT_TMR02_GCMB          = 67u,

    /* RTC */
    EVT_RTC_ALM             = 81u,
    EVT_RTC_PRD             = 82u,

    /* TIMER 6 */
    EVT_TMR61_GCMA          = 96u,
    EVT_TMR61_GCMB          = 97u,
    EVT_TMR61_GCMC          = 98u,
    EVT_TMR61_GCMD          = 99u,
    EVT_TMR61_GCME          = 100u,
    EVT_TMR61_GCMF          = 101u,
    EVT_TMR61_GOVF          = 102u,
    EVT_TMR61_GUDF          = 103u,
    EVT_TMR61_SCMA          = 107u,
    EVT_TMR61_SCMB          = 108u,
    EVT_TMR62_GCMA          = 112u,
    EVT_TMR62_GCMB          = 113u,
    EVT_TMR62_GCMC          = 114u,
    EVT_TMR62_GCMD          = 115u,
    EVT_TMR62_GCME          = 116u,
    EVT_TMR62_GCMF          = 117u,
    EVT_TMR62_GOVF          = 118u,
    EVT_TMR62_GUDF          = 119u,
    EVT_TMR62_SCMA          = 123u,
    EVT_TMR62_SCMB          = 124u,
    EVT_TMR63_GCMA          = 128u,
    EVT_TMR63_GCMB          = 129u,
    EVT_TMR63_GCMC          = 130u,
    EVT_TMR63_GCMD          = 131u,
    EVT_TMR63_GCME          = 132u,
    EVT_TMR63_GCMF          = 133u,
    EVT_TMR63_GOVF          = 134u,
    EVT_TMR63_GUDF          = 135u,
    EVT_TMR63_SCMA          = 139u,
    EVT_TMR63_SCMB          = 140u,

    /* TIMER A */
    EVT_TMRA1_OVF           = 256u,
    EVT_TMRA1_UDF           = 257u,
    EVT_TMRA1_CMP           = 258u,
    EVT_TMRA2_OVF           = 259u,
    EVT_TMRA2_UDF           = 260u,
    EVT_TMRA2_CMP           = 261u,
    EVT_TMRA3_OVF           = 262u,
    EVT_TMRA3_UDF           = 263u,
    EVT_TMRA3_CMP           = 264u,
    EVT_TMRA4_OVF           = 265u,
    EVT_TMRA4_UDF           = 266u,
    EVT_TMRA4_CMP           = 267u,
    EVT_TMRA5_OVF           = 268u,
    EVT_TMRA5_UDF           = 269u,
    EVT_TMRA5_CMP           = 270u,
    EVT_TMRA6_OVF           = 272u,
    EVT_TMRA6_UDF           = 273u,
    EVT_TMRA6_CMP           = 274u,

    /* USART */
    EVT_USART1_EI           = 278u,
    EVT_USART1_RI           = 279u,
    EVT_USART1_TI           = 280u,
    EVT_USART1_TCI          = 281u,
    EVT_USART1_RTO          = 282u,
    EVT_USART2_EI           = 283u,
    EVT_USART2_RI           = 284u,
    EVT_USART2_TI           = 285u,
    EVT_USART2_TCI          = 286u,
    EVT_USART2_RTO          = 287u,
    EVT_USART3_EI           = 288u,
    EVT_USART3_RI           = 289u,
    EVT_USART3_TI           = 290u,
    EVT_USART3_TCI          = 291u,
    EVT_USART3_RTO          = 292u,
    EVT_USART4_EI           = 293u,
    EVT_USART4_RI           = 294u,
    EVT_USART4_TI           = 295u,
    EVT_USART4_TCI          = 296u,
    EVT_USART4_RTO          = 297u,

    /* SPI */
    EVT_SPI1_SPRI           = 299u,
    EVT_SPI1_SPTI           = 300u,
    EVT_SPI1_SPII           = 301u,
    EVT_SPI1_SPEI           = 302u,
    EVT_SPI1_SPTEND         = 303u,
    EVT_SPI2_SPRI           = 304u,
    EVT_SPI2_SPTI           = 305u,
    EVT_SPI2_SPII           = 306u,
    EVT_SPI2_SPEI           = 307u,
    EVT_SPI2_SPTEND         = 308u,
    EVT_SPI3_SPRI           = 309u,
    EVT_SPI3_SPTI           = 310u,
    EVT_SPI3_SPII           = 311u,
    EVT_SPI3_SPEI           = 312u,
    EVT_SPI3_SPTEND         = 313u,
    EVT_SPI4_SPRI           = 314u,
    EVT_SPI4_SPTI           = 315u,
    EVT_SPI4_SPII           = 316u,
    EVT_SPI4_SPEI           = 317u,
    EVT_SPI4_SPTEND         = 318u,

    /* AOS */
    EVT_AOS_STRG            = 319u,

    /* TIMER 4 */
    EVT_TMR41_SCMUH         = 368u,
    EVT_TMR41_SCMUL         = 369u,
    EVT_TMR41_SCMVH         = 370u,
    EVT_TMR41_SCMVL         = 371u,
    EVT_TMR41_SCMWH         = 372u,
    EVT_TMR41_SCMWL         = 373u,
    EVT_TMR42_SCMUH         = 374u,
    EVT_TMR42_SCMUL         = 375u,
    EVT_TMR42_SCMVH         = 376u,
    EVT_TMR42_SCMVL         = 377u,
    EVT_TMR42_SCMWH         = 378u,
    EVT_TMR42_SCMWL         = 379u,
    EVT_TMR43_SCMUH         = 384u,
    EVT_TMR43_SCMUL         = 385u,
    EVT_TMR43_SCMVH         = 386u,
    EVT_TMR43_SCMVL         = 387u,
    EVT_TMR43_SCMWH         = 388u,
    EVT_TMR43_SCMWL         = 389u,

    /* EVENT PORT */
    EVT_EVENT_PORT1         = 394u,
    EVT_EVENT_PORT2         = 395u,
    EVT_EVENT_PORT3         = 396u,
    EVT_EVENT_PORT4         = 397u,

    /* I2S */
    EVT_I2S1_TXIRQOUT       = 400u,
    EVT_I2S1_RXIRQOUT       = 401u,
    EVT_I2S2_TXIRQOUT       = 403u,
    EVT_I2S2_RXIRQOUT       = 404u,
    EVT_I2S3_TXIRQOUT       = 406u,
    EVT_I2S3_RXIRQOUT       = 407u,
    EVT_I2S4_TXIRQOUT       = 409u,
    EVT_I2S4_RXIRQOUT       = 410u,

    /* COMPARATOR */
    EVT_ACMP1               = 416u,
    EVT_ACMP2               = 417u,
    EVT_ACMP3               = 418u,

    /* I2C */
    EVT_I2C1_RXI            = 420u,
    EVT_I2C1_TXI            = 421u,
    EVT_I2C1_TEI            = 422u,
    EVT_I2C1_EEI            = 423u,
    EVT_I2C2_RXI            = 424u,
    EVT_I2C2_TXI            = 425u,
    EVT_I2C2_TEI            = 426u,
    EVT_I2C2_EEI            = 427u,
    EVT_I2C3_RXI            = 428u,
    EVT_I2C3_TXI            = 429u,
    EVT_I2C3_TEI            = 430u,
    EVT_I2C3_EEI            = 431u,

    /* PVD */
    EVT_PVD_PVD1            = 433u,
    EVT_PVD_PVD2            = 434u,

    /* OTS */
    EVT_OTS                 = 435u,

    /* WDT */
    EVT_WDT_REFUDF          = 439u,

    /* ADC */
    EVT_ADC1_EOCA           = 448u,
    EVT_ADC1_EOCB           = 449u,
    EVT_ADC1_CHCMP          = 450u,
    EVT_ADC1_SEQCMP         = 451u,
    EVT_ADC2_EOCA           = 452u,
    EVT_ADC2_EOCB           = 453u,
    EVT_ADC2_CHCMP          = 454u,
    EVT_ADC2_SEQCMP         = 455u,

    /* TRNG */
    EVT_TRNG_END            = 456u,

    /* SDIO */
    EVT_SDIOC1_DMAR         = 480u,
    EVT_SDIOC1_DMAW         = 481u,
    EVT_SDIOC2_DMAR         = 483u,
    EVT_SDIOC2_DMAW         = 484u,
    EVT_MAX                 = 511u,
}en_event_src_t;

/**
 *******************************************************************************
 ** \brief Interrupt number enumeration
 ******************************************************************************/
typedef enum en_int_src
{
    INT_SWI_IRQ0            = 0u,
    INT_SWI_IRQ1            = 1u,
    INT_SWI_IRQ2            = 2u,
    INT_SWI_IRQ3            = 3u,
    INT_SWI_IRQ4            = 4u,
    INT_SWI_IRQ5            = 5u,
    INT_SWI_IRQ6            = 6u,
    INT_SWI_IRQ7            = 7u,
    INT_SWI_IRQ8            = 8u,
    INT_SWI_IRQ9            = 9u,
    INT_SWI_IRQ10           = 10u,
    INT_SWI_IRQ11           = 11u,
    INT_SWI_IRQ12           = 12u,
    INT_SWI_IRQ13           = 13u,
    INT_SWI_IRQ14           = 14u,
    INT_SWI_IRQ15           = 15u,
    INT_SWI_IRQ16           = 16u,
    INT_SWI_IRQ17           = 17u,
    INT_SWI_IRQ18           = 18u,
    INT_SWI_IRQ19           = 19u,
    INT_SWI_IRQ20           = 20u,
    INT_SWI_IRQ21           = 21u,
    INT_SWI_IRQ22           = 22u,
    INT_SWI_IRQ23           = 23u,
    INT_SWI_IRQ24           = 24u,
    INT_SWI_IRQ25           = 25u,
    INT_SWI_IRQ26           = 26u,
    INT_SWI_IRQ27           = 27u,
    INT_SWI_IRQ28           = 28u,
    INT_SWI_IRQ29           = 29u,
    INT_SWI_IRQ30           = 30u,
    INT_SWI_IRQ31           = 31u,

    /* External Interrupt. */
    INT_PORT_EIRQ0          = 0u,
    INT_PORT_EIRQ1          = 1u,
    INT_PORT_EIRQ2          = 2u,
    INT_PORT_EIRQ3          = 3u,
    INT_PORT_EIRQ4          = 4u,
    INT_PORT_EIRQ5          = 5u,
    INT_PORT_EIRQ6          = 6u,
    INT_PORT_EIRQ7          = 7u,
    INT_PORT_EIRQ8          = 8u,
    INT_PORT_EIRQ9          = 9u,
    INT_PORT_EIRQ10         = 10u,
    INT_PORT_EIRQ11         = 11u,
    INT_PORT_EIRQ12         = 12u,
    INT_PORT_EIRQ13         = 13u,
    INT_PORT_EIRQ14         = 14u,
    INT_PORT_EIRQ15         = 15u,

    /* DMAC */
    INT_DMA1_TC0            = 32u,
    INT_DMA1_TC1            = 33u,
    INT_DMA1_TC2            = 34u,
    INT_DMA1_TC3            = 35u,
    INT_DMA2_TC0            = 36u,
    INT_DMA2_TC1            = 37u,
    INT_DMA2_TC2            = 38u,
    INT_DMA2_TC3            = 39u,
    INT_DMA1_BTC0           = 40u,
    INT_DMA1_BTC1           = 41u,
    INT_DMA1_BTC2           = 42u,
    INT_DMA1_BTC3           = 43u,
    INT_DMA2_BTC0           = 44u,
    INT_DMA2_BTC1           = 45u,
    INT_DMA2_BTC2           = 46u,
    INT_DMA2_BTC3           = 47u,
    INT_DMA1_ERR            = 48u,
    INT_DMA2_ERR            = 49u,

    /* EFM */
    INT_EFM_PEERR           = 50u,
    INT_EFM_COLERR          = 51u,
    INT_EFM_OPTEND          = 52u,

    /* QSPI */
    INT_QSPI_INTR           = 54u,

    /* DCU */
    INT_DCU1                = 55u,
    INT_DCU2                = 56u,
    INT_DCU3                = 57u,
    INT_DCU4                = 58u,

    /* TIMER 0 */
    INT_TMR01_GCMA          = 64u,
    INT_TMR01_GCMB          = 65u,
    INT_TMR02_GCMA          = 66u,
    INT_TMR02_GCMB          = 67u,

    /* RTC */
    INT_RTC_ALM             = 81u,
    INT_RTC_PRD             = 82u,

    /* XTAL32 stop */
    INT_XTAL32_STOP         = 84u,

    /* XTAL stop */
    INT_XTAL_STOP           = 85u,

    /* wake-up timer */
    INT_WKTM_PRD            = 86u,

    /* SWDT */
    INT_SWDT_REFUDF         = 87u,

    /* TIMER 6 */
    INT_TMR61_GCMA          = 96u,
    INT_TMR61_GCMB          = 97u,
    INT_TMR61_GCMC          = 98u,
    INT_TMR61_GCMD          = 99u,
    INT_TMR61_GCME          = 100u,
    INT_TMR61_GCMF          = 101u,
    INT_TMR61_GOVF          = 102u,
    INT_TMR61_GUDF          = 103u,
    INT_TMR61_GDTE          = 104u,
    INT_TMR61_SCMA          = 107u,
    INT_TMR61_SCMB          = 108u,
    INT_TMR62_GCMA          = 112u,
    INT_TMR62_GCMB          = 113u,
    INT_TMR62_GCMC          = 114u,
    INT_TMR62_GCMD          = 115u,
    INT_TMR62_GCME          = 116u,
    INT_TMR62_GCMF          = 117u,
    INT_TMR62_GOVF          = 118u,
    INT_TMR62_GUDF          = 119u,
    INT_TMR62_GDTE          = 120u,
    INT_TMR62_SCMA          = 123u,
    INT_TMR62_SCMB          = 124u,
    INT_TMR63_GCMA          = 128u,
    INT_TMR63_GCMB          = 129u,
    INT_TMR63_GCMC          = 130u,
    INT_TMR63_GCMD          = 131u,
    INT_TMR63_GCME          = 132u,
    INT_TMR63_GCMF          = 133u,
    INT_TMR63_GOVF          = 134u,
    INT_TMR63_GUDF          = 135u,
    INT_TMR63_GDTE          = 136u,
    INT_TMR63_SCMA          = 139u,
    INT_TMR63_SCMB          = 140u,

    /* TIMER A */
    INT_TMRA1_OVF           = 256u,
    INT_TMRA1_UDF           = 257u,
    INT_TMRA1_CMP           = 258u,
    INT_TMRA2_OVF           = 259u,
    INT_TMRA2_UDF           = 260u,
    INT_TMRA2_CMP           = 261u,
    INT_TMRA3_OVF           = 262u,
    INT_TMRA3_UDF           = 263u,
    INT_TMRA3_CMP           = 264u,
    INT_TMRA4_OVF           = 265u,
    INT_TMRA4_UDF           = 266u,
    INT_TMRA4_CMP           = 267u,
    INT_TMRA5_OVF           = 268u,
    INT_TMRA5_UDF           = 269u,
    INT_TMRA5_CMP           = 270u,
    INT_TMRA6_OVF           = 272u,
    INT_TMRA6_UDF           = 273u,
    INT_TMRA6_CMP           = 274u,

    /* USB FS */
    INT_USBFS_GLB           = 275u,

    /* USRAT */
    INT_USART1_EI           = 278u,
    INT_USART1_RI           = 279u,
    INT_USART1_TI           = 280u,
    INT_USART1_TCI          = 281u,
    INT_USART1_RTO          = 282u,
    INT_USART1_WUPI         = 432u,
    INT_USART2_EI           = 283u,
    INT_USART2_RI           = 284u,
    INT_USART2_TI           = 285u,
    INT_USART2_TCI          = 286u,
    INT_USART2_RTO          = 287u,
    INT_USART3_EI           = 288u,
    INT_USART3_RI           = 289u,
    INT_USART3_TI           = 290u,
    INT_USART3_TCI          = 291u,
    INT_USART3_RTO          = 292u,
    INT_USART4_EI           = 293u,
    INT_USART4_RI           = 294u,
    INT_USART4_TI           = 295u,
    INT_USART4_TCI          = 296u,
    INT_USART4_RTO          = 297u,

    /* SPI */
    INT_SPI1_SPRI           = 299u,
    INT_SPI1_SPTI           = 300u,
    INT_SPI1_SPII           = 301u,
    INT_SPI1_SPEI           = 302u,
    INT_SPI2_SPRI           = 304u,
    INT_SPI2_SPTI           = 305u,
    INT_SPI2_SPII           = 306u,
    INT_SPI2_SPEI           = 307u,
    INT_SPI3_SPRI           = 309u,
    INT_SPI3_SPTI           = 310u,
    INT_SPI3_SPII           = 311u,
    INT_SPI3_SPEI           = 312u,
    INT_SPI4_SPRI           = 314u,
    INT_SPI4_SPTI           = 315u,
    INT_SPI4_SPII           = 316u,
    INT_SPI4_SPEI           = 317u,

    /* TIMER 4 */
    INT_TMR41_GCMUH         = 320u,
    INT_TMR41_GCMUL         = 321u,
    INT_TMR41_GCMVH         = 322u,
    INT_TMR41_GCMVL         = 323u,
    INT_TMR41_GCMWH         = 324u,
    INT_TMR41_GCMWL         = 325u,
    INT_TMR41_GOVF          = 326u,
    INT_TMR41_GUDF          = 327u,
    INT_TMR41_RLOU          = 328u,
    INT_TMR41_RLOV          = 329u,
    INT_TMR41_RLOW          = 330u,
    INT_TMR42_GCMUH         = 336u,
    INT_TMR42_GCMUL         = 337u,
    INT_TMR42_GCMVH         = 338u,
    INT_TMR42_GCMVL         = 339u,
    INT_TMR42_GCMWH         = 340u,
    INT_TMR42_GCMWL         = 341u,
    INT_TMR42_GOVF          = 342u,
    INT_TMR42_GUDF          = 343u,
    INT_TMR42_RLOU          = 344u,
    INT_TMR42_RLOV          = 345u,
    INT_TMR42_RLOW          = 346u,
    INT_TMR43_GCMUH         = 352u,
    INT_TMR43_GCMUL         = 353u,
    INT_TMR43_GCMVH         = 354u,
    INT_TMR43_GCMVL         = 355u,
    INT_TMR43_GCMWH         = 356u,
    INT_TMR43_GCMWL         = 357u,
    INT_TMR43_GOVF          = 358u,
    INT_TMR43_GUDF          = 359u,
    INT_TMR43_RLOU          = 360u,
    INT_TMR43_RLOV          = 361u,
    INT_TMR43_RLOW          = 362u,

    /* EMB */
    INT_EMB_GR0             = 390u,
    INT_EMB_GR1             = 391u,
    INT_EMB_GR2             = 392u,
    INT_EMB_GR3             = 393u,

    /* EVENT PORT */
    INT_EVENT_PORT1         = 394u,
    INT_EVENT_PORT2         = 395u,
    INT_EVENT_PORT3         = 396u,
    INT_EVENT_PORT4         = 397u,

    /* I2S */
    INT_I2S1_TXIRQOUT       = 400u,
    INT_I2S1_RXIRQOUT       = 401u,
    INT_I2S1_ERRIRQOUT      = 402u,
    INT_I2S2_TXIRQOUT       = 403u,
    INT_I2S2_RXIRQOUT       = 404u,
    INT_I2S2_ERRIRQOUT      = 405u,
    INT_I2S3_TXIRQOUT       = 406u,
    INT_I2S3_RXIRQOUT       = 407u,
    INT_I2S3_ERRIRQOUT      = 408u,
    INT_I2S4_TXIRQOUT       = 409u,
    INT_I2S4_RXIRQOUT       = 410u,
    INT_I2S4_ERRIRQOUT      = 411u,

    /* COMPARATOR */
    INT_ACMP1               = 416u,
    INT_ACMP2               = 417u,
    INT_ACMP3               = 418u,

    /* I2C */
    INT_I2C1_RXI            = 420u,
    INT_I2C1_TXI            = 421u,
    INT_I2C1_TEI            = 422u,
    INT_I2C1_EEI            = 423u,
    INT_I2C2_RXI            = 424u,
    INT_I2C2_TXI            = 425u,
    INT_I2C2_TEI            = 426u,
    INT_I2C2_EEI            = 427u,
    INT_I2C3_RXI            = 428u,
    INT_I2C3_TXI            = 429u,
    INT_I2C3_TEI            = 430u,
    INT_I2C3_EEI            = 431u,

    /* PVD */
    INT_PVD_PVD1            = 433u,
    INT_PVD_PVD2            = 434u,

    /* Temp. sensor */
    INT_OTS                 = 435u,

    /* FCM */
    INT_FCMFERRI            = 436u,
    INT_FCMMENDI            = 437u,
    INT_FCMCOVFI            = 438u,

    /* WDT */
    INT_WDT_REFUDF          = 439u,

    /* ADC */
    INT_ADC1_EOCA           = 448u,
    INT_ADC1_EOCB           = 449u,
    INT_ADC1_CHCMP          = 450u,
    INT_ADC1_SEQCMP         = 451u,
    INT_ADC2_EOCA           = 452u,
    INT_ADC2_EOCB           = 453u,
    INT_ADC2_CHCMP          = 454u,
    INT_ADC2_SEQCMP         = 455u,

    /* TRNG */
    INT_TRNG_END            = 456u,

    /* SDIOC */
    INT_SDIOC1_SD           = 482u,
    INT_SDIOC2_SD           = 485u,

    /* CAN */
    INT_CAN_INT             = 486u,

    INT_MAX                 = 511u,
}en_int_src_t;

/******************************************************************************/
/*                Device Specific Peripheral Registers structures             */
/******************************************************************************/

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

typedef struct
{
    __IO uint8_t STRT                       : 1;
    uint8_t RESERVED1                       : 7;
} stc_adc_str_field_t;

typedef struct
{
    __IO uint16_t MS                        : 2;
    uint16_t RESERVED2                      : 2;
    __IO uint16_t ACCSEL                    : 2;
    __IO uint16_t CLREN                     : 1;
    __IO uint16_t DFMT                      : 1;
    __IO uint16_t AVCNT                     : 3;
    uint16_t RESERVED11                     : 5;
} stc_adc_cr0_field_t;

typedef struct
{
    uint16_t RESERVED0                      : 2;
    __IO uint16_t RSCHSEL                   : 1;
    uint16_t RESERVED3                      :13;
} stc_adc_cr1_field_t;

typedef struct
{
    __IO uint16_t TRGSELA                   : 3;
    uint16_t RESERVED3                      : 4;
    __IO uint16_t TRGENA                    : 1;
    __IO uint16_t TRGSELB                   : 3;
    uint16_t RESERVED11                     : 4;
    __IO uint16_t TRGENB                    : 1;
} stc_adc_trgsr_field_t;

typedef struct
{
    __IO uint16_t CHSELA16                  : 1;
    uint16_t RESERVED1                      :15;
} stc_adc_chselra1_field_t;

typedef struct
{
    __IO uint16_t CHSELB16                  : 1;
    uint16_t RESERVED1                      :15;
} stc_adc_chselrb1_field_t;

typedef struct
{
    __IO uint16_t AVCHSEL16                 : 1;
    uint16_t RESERVED1                      :15;
} stc_adc_avchselr1_field_t;

typedef struct
{
    __IO uint16_t CH00MUX                   : 4;
    __IO uint16_t CH01MUX                   : 4;
    __IO uint16_t CH02MUX                   : 4;
    __IO uint16_t CH03MUX                   : 4;
} stc_adc_chmuxr0_field_t;

typedef struct
{
    __IO uint16_t CH04MUX                   : 4;
    __IO uint16_t CH05MUX                   : 4;
    __IO uint16_t CH06MUX                   : 4;
    __IO uint16_t CH07MUX                   : 4;
} stc_adc_chmuxr1_field_t;

typedef struct
{
    __IO uint16_t CH08MUX                   : 4;
    __IO uint16_t CH09MUX                   : 4;
    __IO uint16_t CH10MUX                   : 4;
    __IO uint16_t CH11MUX                   : 4;
} stc_adc_chmuxr2_field_t;

typedef struct
{
    __IO uint16_t CH12MUX                   : 4;
    __IO uint16_t CH13MUX                   : 4;
    __IO uint16_t CH14MUX                   : 4;
    __IO uint16_t CH15MUX                   : 4;
} stc_adc_chmuxr3_field_t;

typedef struct
{
    __IO uint8_t EOCAF                      : 1;
    __IO uint8_t EOCBF                      : 1;
    uint8_t RESERVED2                       : 6;
} stc_adc_isr_field_t;

typedef struct
{
    __IO uint8_t EOCAIEN                    : 1;
    __IO uint8_t EOCBIEN                    : 1;
    uint8_t RESERVED2                       : 6;
} stc_adc_icr_field_t;

typedef struct
{
    __IO uint16_t SYNCEN                    : 1;
    uint16_t RESERVED1                      : 3;
    __IO uint16_t SYNCMD                    : 3;
    uint16_t RESERVED7                      : 1;
    __IO uint16_t SYNCDLY                   : 8;
} stc_adc_synccr_field_t;

typedef struct
{
    __IO uint16_t AWDEN                     : 1;
    uint16_t RESERVED1                      : 3;
    __IO uint16_t AWDMD                     : 1;
    uint16_t RESERVED5                      : 1;
    __IO uint16_t AWDSS                     : 2;
    __IO uint16_t AWDIEN                    : 1;
    uint16_t RESERVED9                      : 7;
} stc_adc_awdcr_field_t;

typedef struct
{
    __IO uint16_t AWDCH16                   : 1;
    uint16_t RESERVED1                      :15;
} stc_adc_awdchsr1_field_t;

typedef struct
{
    __IO uint16_t AWDF16                    : 1;
    uint16_t RESERVED1                      :15;
} stc_adc_awdsr1_field_t;

typedef struct
{
    __IO uint16_t PGACTL                    : 4;
    uint16_t RESERVED4                      :12;
} stc_adc_pgacr_field_t;

typedef struct
{
    __IO uint16_t GAIN                      : 4;
    uint16_t RESERVED4                      :12;
} stc_adc_pgagsr_field_t;

typedef struct
{
    __IO uint16_t PGAINSEL                  : 9;
    uint16_t RESERVED9                      : 7;
} stc_adc_pgainsr0_field_t;

typedef struct
{
    __IO uint16_t PGAVSSEN                  : 1;
    uint16_t RESERVED1                      :15;
} stc_adc_pgainsr1_field_t;

typedef struct
{
    __IO uint32_t START                     : 1;
    __IO uint32_t MODE                      : 1;
    uint32_t RESERVED2                      :30;
} stc_aes_cr_field_t;

typedef struct
{
    __IO uint32_t STRG                      : 1;
    uint32_t RESERVED1                      :31;
} stc_aos_int_sfttrg_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_dcu1_trgsel_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_dcu2_trgsel_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_dcu3_trgsel_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_dcu4_trgsel_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_dma1_trgsel_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_dma1_trgsel3_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_dma2_trgsel_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_dma_trgselrc_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_tmr6_htssr_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_tmr0_htssr_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_port_pevnttrgsr12_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_port_pevnttrgsr34_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_tmra_htssr_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_ots_trg_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_adc1_itrgselr_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :21;
    __IO uint32_t COMTRG_EN                 : 2;
} stc_aos_adc2_itrgselr_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :23;
} stc_aos_comtrg1_field_t;

typedef struct
{
    __IO uint32_t TRGSEL                    : 9;
    uint32_t RESERVED9                      :23;
} stc_aos_comtrg2_field_t;

typedef struct
{
    __IO uint32_t PDIR00                    : 1;
    __IO uint32_t PDIR01                    : 1;
    __IO uint32_t PDIR02                    : 1;
    __IO uint32_t PDIR03                    : 1;
    __IO uint32_t PDIR04                    : 1;
    __IO uint32_t PDIR05                    : 1;
    __IO uint32_t PDIR06                    : 1;
    __IO uint32_t PDIR07                    : 1;
    __IO uint32_t PDIR08                    : 1;
    __IO uint32_t PDIR09                    : 1;
    __IO uint32_t PDIR10                    : 1;
    __IO uint32_t PDIR11                    : 1;
    __IO uint32_t PDIR12                    : 1;
    __IO uint32_t PDIR13                    : 1;
    __IO uint32_t PDIR14                    : 1;
    __IO uint32_t PDIR15                    : 1;
    uint32_t RESERVED16                     :16;
} stc_aos_pevntdirr_field_t;

typedef struct
{
    __IO uint32_t PIN00                     : 1;
    __IO uint32_t PIN01                     : 1;
    __IO uint32_t PIN02                     : 1;
    __IO uint32_t PIN03                     : 1;
    __IO uint32_t PIN04                     : 1;
    __IO uint32_t PIN05                     : 1;
    __IO uint32_t PIN06                     : 1;
    __IO uint32_t PIN07                     : 1;
    __IO uint32_t PIN08                     : 1;
    __IO uint32_t PIN09                     : 1;
    __IO uint32_t PIN10                     : 1;
    __IO uint32_t PIN11                     : 1;
    __IO uint32_t PIN12                     : 1;
    __IO uint32_t PIN13                     : 1;
    __IO uint32_t PIN14                     : 1;
    __IO uint32_t PIN15                     : 1;
    uint32_t RESERVED16                     :16;
} stc_aos_pevntidr_field_t;

typedef struct
{
    __IO uint32_t POUT00                    : 1;
    __IO uint32_t POUT01                    : 1;
    __IO uint32_t POUT02                    : 1;
    __IO uint32_t POUT03                    : 1;
    __IO uint32_t POUT04                    : 1;
    __IO uint32_t POUT05                    : 1;
    __IO uint32_t POUT06                    : 1;
    __IO uint32_t POUT07                    : 1;
    __IO uint32_t POUT08                    : 1;
    __IO uint32_t POUT09                    : 1;
    __IO uint32_t POUT10                    : 1;
    __IO uint32_t POUT11                    : 1;
    __IO uint32_t POUT12                    : 1;
    __IO uint32_t POUT13                    : 1;
    __IO uint32_t POUT14                    : 1;
    __IO uint32_t POUT15                    : 1;
    uint32_t RESERVED16                     :16;
} stc_aos_pevntodr_field_t;

typedef struct
{
    __IO uint32_t POR00                     : 1;
    __IO uint32_t POR01                     : 1;
    __IO uint32_t POR02                     : 1;
    __IO uint32_t POR03                     : 1;
    __IO uint32_t POR04                     : 1;
    __IO uint32_t POR05                     : 1;
    __IO uint32_t POR06                     : 1;
    __IO uint32_t POR07                     : 1;
    __IO uint32_t POR08                     : 1;
    __IO uint32_t POR09                     : 1;
    __IO uint32_t POR10                     : 1;
    __IO uint32_t POR11                     : 1;
    __IO uint32_t POR12                     : 1;
    __IO uint32_t POR13                     : 1;
    __IO uint32_t POR14                     : 1;
    __IO uint32_t POR15                     : 1;
    uint32_t RESERVED16                     :16;
} stc_aos_pevntorr_field_t;

typedef struct
{
    __IO uint32_t POS00                     : 1;
    __IO uint32_t POS01                     : 1;
    __IO uint32_t POS02                     : 1;
    __IO uint32_t POS03                     : 1;
    __IO uint32_t POS04                     : 1;
    __IO uint32_t POS05                     : 1;
    __IO uint32_t POS06                     : 1;
    __IO uint32_t POS07                     : 1;
    __IO uint32_t POS08                     : 1;
    __IO uint32_t POS09                     : 1;
    __IO uint32_t POS10                     : 1;
    __IO uint32_t POS11                     : 1;
    __IO uint32_t POS12                     : 1;
    __IO uint32_t POS13                     : 1;
    __IO uint32_t POS14                     : 1;
    __IO uint32_t POS15                     : 1;
    uint32_t RESERVED16                     :16;
} stc_aos_pevntosr_field_t;

typedef struct
{
    __IO uint32_t RIS00                     : 1;
    __IO uint32_t RIS01                     : 1;
    __IO uint32_t RIS02                     : 1;
    __IO uint32_t RIS03                     : 1;
    __IO uint32_t RIS04                     : 1;
    __IO uint32_t RIS05                     : 1;
    __IO uint32_t RIS06                     : 1;
    __IO uint32_t RIS07                     : 1;
    __IO uint32_t RIS08                     : 1;
    __IO uint32_t RIS09                     : 1;
    __IO uint32_t RIS10                     : 1;
    __IO uint32_t RIS11                     : 1;
    __IO uint32_t RIS12                     : 1;
    __IO uint32_t RIS13                     : 1;
    __IO uint32_t RIS14                     : 1;
    __IO uint32_t RIS15                     : 1;
    uint32_t RESERVED16                     :16;
} stc_aos_pevntrisr_field_t;

typedef struct
{
    __IO uint32_t FAL00                     : 1;
    __IO uint32_t FAL01                     : 1;
    __IO uint32_t FAL02                     : 1;
    __IO uint32_t FAL03                     : 1;
    __IO uint32_t FAL04                     : 1;
    __IO uint32_t FAL05                     : 1;
    __IO uint32_t FAL06                     : 1;
    __IO uint32_t FAL07                     : 1;
    __IO uint32_t FAL08                     : 1;
    __IO uint32_t FAL09                     : 1;
    __IO uint32_t FAL10                     : 1;
    __IO uint32_t FAL11                     : 1;
    __IO uint32_t FAL12                     : 1;
    __IO uint32_t FAL13                     : 1;
    __IO uint32_t FAL14                     : 1;
    __IO uint32_t FAL15                     : 1;
    uint32_t RESERVED16                     :16;
} stc_aos_pevntfal_field_t;

typedef struct
{
    __IO uint32_t NFEN1                     : 1;
    __IO uint32_t DIVS1                     : 2;
    uint32_t RESERVED3                      : 5;
    __IO uint32_t NFEN2                     : 1;
    __IO uint32_t DIVS2                     : 2;
    uint32_t RESERVED11                     : 5;
    __IO uint32_t NFEN3                     : 1;
    __IO uint32_t DIVS3                     : 2;
    uint32_t RESERVED19                     : 5;
    __IO uint32_t NFEN4                     : 1;
    __IO uint32_t DIVS4                     : 2;
    uint32_t RESERVED27                     : 5;
} stc_aos_pevntnfcr_field_t;

typedef struct
{
    __IO uint8_t BUSOFF                     : 1;
    __IO uint8_t TACTIVE                    : 1;
    __IO uint8_t RACTIVE                    : 1;
    __IO uint8_t TSSS                       : 1;
    __IO uint8_t TPSS                       : 1;
    __IO uint8_t LBMI                       : 1;
    __IO uint8_t LBME                       : 1;
    __IO uint8_t RESET                      : 1;
} stc_can_cfg_stat_field_t;

typedef struct
{
    __IO uint8_t TSA                        : 1;
    __IO uint8_t TSALL                      : 1;
    __IO uint8_t TSONE                      : 1;
    __IO uint8_t TPA                        : 1;
    __IO uint8_t TPE                        : 1;
    __IO uint8_t STBY                       : 1;
    __IO uint8_t LOM                        : 1;
    __IO uint8_t TBSEL                      : 1;
} stc_can_tcmd_field_t;

typedef struct
{
    __IO uint8_t TSSTAT                     : 2;
    uint8_t RESERVED2                       : 2;
    __IO uint8_t TTBM                       : 1;
    __IO uint8_t TSMODE                     : 1;
    __IO uint8_t TSNEXT                     : 1;
    uint8_t RESERVED7                       : 1;
} stc_can_tctrl_field_t;

typedef struct
{
    __IO uint8_t RSSTAT                     : 2;
    uint8_t RESERVED2                       : 1;
    __IO uint8_t RBALL                      : 1;
    __IO uint8_t RREL                       : 1;
    __IO uint8_t ROV                        : 1;
    __IO uint8_t ROM                        : 1;
    __IO uint8_t SACK                       : 1;
} stc_can_rctrl_field_t;

typedef struct
{
    __IO uint8_t TSFF                       : 1;
    __IO uint8_t EIE                        : 1;
    __IO uint8_t TSIE                       : 1;
    __IO uint8_t TPIE                       : 1;
    __IO uint8_t RAFIE                      : 1;
    __IO uint8_t RFIE                       : 1;
    __IO uint8_t ROIE                       : 1;
    __IO uint8_t RIE                        : 1;
} stc_can_rtie_field_t;

typedef struct
{
    __IO uint8_t AIF                        : 1;
    __IO uint8_t EIF                        : 1;
    __IO uint8_t TSIF                       : 1;
    __IO uint8_t TPIF                       : 1;
    __IO uint8_t RAFIF                      : 1;
    __IO uint8_t RFIF                       : 1;
    __IO uint8_t ROIF                       : 1;
    __IO uint8_t RIF                        : 1;
} stc_can_rtif_field_t;

typedef struct
{
    __IO uint8_t BEIF                       : 1;
    __IO uint8_t BEIE                       : 1;
    __IO uint8_t ALIF                       : 1;
    __IO uint8_t ALIE                       : 1;
    __IO uint8_t EPIF                       : 1;
    __IO uint8_t EPIE                       : 1;
    __IO uint8_t EPASS                      : 1;
    __IO uint8_t EWARN                      : 1;
} stc_can_errint_field_t;

typedef struct
{
    __IO uint8_t EWL                        : 4;
    __IO uint8_t AFWL                       : 4;
} stc_can_limit_field_t;

typedef struct
{
    __IO uint32_t SEG_1                     : 8;
    __IO uint32_t SEG_2                     : 7;
    uint32_t RESERVED15                     : 1;
    __IO uint32_t SJW                       : 7;
    uint32_t RESERVED23                     : 1;
    __IO uint32_t PRESC                     : 8;
} stc_can_bt_field_t;

typedef struct
{
    __IO uint8_t ALC                        : 5;
    __IO uint8_t KOER                       : 3;
} stc_can_ealcap_field_t;

typedef struct
{
    __IO uint8_t ACFADR                     : 4;
    uint8_t RESERVED4                       : 1;
    __IO uint8_t SELMASK                    : 1;
    uint8_t RESERVED6                       : 2;
} stc_can_acfctrl_field_t;

typedef struct
{
    __IO uint8_t AE_1                       : 1;
    __IO uint8_t AE_2                       : 1;
    __IO uint8_t AE_3                       : 1;
    __IO uint8_t AE_4                       : 1;
    __IO uint8_t AE_5                       : 1;
    __IO uint8_t AE_6                       : 1;
    __IO uint8_t AE_7                       : 1;
    __IO uint8_t AE_8                       : 1;
} stc_can_acfen_field_t;

typedef struct
{
    __IO uint32_t ACODEORAMASK              :29;
    __IO uint32_t AIDE                      : 1;
    __IO uint32_t AIDEE                     : 1;
    uint32_t RESERVED31                     : 1;
} stc_can_acf_field_t;

typedef struct
{
    __IO uint8_t TBPTR                      : 6;
    __IO uint8_t TBF                        : 1;
    __IO uint8_t TBE                        : 1;
} stc_can_tbslot_field_t;

typedef struct
{
    __IO uint8_t TTEN                       : 1;
    __IO uint8_t T_PRESC                    : 2;
    __IO uint8_t TTIF                       : 1;
    __IO uint8_t TTIE                       : 1;
    __IO uint8_t TEIF                       : 1;
    __IO uint8_t WTIF                       : 1;
    __IO uint8_t WTIE                       : 1;
} stc_can_ttcfg_field_t;

typedef struct
{
    __IO uint32_t REF_ID                    :29;
    uint32_t RESERVED29                     : 2;
    __IO uint32_t REF_IDE                   : 1;
} stc_can_ref_msg_field_t;

typedef struct
{
    __IO uint16_t TTPTR                     : 6;
    uint16_t RESERVED6                      : 2;
    __IO uint16_t TTYPE                     : 3;
    uint16_t RESERVED11                     : 1;
    __IO uint16_t TEW                       : 4;
} stc_can_trg_cfg_field_t;

typedef struct
{
    __IO uint16_t FLTSL                     : 3;
    uint16_t RESERVED3                      : 2;
    __IO uint16_t EDGSL                     : 2;
    __IO uint16_t IEN                       : 1;
    __IO uint16_t CVSEN                     : 1;
    uint16_t RESERVED9                      : 3;
    __IO uint16_t OUTEN                     : 1;
    __IO uint16_t INV                       : 1;
    __IO uint16_t CMPOE                     : 1;
    __IO uint16_t CMPON                     : 1;
} stc_cmp_ctrl_field_t;

typedef struct
{
    __IO uint16_t RVSL                      : 4;
    uint16_t RESERVED4                      : 4;
    __IO uint16_t CVSL                      : 4;
    __IO uint16_t C4SL                      : 3;
    uint16_t RESERVED15                     : 1;
} stc_cmp_vltsel_field_t;

typedef struct
{
    __IO uint16_t OMON                      : 1;
    uint16_t RESERVED1                      : 7;
    __IO uint16_t CVST                      : 4;
    uint16_t RESERVED12                     : 4;
} stc_cmp_mon_field_t;

typedef struct
{
    __IO uint16_t STB                       : 4;
    uint16_t RESERVED4                      :12;
} stc_cmp_cvsstb_field_t;

typedef struct
{
    __IO uint16_t PRD                       : 8;
    uint16_t RESERVED8                      : 8;
} stc_cmp_cvsprd_field_t;

typedef struct
{
    __IO uint16_t DATA                      : 8;
    uint16_t RESERVED8                      : 8;
} stc_cmp_cr_dadr1_field_t;

typedef struct
{
    __IO uint16_t DATA                      : 8;
    uint16_t RESERVED8                      : 8;
} stc_cmp_cr_dadr2_field_t;

typedef struct
{
    __IO uint16_t DA1EN                     : 1;
    __IO uint16_t DA2EN                     : 1;
    uint16_t RESERVED2                      :14;
} stc_cmp_cr_dacr_field_t;

typedef struct
{
    __IO uint16_t DA1SW                     : 1;
    __IO uint16_t DA2SW                     : 1;
    uint16_t RESERVED2                      : 2;
    __IO uint16_t VREFSW                    : 1;
    uint16_t RESERVED5                      : 3;
    __IO uint16_t WPRT                      : 8;
} stc_cmp_cr_rvadc_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 1;
    __IO uint32_t CRC_SEL                   : 1;
    __IO uint32_t REFIN                     : 1;
    __IO uint32_t REFOUT                    : 1;
    __IO uint32_t XOROUT                    : 1;
    uint32_t RESERVED5                      :27;
} stc_crc_cr_field_t;

typedef struct
{
    __IO uint32_t FLAG                      : 1;
    uint32_t RESERVED1                      :31;
} stc_crc_flg_field_t;

typedef struct
{
    __IO uint32_t AUTH                      : 1;
    __IO uint32_t REMVLOCK                  : 1;
    __IO uint32_t SAFTYLOCK1                : 1;
    __IO uint32_t SAFTYLOCK2                : 1;
    uint32_t RESERVED4                      : 4;
    __IO uint32_t CPUSTOP                   : 1;
    __IO uint32_t CPUSLEEP                  : 1;
    uint32_t RESERVED10                     :22;
} stc_dbgc_mcustat_field_t;

typedef struct
{
    __IO uint32_t EDBGRQ                    : 1;
    __IO uint32_t RESTART                   : 1;
    uint32_t RESERVED2                      : 6;
    __IO uint32_t DIRQ                      : 1;
    uint32_t RESERVED9                      :23;
} stc_dbgc_mcuctl_field_t;

typedef struct
{
    __IO uint32_t ERASEREQ                  : 1;
    __IO uint32_t ERASEACK                  : 1;
    __IO uint32_t ERASEERR                  : 1;
    uint32_t RESERVED3                      :29;
} stc_dbgc_fmcctl_field_t;

typedef struct
{
    __IO uint32_t CDBGPWRUPREQ              : 1;
    __IO uint32_t CDBGPWRUPACK              : 1;
    uint32_t RESERVED2                      :30;
} stc_dbgc_mcudbgstat_field_t;

typedef struct
{
    __IO uint32_t SWDTSTP                   : 1;
    __IO uint32_t WDTSTP                    : 1;
    __IO uint32_t RTCSTP                    : 1;
    __IO uint32_t PVD0STP                   : 1;
    __IO uint32_t PVD1STP                   : 1;
    __IO uint32_t PVD2STP                   : 1;
    uint32_t RESERVED6                      : 8;
    __IO uint32_t TMR01STP                  : 1;
    __IO uint32_t TMR02STP                  : 1;
    uint32_t RESERVED16                     : 4;
    __IO uint32_t TMR41STP                  : 1;
    __IO uint32_t TMR42STP                  : 1;
    __IO uint32_t TMR43STP                  : 1;
    __IO uint32_t TM61STP                   : 1;
    __IO uint32_t TM62STP                   : 1;
    __IO uint32_t TMR63STP                  : 1;
    __IO uint32_t TMRA1STP                  : 1;
    __IO uint32_t TMRA2STP                  : 1;
    __IO uint32_t TMRA3STP                  : 1;
    __IO uint32_t TMRA4STP                  : 1;
    __IO uint32_t TMRA5STP                  : 1;
    __IO uint32_t TMRA6STP                  : 1;
} stc_dbgc_mcustpctl_field_t;

typedef struct
{
    __IO uint32_t TRACEMODE                 : 2;
    __IO uint32_t TRACEIOEN                 : 1;
    uint32_t RESERVED3                      :29;
} stc_dbgc_mcutracectl_field_t;

typedef struct
{
    __IO uint32_t MODE                      : 3;
    __IO uint32_t DATASIZE                  : 2;
    uint32_t RESERVED5                      : 3;
    __IO uint32_t COMP_TRG                  : 1;
    uint32_t RESERVED9                      :22;
    __IO uint32_t INTEN                     : 1;
} stc_dcu_ctl_field_t;

typedef struct
{
    __IO uint32_t FLAG_OP                   : 1;
    __IO uint32_t FLAG_LS2                  : 1;
    __IO uint32_t FLAG_EQ2                  : 1;
    __IO uint32_t FLAG_GT2                  : 1;
    __IO uint32_t FLAG_LS1                  : 1;
    __IO uint32_t FLAG_EQ1                  : 1;
    __IO uint32_t FLAG_GT1                  : 1;
    uint32_t RESERVED7                      :25;
} stc_dcu_flag_field_t;

typedef struct
{
    __IO uint32_t CLR_OP                    : 1;
    __IO uint32_t CLR_LS2                   : 1;
    __IO uint32_t CLR_EQ2                   : 1;
    __IO uint32_t CLR_GT2                   : 1;
    __IO uint32_t CLR_LS1                   : 1;
    __IO uint32_t CLR_EQ1                   : 1;
    __IO uint32_t CLR_GT1                   : 1;
    uint32_t RESERVED7                      :25;
} stc_dcu_flagclr_field_t;

typedef struct
{
    __IO uint32_t INT_OP                    : 1;
    __IO uint32_t INT_LS2                   : 1;
    __IO uint32_t INT_EQ2                   : 1;
    __IO uint32_t INT_GT2                   : 1;
    __IO uint32_t INT_LS1                   : 1;
    __IO uint32_t INT_EQ1                   : 1;
    __IO uint32_t INT_GT1                   : 1;
    __IO uint32_t INT_WIN                   : 2;
    uint32_t RESERVED9                      :23;
} stc_dcu_intsel_field_t;

typedef struct
{
    __IO uint32_t EN                        : 1;
    uint32_t RESERVED1                      :31;
} stc_dma_en_field_t;

typedef struct
{
    __IO uint32_t TRNERR                    : 4;
    uint32_t RESERVED4                      :12;
    __IO uint32_t REQERR                    : 4;
    uint32_t RESERVED20                     :12;
} stc_dma_intstat0_field_t;

typedef struct
{
    __IO uint32_t TC                        : 4;
    uint32_t RESERVED4                      :12;
    __IO uint32_t BTC                       : 4;
    uint32_t RESERVED20                     :12;
} stc_dma_intstat1_field_t;

typedef struct
{
    __IO uint32_t MSKTRNERR                 : 4;
    uint32_t RESERVED4                      :12;
    __IO uint32_t MSKREQERR                 : 4;
    uint32_t RESERVED20                     :12;
} stc_dma_intmask0_field_t;

typedef struct
{
    __IO uint32_t MSKTC                     : 4;
    uint32_t RESERVED4                      :12;
    __IO uint32_t MSKBTC                    : 4;
    uint32_t RESERVED20                     :12;
} stc_dma_intmask1_field_t;

typedef struct
{
    __IO uint32_t CLRTRNERR                 : 4;
    uint32_t RESERVED4                      :12;
    __IO uint32_t CLRREQERR                 : 4;
    uint32_t RESERVED20                     :12;
} stc_dma_intclr0_field_t;

typedef struct
{
    __IO uint32_t CLRTC                     : 4;
    uint32_t RESERVED4                      :12;
    __IO uint32_t CLRBTC                    : 4;
    uint32_t RESERVED20                     :12;
} stc_dma_intclr1_field_t;

typedef struct
{
    __IO uint32_t CHEN                      : 4;
    uint32_t RESERVED4                      :28;
} stc_dma_chen_field_t;

typedef struct
{
    __IO uint32_t DMAACT                    : 1;
    __IO uint32_t RCFGACT                   : 1;
    uint32_t RESERVED2                      :14;
    __IO uint32_t CHACT                     : 4;
    uint32_t RESERVED20                     :12;
} stc_dma_chstat_field_t;

typedef struct
{
    __IO uint32_t RCFGEN                    : 1;
    __IO uint32_t RCFGLLP                   : 1;
    uint32_t RESERVED2                      : 6;
    __IO uint32_t RCFGCHS                   : 4;
    uint32_t RESERVED12                     : 4;
    __IO uint32_t SARMD                     : 2;
    __IO uint32_t DARMD                     : 2;
    __IO uint32_t CNTMD                     : 2;
    uint32_t RESERVED22                     :10;
} stc_dma_rcfgctl_field_t;

typedef struct
{
    __IO uint32_t BLKSIZE                   :10;
    uint32_t RESERVED10                     : 6;
    __IO uint32_t CNT                       :16;
} stc_dma_dtctl_field_t;

typedef struct
{
    __IO uint32_t SRPT                      :10;
    uint32_t RESERVED10                     : 6;
    __IO uint32_t DRPT                      :10;
    uint32_t RESERVED26                     : 6;
} stc_dma_rpt_field_t;

typedef struct
{
    __IO uint32_t SRPTB                     :10;
    uint32_t RESERVED10                     : 6;
    __IO uint32_t DRPTB                     :10;
    uint32_t RESERVED26                     : 6;
} stc_dma_rptb_field_t;

typedef struct
{
    __IO uint32_t SOFFSET                   :20;
    __IO uint32_t SNSCNT                    :12;
} stc_dma_snseqctl_field_t;

typedef struct
{
    __IO uint32_t SNSDIST                   :20;
    __IO uint32_t SNSCNTB                   :12;
} stc_dma_snseqctlb_field_t;

typedef struct
{
    __IO uint32_t DOFFSET                   :20;
    __IO uint32_t DNSCNT                    :12;
} stc_dma_dnseqctl_field_t;

typedef struct
{
    __IO uint32_t DNSDIST                   :20;
    __IO uint32_t DNSCNTB                   :12;
} stc_dma_dnseqctlb_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 2;
    __IO uint32_t LLP                       :30;
} stc_dma_llp_field_t;

typedef struct
{
    __IO uint32_t SINC                      : 2;
    __IO uint32_t DINC                      : 2;
    __IO uint32_t SRPTEN                    : 1;
    __IO uint32_t DRPTEN                    : 1;
    __IO uint32_t SNSEQEN                   : 1;
    __IO uint32_t DNSEQEN                   : 1;
    __IO uint32_t HSIZE                     : 2;
    __IO uint32_t LLPEN                     : 1;
    __IO uint32_t LLPRUN                    : 1;
    __IO uint32_t IE                        : 1;
    uint32_t RESERVED13                     :19;
} stc_dma_ch0ctl_field_t;

typedef struct
{
    __IO uint32_t BLKSIZE                   :10;
    uint32_t RESERVED10                     : 6;
    __IO uint32_t CNT                       :16;
} stc_dma_mondtctl_field_t;

typedef struct
{
    __IO uint32_t SRPT                      :10;
    uint32_t RESERVED10                     : 6;
    __IO uint32_t DRPT                      :10;
    uint32_t RESERVED26                     : 6;
} stc_dma_monrpt_field_t;

typedef struct
{
    __IO uint32_t SOFFSET                   :20;
    __IO uint32_t SNSCNT                    :12;
} stc_dma_monsnseqctl_field_t;

typedef struct
{
    __IO uint32_t DOFFSET                   :20;
    __IO uint32_t DNSCNT                    :12;
} stc_dma_mondnseqctl_field_t;

typedef struct
{
    __IO uint32_t SINC                      : 2;
    __IO uint32_t DINC                      : 2;
    __IO uint32_t SRPTEN                    : 1;
    __IO uint32_t DRPTEN                    : 1;
    __IO uint32_t SNSEQEN                   : 1;
    __IO uint32_t DNSEQEN                   : 1;
    __IO uint32_t HSIZE                     : 2;
    __IO uint32_t LLPEN                     : 1;
    __IO uint32_t LLPRUN                    : 1;
    __IO uint32_t IE                        : 1;
    uint32_t RESERVED13                     :19;
} stc_dma_ch1ctl_field_t;

typedef struct
{
    __IO uint32_t SINC                      : 2;
    __IO uint32_t DINC                      : 2;
    __IO uint32_t SRPTEN                    : 1;
    __IO uint32_t DRPTEN                    : 1;
    __IO uint32_t SNSEQEN                   : 1;
    __IO uint32_t DNSEQEN                   : 1;
    __IO uint32_t HSIZE                     : 2;
    __IO uint32_t LLPEN                     : 1;
    __IO uint32_t LLPRUN                    : 1;
    __IO uint32_t IE                        : 1;
    uint32_t RESERVED13                     :19;
} stc_dma_ch2ctl_field_t;

typedef struct
{
    __IO uint32_t SINC                      : 2;
    __IO uint32_t DINC                      : 2;
    __IO uint32_t SRPTEN                    : 1;
    __IO uint32_t DRPTEN                    : 1;
    __IO uint32_t SNSEQEN                   : 1;
    __IO uint32_t DNSEQEN                   : 1;
    __IO uint32_t HSIZE                     : 2;
    __IO uint32_t LLPEN                     : 1;
    __IO uint32_t LLPRUN                    : 1;
    __IO uint32_t IE                        : 1;
    uint32_t RESERVED13                     :19;
} stc_dma_ch3ctl_field_t;

typedef struct
{
    __IO uint32_t FAPRT                     :16;
    uint32_t RESERVED16                     :16;
} stc_efm_faprt_field_t;

typedef struct
{
    __IO uint32_t FSTP                      : 1;
    uint32_t RESERVED1                      :31;
} stc_efm_fstp_field_t;

typedef struct
{
    __IO uint32_t SLPMD                     : 1;
    uint32_t RESERVED1                      : 3;
    __IO uint32_t FLWT                      : 4;
    __IO uint32_t LVM                       : 1;
    uint32_t RESERVED9                      : 7;
    __IO uint32_t CACHE                     : 1;
    uint32_t RESERVED17                     : 7;
    __IO uint32_t CRST                      : 1;
    uint32_t RESERVED25                     : 7;
} stc_efm_frmc_field_t;

typedef struct
{
    __IO uint32_t PEMODE                    : 1;
    uint32_t RESERVED1                      : 3;
    __IO uint32_t PEMOD                     : 3;
    uint32_t RESERVED7                      : 1;
    __IO uint32_t BUSHLDCTL                 : 1;
    uint32_t RESERVED9                      :23;
} stc_efm_fwmc_field_t;

typedef struct
{
    __IO uint32_t PEWERR                    : 1;
    __IO uint32_t PEPRTERR                  : 1;
    __IO uint32_t PGSZERR                   : 1;
    __IO uint32_t PGMISMTCH                 : 1;
    __IO uint32_t OPTEND                    : 1;
    __IO uint32_t COLERR                    : 1;
    uint32_t RESERVED6                      : 2;
    __IO uint32_t RDY                       : 1;
    uint32_t RESERVED9                      :23;
} stc_efm_fsr_field_t;

typedef struct
{
    __IO uint32_t PEWERRCLR                 : 1;
    __IO uint32_t PEPRTERRCLR               : 1;
    __IO uint32_t PGSZERRCLR                : 1;
    __IO uint32_t PGMISMTCHCLR              : 1;
    __IO uint32_t OPTENDCLR                 : 1;
    __IO uint32_t COLERRCLR                 : 1;
    uint32_t RESERVED6                      :26;
} stc_efm_fsclr_field_t;

typedef struct
{
    __IO uint32_t PEERRITE                  : 1;
    __IO uint32_t OPTENDITE                 : 1;
    __IO uint32_t COLERRITE                 : 1;
    uint32_t RESERVED3                      :29;
} stc_efm_fite_field_t;

typedef struct
{
    __IO uint32_t FSWP                      : 1;
    uint32_t RESERVED1                      :31;
} stc_efm_fswp_field_t;

typedef struct
{
    __IO uint32_t FPMTSW                    :19;
    uint32_t RESERVED19                     :13;
} stc_efm_fpmtsw_field_t;

typedef struct
{
    __IO uint32_t FPMTEW                    :19;
    uint32_t RESERVED19                     :13;
} stc_efm_fpmtew_field_t;

typedef struct
{
    __IO uint32_t REMPRT                    :16;
    uint32_t RESERVED16                     :16;
} stc_efm_mmf_remprt_field_t;

typedef struct
{
    __IO uint32_t RM0SIZE                   : 5;
    uint32_t RESERVED5                      : 7;
    __IO uint32_t RM0TADDR                  :17;
    uint32_t RESERVED29                     : 2;
    __IO uint32_t EN0                       : 1;
} stc_efm_mmf_remcr0_field_t;

typedef struct
{
    __IO uint32_t RM1SIZE                   : 5;
    uint32_t RESERVED5                      : 7;
    __IO uint32_t RM1TADDR                  :17;
    uint32_t RESERVED29                     : 2;
    __IO uint32_t EN1                       : 1;
} stc_efm_mmf_remcr1_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 1;
    __IO uint32_t FRANDS                    :14;
    uint32_t RESERVED15                     : 1;
    __IO uint32_t FRANDFG                   : 1;
    uint32_t RESERVED17                     :15;
} stc_efm_efm_frands_field_t;

typedef struct
{
    __IO uint32_t PORTINEN                  : 1;
    __IO uint32_t CMPEN                     : 3;
    uint32_t RESERVED4                      : 1;
    __IO uint32_t OSCSTPEN                  : 1;
    __IO uint32_t PWMSEN                    : 3;
    uint32_t RESERVED9                      :19;
    __IO uint32_t NFSEL                     : 2;
    __IO uint32_t NFEN                      : 1;
    __IO uint32_t INVSEL                    : 1;
} stc_emb_ctl_field_t;

typedef struct
{
    __IO uint32_t PWMLV                     : 3;
    uint32_t RESERVED3                      :29;
} stc_emb_pwmlv_field_t;

typedef struct
{
    __IO uint32_t SOE                       : 1;
    uint32_t RESERVED1                      :31;
} stc_emb_soe_field_t;

typedef struct
{
    __IO uint32_t PORTINF                   : 1;
    __IO uint32_t PWMSF                     : 1;
    __IO uint32_t CMPF                      : 1;
    __IO uint32_t OSF                       : 1;
    __IO uint32_t PORTINST                  : 1;
    __IO uint32_t PWMST                     : 1;
    uint32_t RESERVED6                      :26;
} stc_emb_stat_field_t;

typedef struct
{
    __IO uint32_t PORTINFCLR                : 1;
    __IO uint32_t PWMSFCLR                  : 1;
    __IO uint32_t CMPFCLR                   : 1;
    __IO uint32_t OSFCLR                    : 1;
    uint32_t RESERVED4                      :28;
} stc_emb_statclr_field_t;

typedef struct
{
    __IO uint32_t PORTINTEN                 : 1;
    __IO uint32_t PWMINTEN                  : 1;
    __IO uint32_t CMPINTEN                  : 1;
    __IO uint32_t OSINTEN                   : 1;
    uint32_t RESERVED4                      :28;
} stc_emb_inten_field_t;

typedef struct
{
    __IO uint32_t LVR                       :16;
    uint32_t RESERVED16                     :16;
} stc_fcm_lvr_field_t;

typedef struct
{
    __IO uint32_t UVR                       :16;
    uint32_t RESERVED16                     :16;
} stc_fcm_uvr_field_t;

typedef struct
{
    __IO uint32_t CNTR                      :16;
    uint32_t RESERVED16                     :16;
} stc_fcm_cntr_field_t;

typedef struct
{
    __IO uint32_t START                     : 1;
    uint32_t RESERVED1                      :31;
} stc_fcm_str_field_t;

typedef struct
{
    __IO uint32_t MDIVS                     : 2;
    uint32_t RESERVED2                      : 2;
    __IO uint32_t MCKS                      : 4;
    uint32_t RESERVED8                      :24;
} stc_fcm_mccr_field_t;

typedef struct
{
    __IO uint32_t RDIVS                     : 2;
    uint32_t RESERVED2                      : 1;
    __IO uint32_t RCKS                      : 4;
    __IO uint32_t INEXS                     : 1;
    __IO uint32_t DNFS                      : 2;
    uint32_t RESERVED10                     : 2;
    __IO uint32_t EDGES                     : 2;
    uint32_t RESERVED14                     : 1;
    __IO uint32_t EXREFE                    : 1;
    uint32_t RESERVED16                     :16;
} stc_fcm_rccr_field_t;

typedef struct
{
    __IO uint32_t ERRIE                     : 1;
    __IO uint32_t MENDIE                    : 1;
    __IO uint32_t OVFIE                     : 1;
    uint32_t RESERVED3                      : 1;
    __IO uint32_t ERRINTRS                  : 1;
    uint32_t RESERVED5                      : 2;
    __IO uint32_t ERRE                      : 1;
    uint32_t RESERVED8                      :24;
} stc_fcm_rier_field_t;

typedef struct
{
    __IO uint32_t ERRF                      : 1;
    __IO uint32_t MENDF                     : 1;
    __IO uint32_t OVF                       : 1;
    uint32_t RESERVED3                      :29;
} stc_fcm_sr_field_t;

typedef struct
{
    __IO uint32_t ERRFCLR                   : 1;
    __IO uint32_t MENDFCLR                  : 1;
    __IO uint32_t OVFCLR                    : 1;
    uint32_t RESERVED3                      :29;
} stc_fcm_clr_field_t;

typedef struct
{
    __IO uint32_t START                     : 1;
    __IO uint32_t FST_GRP                   : 1;
    uint32_t RESERVED2                      :30;
} stc_hash_cr_field_t;

typedef struct
{
    __IO uint32_t PE                        : 1;
    __IO uint32_t SMBUS                     : 1;
    __IO uint32_t SMBALRTEN                 : 1;
    __IO uint32_t SMBDEFAULTEN              : 1;
    __IO uint32_t SMBHOSTEN                 : 1;
    uint32_t RESERVED5                      : 1;
    __IO uint32_t ENGC                      : 1;
    __IO uint32_t RESTART                   : 1;
    __IO uint32_t START                     : 1;
    __IO uint32_t STOP                      : 1;
    __IO uint32_t ACK                       : 1;
    uint32_t RESERVED11                     : 4;
    __IO uint32_t SWRST                     : 1;
    uint32_t RESERVED16                     :16;
} stc_i2c_cr1_field_t;

typedef struct
{
    __IO uint32_t STARTIE                   : 1;
    __IO uint32_t SLADDR0IE                 : 1;
    __IO uint32_t SLADDR1IE                 : 1;
    __IO uint32_t TENDIE                    : 1;
    __IO uint32_t STOPIE                    : 1;
    uint32_t RESERVED5                      : 1;
    __IO uint32_t RFULLIE                   : 1;
    __IO uint32_t TEMPTYIE                  : 1;
    uint32_t RESERVED8                      : 1;
    __IO uint32_t ARLOIE                    : 1;
    uint32_t RESERVED10                     : 2;
    __IO uint32_t NACKIE                    : 1;
    uint32_t RESERVED13                     : 1;
    __IO uint32_t TMOUTIE                   : 1;
    uint32_t RESERVED15                     : 5;
    __IO uint32_t GENCALLIE                 : 1;
    __IO uint32_t SMBDEFAULTIE              : 1;
    __IO uint32_t SMBHOSTIE                 : 1;
    __IO uint32_t SMBALRTIE                 : 1;
    uint32_t RESERVED24                     : 8;
} stc_i2c_cr2_field_t;

typedef struct
{
    __IO uint32_t TMOUTEN                   : 1;
    __IO uint32_t LTMOUT                    : 1;
    __IO uint32_t HTMOUT                    : 1;
    uint32_t RESERVED3                      : 4;
    __IO uint32_t FACKEN                    : 1;
    uint32_t RESERVED8                      :24;
} stc_i2c_cr3_field_t;

typedef struct
{
    __IO uint32_t SLADDR0                   :10;
    uint32_t RESERVED10                     : 2;
    __IO uint32_t SLADDR0EN                 : 1;
    uint32_t RESERVED13                     : 2;
    __IO uint32_t ADDRMOD0                  : 1;
    uint32_t RESERVED16                     :16;
} stc_i2c_slr0_field_t;

typedef struct
{
    __IO uint32_t SLADDR1                   :10;
    uint32_t RESERVED10                     : 2;
    __IO uint32_t SLADDR1EN                 : 1;
    uint32_t RESERVED13                     : 2;
    __IO uint32_t ADDRMOD1                  : 1;
    uint32_t RESERVED16                     :16;
} stc_i2c_slr1_field_t;

typedef struct
{
    __IO uint32_t TOUTLOW                   :16;
    __IO uint32_t TOUTHIGH                  :16;
} stc_i2c_sltr_field_t;

typedef struct
{
    __IO uint32_t STARTF                    : 1;
    __IO uint32_t SLADDR0F                  : 1;
    __IO uint32_t SLADDR1F                  : 1;
    __IO uint32_t TENDF                     : 1;
    __IO uint32_t STOPF                     : 1;
    uint32_t RESERVED5                      : 1;
    __IO uint32_t RFULLF                    : 1;
    __IO uint32_t TEMPTYF                   : 1;
    uint32_t RESERVED8                      : 1;
    __IO uint32_t ARLOF                     : 1;
    __IO uint32_t ACKRF                     : 1;
    uint32_t RESERVED11                     : 1;
    __IO uint32_t NACKF                     : 1;
    uint32_t RESERVED13                     : 1;
    __IO uint32_t TMOUTF                    : 1;
    uint32_t RESERVED15                     : 1;
    __IO uint32_t MSL                       : 1;
    __IO uint32_t BUSY                      : 1;
    __IO uint32_t TRA                       : 1;
    uint32_t RESERVED19                     : 1;
    __IO uint32_t GENCALLF                  : 1;
    __IO uint32_t SMBDEFAULTF               : 1;
    __IO uint32_t SMBHOSTF                  : 1;
    __IO uint32_t SMBALRTF                  : 1;
    uint32_t RESERVED24                     : 8;
} stc_i2c_sr_field_t;

typedef struct
{
    __IO uint32_t STARTFCLR                 : 1;
    __IO uint32_t SLADDR0FCLR               : 1;
    __IO uint32_t SLADDR1FCLR               : 1;
    __IO uint32_t TENDFCLR                  : 1;
    __IO uint32_t STOPFCLR                  : 1;
    uint32_t RESERVED5                      : 1;
    __IO uint32_t RFULLFCLR                 : 1;
    __IO uint32_t TEMPTYFCLR                : 1;
    uint32_t RESERVED8                      : 1;
    __IO uint32_t ARLOFCLR                  : 1;
    uint32_t RESERVED10                     : 2;
    __IO uint32_t NACKFCLR                  : 1;
    uint32_t RESERVED13                     : 1;
    __IO uint32_t TMOUTFCLR                 : 1;
    uint32_t RESERVED15                     : 5;
    __IO uint32_t GENCALLFCLR               : 1;
    __IO uint32_t SMBDEFAULTFCLR            : 1;
    __IO uint32_t SMBHOSTFCLR               : 1;
    __IO uint32_t SMBALRTFCLR               : 1;
    uint32_t RESERVED24                     : 8;
} stc_i2c_clr_field_t;

typedef struct
{
    __IO uint8_t DT                         : 8;
} stc_i2c_dtr_field_t;

typedef struct
{
    __IO uint8_t DR                         : 8;
} stc_i2c_drr_field_t;

typedef struct
{
    __IO uint32_t SLOWW                     : 5;
    uint32_t RESERVED5                      : 3;
    __IO uint32_t SHIGHW                    : 5;
    uint32_t RESERVED13                     : 3;
    __IO uint32_t FREQ                      : 3;
    uint32_t RESERVED19                     :13;
} stc_i2c_ccr_field_t;

typedef struct
{
    __IO uint32_t DNF                       : 2;
    uint32_t RESERVED2                      : 2;
    __IO uint32_t DNFEN                     : 1;
    __IO uint32_t ANFEN                     : 1;
    uint32_t RESERVED6                      :26;
} stc_i2c_fltr_field_t;

typedef struct
{
    __IO uint32_t TXE                       : 1;
    __IO uint32_t TXIE                      : 1;
    __IO uint32_t RXE                       : 1;
    __IO uint32_t RXIE                      : 1;
    __IO uint32_t EIE                       : 1;
    __IO uint32_t WMS                       : 1;
    __IO uint32_t ODD                       : 1;
    __IO uint32_t MCKOE                     : 1;
    __IO uint32_t TXBIRQWL                  : 3;
    uint32_t RESERVED11                     : 1;
    __IO uint32_t RXBIRQWL                  : 3;
    uint32_t RESERVED15                     : 1;
    __IO uint32_t FIFOR                     : 1;
    __IO uint32_t CODECRC                   : 1;
    __IO uint32_t I2SPLLSEL                 : 1;
    __IO uint32_t SDOE                      : 1;
    __IO uint32_t LRCKOE                    : 1;
    __IO uint32_t CKOE                      : 1;
    __IO uint32_t DUPLEX                    : 1;
    __IO uint32_t CLKSEL                    : 1;
    uint32_t RESERVED24                     : 8;
} stc_i2s_ctrl_field_t;

typedef struct
{
    __IO uint32_t TXBA                      : 1;
    __IO uint32_t RXBA                      : 1;
    __IO uint32_t TXBE                      : 1;
    __IO uint32_t TXBF                      : 1;
    __IO uint32_t RXBE                      : 1;
    __IO uint32_t RXBF                      : 1;
    uint32_t RESERVED6                      :26;
} stc_i2s_sr_field_t;

typedef struct
{
    __IO uint32_t TXERR                     : 1;
    __IO uint32_t RXERR                     : 1;
    uint32_t RESERVED2                      :30;
} stc_i2s_er_field_t;

typedef struct
{
    __IO uint32_t I2SSTD                    : 2;
    __IO uint32_t DATLEN                    : 2;
    __IO uint32_t CHLEN                     : 1;
    __IO uint32_t PCMSYNC                   : 1;
    uint32_t RESERVED6                      :26;
} stc_i2s_cfgr_field_t;

typedef struct
{
    __IO uint32_t I2SDIV                    : 8;
    uint32_t RESERVED8                      :24;
} stc_i2s_pr_field_t;

typedef struct
{
    __IO uint32_t SWDTAUTS                  : 1;
    __IO uint32_t SWDTITS                   : 1;
    __IO uint32_t SWDTPERI                  : 2;
    __IO uint32_t SWDTCKS                   : 4;
    __IO uint32_t SWDTWDPT                  : 4;
    __IO uint32_t SWDTSLPOFF                : 1;
    uint32_t RESERVED13                     : 3;
    __IO uint32_t WDTAUTS                   : 1;
    __IO uint32_t WDTITS                    : 1;
    __IO uint32_t WDTPERI                   : 2;
    __IO uint32_t WDTCKS                    : 4;
    __IO uint32_t WDTWDPT                   : 4;
    __IO uint32_t WDTSLPOFF                 : 1;
    uint32_t RESERVED29                     : 3;
} stc_icg_icg0_field_t;

typedef struct
{
    __IO uint32_t HRCFREQSEL                : 1;
    uint32_t RESERVED1                      : 7;
    __IO uint32_t HRCSTOP                   : 1;
    uint32_t RESERVED9                      : 7;
    __IO uint32_t BOR_LEV                   : 2;
    __IO uint32_t BORDIS                    : 1;
    uint32_t RESERVED19                     : 7;
    __IO uint32_t SMPCLK                    : 2;
    __IO uint32_t NMITRG                    : 1;
    __IO uint32_t NMIENR                    : 1;
    __IO uint32_t NFEN                      : 1;
    __IO uint32_t NMIICGENA                 : 1;
} stc_icg_icg1_field_t;

typedef struct
{
    __IO uint32_t NMITRG                    : 1;
    uint32_t RESERVED1                      : 3;
    __IO uint32_t NSMPCLK                   : 2;
    uint32_t RESERVED6                      : 1;
    __IO uint32_t NFEN                      : 1;
    uint32_t RESERVED8                      :24;
} stc_intc_nmicr_field_t;

typedef struct
{
    __IO uint32_t NMIENR                    : 1;
    __IO uint32_t SWDTENR                   : 1;
    __IO uint32_t PVD1ENR                   : 1;
    __IO uint32_t PVD2ENR                   : 1;
    uint32_t RESERVED4                      : 1;
    __IO uint32_t XTALSTPENR                : 1;
    uint32_t RESERVED6                      : 2;
    __IO uint32_t REPENR                    : 1;
    __IO uint32_t RECCENR                   : 1;
    __IO uint32_t BUSMENR                   : 1;
    __IO uint32_t WDTENR                    : 1;
    uint32_t RESERVED12                     :20;
} stc_intc_nmienr_field_t;

typedef struct
{
    __IO uint32_t NMIFR                     : 1;
    __IO uint32_t SWDTFR                    : 1;
    __IO uint32_t PVD1FR                    : 1;
    __IO uint32_t PVD2FR                    : 1;
    uint32_t RESERVED4                      : 1;
    __IO uint32_t XTALSTPFR                 : 1;
    uint32_t RESERVED6                      : 2;
    __IO uint32_t REPFR                     : 1;
    __IO uint32_t RECCFR                    : 1;
    __IO uint32_t BUSMFR                    : 1;
    __IO uint32_t WDTFR                     : 1;
    uint32_t RESERVED12                     :20;
} stc_intc_nmifr_field_t;

typedef struct
{
    __IO uint32_t NMICFR                    : 1;
    __IO uint32_t SWDTCFR                   : 1;
    __IO uint32_t PVD1CFR                   : 1;
    __IO uint32_t PVD2CFR                   : 1;
    uint32_t RESERVED4                      : 1;
    __IO uint32_t XTALSTPCFR                : 1;
    uint32_t RESERVED6                      : 2;
    __IO uint32_t REPCFR                    : 1;
    __IO uint32_t RECCCFR                   : 1;
    __IO uint32_t BUSMCFR                   : 1;
    __IO uint32_t WDTCFR                    : 1;
    uint32_t RESERVED12                     :20;
} stc_intc_nmicfr_field_t;

typedef struct
{
    __IO uint32_t EIRQTRG                   : 2;
    uint32_t RESERVED2                      : 2;
    __IO uint32_t EISMPCLK                  : 2;
    uint32_t RESERVED6                      : 1;
    __IO uint32_t EFEN                      : 1;
    uint32_t RESERVED8                      :24;
} stc_intc_eirqcr_field_t;

typedef struct
{
    __IO uint32_t EIRQWUEN                  :16;
    __IO uint32_t SWDTWUEN                  : 1;
    __IO uint32_t PVD1WUEN                  : 1;
    __IO uint32_t PVD2WUEN                  : 1;
    __IO uint32_t CMPI0WUEN                 : 1;
    __IO uint32_t WKTMWUEN                  : 1;
    __IO uint32_t RTCALMWUEN                : 1;
    __IO uint32_t RTCPRDWUEN                : 1;
    __IO uint32_t TMR0WUEN                  : 1;
    uint32_t RESERVED24                     : 1;
    __IO uint32_t RXWUEN                    : 1;
    uint32_t RESERVED26                     : 6;
} stc_intc_wupen_field_t;

typedef struct
{
    __IO uint32_t EIFR0                     : 1;
    __IO uint32_t EIFR1                     : 1;
    __IO uint32_t EIFR2                     : 1;
    __IO uint32_t EIFR3                     : 1;
    __IO uint32_t EIFR4                     : 1;
    __IO uint32_t EIFR5                     : 1;
    __IO uint32_t EIFR6                     : 1;
    __IO uint32_t EIFR7                     : 1;
    __IO uint32_t EIFR8                     : 1;
    __IO uint32_t EIFR9                     : 1;
    __IO uint32_t EIFR10                    : 1;
    __IO uint32_t EIFR11                    : 1;
    __IO uint32_t EIFR12                    : 1;
    __IO uint32_t EIFR13                    : 1;
    __IO uint32_t EIFR14                    : 1;
    __IO uint32_t EIFR15                    : 1;
    uint32_t RESERVED16                     :16;
} stc_intc_eifr_field_t;

typedef struct
{
    __IO uint32_t EICFR0                    : 1;
    __IO uint32_t EICFR1                    : 1;
    __IO uint32_t EICFR2                    : 1;
    __IO uint32_t EICFR3                    : 1;
    __IO uint32_t EICFR4                    : 1;
    __IO uint32_t EICFR5                    : 1;
    __IO uint32_t EICFR6                    : 1;
    __IO uint32_t EICFR7                    : 1;
    __IO uint32_t EICFR8                    : 1;
    __IO uint32_t EICFR9                    : 1;
    __IO uint32_t EICFR10                   : 1;
    __IO uint32_t EICFR11                   : 1;
    __IO uint32_t EICFR12                   : 1;
    __IO uint32_t EICFR13                   : 1;
    __IO uint32_t EICFR14                   : 1;
    __IO uint32_t EICFR15                   : 1;
    uint32_t RESERVED16                     :16;
} stc_intc_eicfr_field_t;

typedef struct
{
    __IO uint32_t INTSEL                    : 9;
    uint32_t RESERVED9                      :23;
} stc_intc_sel_field_t;

typedef struct
{
    __IO uint32_t VSEL0                     : 1;
    __IO uint32_t VSEL1                     : 1;
    __IO uint32_t VSEL2                     : 1;
    __IO uint32_t VSEL3                     : 1;
    __IO uint32_t VSEL4                     : 1;
    __IO uint32_t VSEL5                     : 1;
    __IO uint32_t VSEL6                     : 1;
    __IO uint32_t VSEL7                     : 1;
    __IO uint32_t VSEL8                     : 1;
    __IO uint32_t VSEL9                     : 1;
    __IO uint32_t VSEL10                    : 1;
    __IO uint32_t VSEL11                    : 1;
    __IO uint32_t VSEL12                    : 1;
    __IO uint32_t VSEL13                    : 1;
    __IO uint32_t VSEL14                    : 1;
    __IO uint32_t VSEL15                    : 1;
    __IO uint32_t VSEL16                    : 1;
    __IO uint32_t VSEL17                    : 1;
    __IO uint32_t VSEL18                    : 1;
    __IO uint32_t VSEL19                    : 1;
    __IO uint32_t VSEL20                    : 1;
    __IO uint32_t VSEL21                    : 1;
    __IO uint32_t VSEL22                    : 1;
    __IO uint32_t VSEL23                    : 1;
    __IO uint32_t VSEL24                    : 1;
    __IO uint32_t VSEL25                    : 1;
    __IO uint32_t VSEL26                    : 1;
    __IO uint32_t VSEL27                    : 1;
    __IO uint32_t VSEL28                    : 1;
    __IO uint32_t VSEL29                    : 1;
    __IO uint32_t VSEL30                    : 1;
    __IO uint32_t VSEL31                    : 1;
} stc_intc_vssel_field_t;

typedef struct
{
    __IO uint32_t SWIE0                     : 1;
    __IO uint32_t SWIE1                     : 1;
    __IO uint32_t SWIE2                     : 1;
    __IO uint32_t SWIE3                     : 1;
    __IO uint32_t SWIE4                     : 1;
    __IO uint32_t SWIE5                     : 1;
    __IO uint32_t SWIE6                     : 1;
    __IO uint32_t SWIE7                     : 1;
    __IO uint32_t SWIE8                     : 1;
    __IO uint32_t SWIE9                     : 1;
    __IO uint32_t SWIE10                    : 1;
    __IO uint32_t SWIE11                    : 1;
    __IO uint32_t SWIE12                    : 1;
    __IO uint32_t SWIE13                    : 1;
    __IO uint32_t SWIE14                    : 1;
    __IO uint32_t SWIE15                    : 1;
    __IO uint32_t SWIE16                    : 1;
    __IO uint32_t SWIE17                    : 1;
    __IO uint32_t SWIE18                    : 1;
    __IO uint32_t SWIE19                    : 1;
    __IO uint32_t SWIE20                    : 1;
    __IO uint32_t SWIE21                    : 1;
    __IO uint32_t SWIE22                    : 1;
    __IO uint32_t SWIE23                    : 1;
    __IO uint32_t SWIE24                    : 1;
    __IO uint32_t SWIE25                    : 1;
    __IO uint32_t SWIE26                    : 1;
    __IO uint32_t SWIE27                    : 1;
    __IO uint32_t SWIE28                    : 1;
    __IO uint32_t SWIE29                    : 1;
    __IO uint32_t SWIE30                    : 1;
    __IO uint32_t SWIE31                    : 1;
} stc_intc_swier_field_t;

typedef struct
{
    __IO uint32_t EVTE0                     : 1;
    __IO uint32_t EVTE1                     : 1;
    __IO uint32_t EVTE2                     : 1;
    __IO uint32_t EVTE3                     : 1;
    __IO uint32_t EVTE4                     : 1;
    __IO uint32_t EVTE5                     : 1;
    __IO uint32_t EVTE6                     : 1;
    __IO uint32_t EVTE7                     : 1;
    __IO uint32_t EVTE8                     : 1;
    __IO uint32_t EVTE9                     : 1;
    __IO uint32_t EVTE10                    : 1;
    __IO uint32_t EVTE11                    : 1;
    __IO uint32_t EVTE12                    : 1;
    __IO uint32_t EVTE13                    : 1;
    __IO uint32_t EVTE14                    : 1;
    __IO uint32_t EVTE15                    : 1;
    __IO uint32_t EVTE16                    : 1;
    __IO uint32_t EVTE17                    : 1;
    __IO uint32_t EVTE18                    : 1;
    __IO uint32_t EVTE19                    : 1;
    __IO uint32_t EVTE20                    : 1;
    __IO uint32_t EVTE21                    : 1;
    __IO uint32_t EVTE22                    : 1;
    __IO uint32_t EVTE23                    : 1;
    __IO uint32_t EVTE24                    : 1;
    __IO uint32_t EVTE25                    : 1;
    __IO uint32_t EVTE26                    : 1;
    __IO uint32_t EVTE27                    : 1;
    __IO uint32_t EVTE28                    : 1;
    __IO uint32_t EVTE29                    : 1;
    __IO uint32_t EVTE30                    : 1;
    __IO uint32_t EVTE31                    : 1;
} stc_intc_evter_field_t;

typedef struct
{
    __IO uint32_t IER0                      : 1;
    __IO uint32_t IER1                      : 1;
    __IO uint32_t IER2                      : 1;
    __IO uint32_t IER3                      : 1;
    __IO uint32_t IER4                      : 1;
    __IO uint32_t IER5                      : 1;
    __IO uint32_t IER6                      : 1;
    __IO uint32_t IER7                      : 1;
    __IO uint32_t IER8                      : 1;
    __IO uint32_t IER9                      : 1;
    __IO uint32_t IER10                     : 1;
    __IO uint32_t IER11                     : 1;
    __IO uint32_t IER12                     : 1;
    __IO uint32_t IER13                     : 1;
    __IO uint32_t IER14                     : 1;
    __IO uint32_t IER15                     : 1;
    __IO uint32_t IER16                     : 1;
    __IO uint32_t IER17                     : 1;
    __IO uint32_t IER18                     : 1;
    __IO uint32_t IER19                     : 1;
    __IO uint32_t IER20                     : 1;
    __IO uint32_t IER21                     : 1;
    __IO uint32_t IER22                     : 1;
    __IO uint32_t IER23                     : 1;
    __IO uint32_t IER24                     : 1;
    __IO uint32_t IER25                     : 1;
    __IO uint32_t IER26                     : 1;
    __IO uint32_t IER27                     : 1;
    __IO uint32_t IER28                     : 1;
    __IO uint32_t IER29                     : 1;
    __IO uint32_t IER30                     : 1;
    __IO uint32_t IER31                     : 1;
} stc_intc_ier_field_t;

typedef struct
{
    __IO uint32_t KEYINSEL                  :16;
    __IO uint32_t KEYOUTSEL                 : 3;
    uint32_t RESERVED19                     : 1;
    __IO uint32_t CKSEL                     : 2;
    uint32_t RESERVED22                     : 2;
    __IO uint32_t T_LLEVEL                  : 5;
    __IO uint32_t T_HIZ                     : 3;
} stc_keyscan_scr_field_t;

typedef struct
{
    __IO uint32_t SEN                       : 1;
    uint32_t RESERVED1                      :31;
} stc_keyscan_ser_field_t;

typedef struct
{
    __IO uint32_t INDEX                     : 3;
    uint32_t RESERVED3                      :29;
} stc_keyscan_ssr_field_t;

typedef struct
{
    __IO uint32_t MPURG0SIZE                : 5;
    __IO uint32_t MPURG0ADDR                :27;
} stc_mpu_rgd0_field_t;

typedef struct
{
    __IO uint32_t MPURG1SIZE                : 5;
    __IO uint32_t MPURG1ADDR                :27;
} stc_mpu_rgd1_field_t;

typedef struct
{
    __IO uint32_t MPURG2SIZE                : 5;
    __IO uint32_t MPURG2ADDR                :27;
} stc_mpu_rgd2_field_t;

typedef struct
{
    __IO uint32_t MPURG3SIZE                : 5;
    __IO uint32_t MPURG3ADDR                :27;
} stc_mpu_rgd3_field_t;

typedef struct
{
    __IO uint32_t MPURG4SIZE                : 5;
    __IO uint32_t MPURG4ADDR                :27;
} stc_mpu_rgd4_field_t;

typedef struct
{
    __IO uint32_t MPURG5SIZE                : 5;
    __IO uint32_t MPURG5ADDR                :27;
} stc_mpu_rgd5_field_t;

typedef struct
{
    __IO uint32_t MPURG6SIZE                : 5;
    __IO uint32_t MPURG6ADDR                :27;
} stc_mpu_rgd6_field_t;

typedef struct
{
    __IO uint32_t MPURG7SIZE                : 5;
    __IO uint32_t MPURG7ADDR                :27;
} stc_mpu_rgd7_field_t;

typedef struct
{
    __IO uint32_t MPURG8SIZE                : 5;
    __IO uint32_t MPURG8ADDR                :27;
} stc_mpu_rgd8_field_t;

typedef struct
{
    __IO uint32_t MPURG9SIZE                : 5;
    __IO uint32_t MPURG9ADDR                :27;
} stc_mpu_rgd9_field_t;

typedef struct
{
    __IO uint32_t MPURG10SIZE               : 5;
    __IO uint32_t MPURG10ADDR               :27;
} stc_mpu_rgd10_field_t;

typedef struct
{
    __IO uint32_t MPURG11SIZE               : 5;
    __IO uint32_t MPURG11ADDR               :27;
} stc_mpu_rgd11_field_t;

typedef struct
{
    __IO uint32_t MPURG12SIZE               : 5;
    __IO uint32_t MPURG12ADDR               :27;
} stc_mpu_rgd12_field_t;

typedef struct
{
    __IO uint32_t MPURG13SIZE               : 5;
    __IO uint32_t MPURG13ADDR               :27;
} stc_mpu_rgd13_field_t;

typedef struct
{
    __IO uint32_t MPURG14SIZE               : 5;
    __IO uint32_t MPURG14ADDR               :27;
} stc_mpu_rgd14_field_t;

typedef struct
{
    __IO uint32_t MPURG15SIZE               : 5;
    __IO uint32_t MPURG15ADDR               :27;
} stc_mpu_rgd15_field_t;

typedef struct
{
    __IO uint32_t S2RG0RP                   : 1;
    __IO uint32_t S2RG0WP                   : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG0E                    : 1;
    __IO uint32_t S1RG0RP                   : 1;
    __IO uint32_t S1RG0WP                   : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG0E                    : 1;
    __IO uint32_t FRG0RP                    : 1;
    __IO uint32_t FRG0WP                    : 1;
    uint32_t RESERVED18                     : 5;
    __IO uint32_t FRG0E                     : 1;
    uint32_t RESERVED24                     : 8;
} stc_mpu_rgcr0_field_t;

typedef struct
{
    __IO uint32_t S2RG1RP                   : 1;
    __IO uint32_t S2RG1WP                   : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG1E                    : 1;
    __IO uint32_t S1RG1RP                   : 1;
    __IO uint32_t S1RG1WP                   : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG1E                    : 1;
    __IO uint32_t FRG1RP                    : 1;
    __IO uint32_t FRG1WP                    : 1;
    uint32_t RESERVED18                     : 5;
    __IO uint32_t FRG1E                     : 1;
    uint32_t RESERVED24                     : 8;
} stc_mpu_rgcr1_field_t;

typedef struct
{
    __IO uint32_t S2RG2RP                   : 1;
    __IO uint32_t S2RG2WP                   : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG2E                    : 1;
    __IO uint32_t S1RG2RP                   : 1;
    __IO uint32_t S1RG2WP                   : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG2E                    : 1;
    __IO uint32_t FRG2RP                    : 1;
    __IO uint32_t FRG2WP                    : 1;
    uint32_t RESERVED18                     : 5;
    __IO uint32_t FRG2E                     : 1;
    uint32_t RESERVED24                     : 8;
} stc_mpu_rgcr2_field_t;

typedef struct
{
    __IO uint32_t S2RG3RP                   : 1;
    __IO uint32_t S2RG3WP                   : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG3E                    : 1;
    __IO uint32_t S1RG3RP                   : 1;
    __IO uint32_t S1RG3WP                   : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG3E                    : 1;
    __IO uint32_t FRG3RP                    : 1;
    __IO uint32_t FRG3WP                    : 1;
    uint32_t RESERVED18                     : 5;
    __IO uint32_t FRG3E                     : 1;
    uint32_t RESERVED24                     : 8;
} stc_mpu_rgcr3_field_t;

typedef struct
{
    __IO uint32_t S2RG4RP                   : 1;
    __IO uint32_t S2RG4WP                   : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG4E                    : 1;
    __IO uint32_t S1RG4RP                   : 1;
    __IO uint32_t S1RG4WP                   : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG4E                    : 1;
    __IO uint32_t FRG4RP                    : 1;
    __IO uint32_t FRG4WP                    : 1;
    uint32_t RESERVED18                     : 5;
    __IO uint32_t FRG4E                     : 1;
    uint32_t RESERVED24                     : 8;
} stc_mpu_rgcr4_field_t;

typedef struct
{
    __IO uint32_t S2RG5RP                   : 1;
    __IO uint32_t S2RG5WP                   : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG5E                    : 1;
    __IO uint32_t S1RG5RP                   : 1;
    __IO uint32_t S1RG5WP                   : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG5E                    : 1;
    __IO uint32_t FRG5RP                    : 1;
    __IO uint32_t FRG5WP                    : 1;
    uint32_t RESERVED18                     : 5;
    __IO uint32_t FRG5E                     : 1;
    uint32_t RESERVED24                     : 8;
} stc_mpu_rgcr5_field_t;

typedef struct
{
    __IO uint32_t S2RG6RP                   : 1;
    __IO uint32_t S2RG6WP                   : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG6E                    : 1;
    __IO uint32_t S1RG6RP                   : 1;
    __IO uint32_t S1RG6WP                   : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG6E                    : 1;
    __IO uint32_t FRG6RP                    : 1;
    __IO uint32_t FRG6WP                    : 1;
    uint32_t RESERVED18                     : 5;
    __IO uint32_t FRG6E                     : 1;
    uint32_t RESERVED24                     : 8;
} stc_mpu_rgcr6_field_t;

typedef struct
{
    __IO uint32_t S2RG7RP                   : 1;
    __IO uint32_t S2RG7WP                   : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG7E                    : 1;
    __IO uint32_t S1RG7RP                   : 1;
    __IO uint32_t S1RG7WP                   : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG7E                    : 1;
    __IO uint32_t FRG7RP                    : 1;
    __IO uint32_t FRG7WP                    : 1;
    uint32_t RESERVED18                     : 5;
    __IO uint32_t FRG7E                     : 1;
    uint32_t RESERVED24                     : 8;
} stc_mpu_rgcr7_field_t;

typedef struct
{
    __IO uint32_t S2RG8RP                   : 1;
    __IO uint32_t S2RG8WP                   : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG8E                    : 1;
    __IO uint32_t S1RG8RP                   : 1;
    __IO uint32_t S1RG8WP                   : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG8E                    : 1;
    uint32_t RESERVED16                     :16;
} stc_mpu_rgcr8_field_t;

typedef struct
{
    __IO uint32_t S2RG9RP                   : 1;
    __IO uint32_t S2RG9WP                   : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG9E                    : 1;
    __IO uint32_t S1RG9RP                   : 1;
    __IO uint32_t S1RG9WP                   : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG9E                    : 1;
    uint32_t RESERVED16                     :16;
} stc_mpu_rgcr9_field_t;

typedef struct
{
    __IO uint32_t S2RG10RP                  : 1;
    __IO uint32_t S2RG10WP                  : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG10E                   : 1;
    __IO uint32_t S1RG10RP                  : 1;
    __IO uint32_t S1RG10WP                  : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG10E                   : 1;
    uint32_t RESERVED16                     :16;
} stc_mpu_rgcr10_field_t;

typedef struct
{
    __IO uint32_t S2RG11RP                  : 1;
    __IO uint32_t S2RG11WP                  : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG11E                   : 1;
    __IO uint32_t S1RG11RP                  : 1;
    __IO uint32_t S1RG11WP                  : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG11E                   : 1;
    uint32_t RESERVED16                     :16;
} stc_mpu_rgcr11_field_t;

typedef struct
{
    __IO uint32_t S2RG12RP                  : 1;
    __IO uint32_t S2RG12WP                  : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG12E                   : 1;
    __IO uint32_t S1RG12RP                  : 1;
    __IO uint32_t S1RG12WP                  : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG12E                   : 1;
    uint32_t RESERVED16                     :16;
} stc_mpu_rgcr12_field_t;

typedef struct
{
    __IO uint32_t S2RG13RP                  : 1;
    __IO uint32_t S2RG13WP                  : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG13E                   : 1;
    __IO uint32_t S1RG13RP                  : 1;
    __IO uint32_t S1RG13WP                  : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG13E                   : 1;
    uint32_t RESERVED16                     :16;
} stc_mpu_rgcr13_field_t;

typedef struct
{
    __IO uint32_t S2RG14RP                  : 1;
    __IO uint32_t S2RG14WP                  : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG14E                   : 1;
    __IO uint32_t S1RG14RP                  : 1;
    __IO uint32_t S1RG14WP                  : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG14E                   : 1;
    uint32_t RESERVED16                     :16;
} stc_mpu_rgcr14_field_t;

typedef struct
{
    __IO uint32_t S2RG15RP                  : 1;
    __IO uint32_t S2RG15WP                  : 1;
    uint32_t RESERVED2                      : 5;
    __IO uint32_t S2RG15E                   : 1;
    __IO uint32_t S1RG15RP                  : 1;
    __IO uint32_t S1RG15WP                  : 1;
    uint32_t RESERVED10                     : 5;
    __IO uint32_t S1RG15E                   : 1;
    uint32_t RESERVED16                     :16;
} stc_mpu_rgcr15_field_t;

typedef struct
{
    __IO uint32_t SMPU2BRP                  : 1;
    __IO uint32_t SMPU2BWP                  : 1;
    __IO uint32_t SMPU2ACT                  : 2;
    uint32_t RESERVED4                      : 3;
    __IO uint32_t SMPU2E                    : 1;
    __IO uint32_t SMPU1BRP                  : 1;
    __IO uint32_t SMPU1BWP                  : 1;
    __IO uint32_t SMPU1ACT                  : 2;
    uint32_t RESERVED12                     : 3;
    __IO uint32_t SMPU1E                    : 1;
    __IO uint32_t FMPUBRP                   : 1;
    __IO uint32_t FMPUBWP                   : 1;
    __IO uint32_t FMPUACT                   : 2;
    uint32_t RESERVED20                     : 3;
    __IO uint32_t FMPUE                     : 1;
    uint32_t RESERVED24                     : 8;
} stc_mpu_cr_field_t;

typedef struct
{
    __IO uint32_t SMPU2EAF                  : 1;
    uint32_t RESERVED1                      : 7;
    __IO uint32_t SMPU1EAF                  : 1;
    uint32_t RESERVED9                      : 7;
    __IO uint32_t FMPUEAF                   : 1;
    uint32_t RESERVED17                     :15;
} stc_mpu_sr_field_t;

typedef struct
{
    __IO uint32_t SMPU2ECLR                 : 1;
    uint32_t RESERVED1                      : 7;
    __IO uint32_t SMPU1ECLR                 : 1;
    uint32_t RESERVED9                      : 7;
    __IO uint32_t FMPUECLR                  : 1;
    uint32_t RESERVED17                     :15;
} stc_mpu_eclr_field_t;

typedef struct
{
    __IO uint32_t MPUWE                     : 1;
    __IO uint32_t WKEY                      :15;
    uint32_t RESERVED16                     :16;
} stc_mpu_wp_field_t;

typedef struct
{
    __IO uint32_t SRAMH                     : 1;
    uint32_t RESERVED1                      : 3;
    __IO uint32_t SRAM12                    : 1;
    uint32_t RESERVED5                      : 3;
    __IO uint32_t SRAM3                     : 1;
    uint32_t RESERVED9                      : 1;
    __IO uint32_t SRAMRET                   : 1;
    uint32_t RESERVED11                     : 3;
    __IO uint32_t DMA1                      : 1;
    __IO uint32_t DMA2                      : 1;
    __IO uint32_t FCM                       : 1;
    __IO uint32_t AOS                       : 1;
    uint32_t RESERVED18                     : 2;
    __IO uint32_t AES                       : 1;
    __IO uint32_t HASH                      : 1;
    __IO uint32_t TRNG                      : 1;
    __IO uint32_t CRC                       : 1;
    __IO uint32_t DCU1                      : 1;
    __IO uint32_t DCU2                      : 1;
    __IO uint32_t DCU3                      : 1;
    __IO uint32_t DCU4                      : 1;
    uint32_t RESERVED28                     : 3;
    __IO uint32_t KEY                       : 1;
} stc_mstp_fcg0_field_t;

typedef struct
{
    __IO uint32_t CAN                       : 1;
    uint32_t RESERVED1                      : 2;
    __IO uint32_t QSPI                      : 1;
    __IO uint32_t IIC1                      : 1;
    __IO uint32_t IIC2                      : 1;
    __IO uint32_t IIC3                      : 1;
    uint32_t RESERVED7                      : 1;
    __IO uint32_t USBFS                     : 1;
    uint32_t RESERVED9                      : 1;
    __IO uint32_t SDIOC1                    : 1;
    __IO uint32_t SDIOC2                    : 1;
    __IO uint32_t I2S1                      : 1;
    __IO uint32_t I2S2                      : 1;
    __IO uint32_t I2S3                      : 1;
    __IO uint32_t I2S4                      : 1;
    __IO uint32_t SPI1                      : 1;
    __IO uint32_t SPI2                      : 1;
    __IO uint32_t SPI3                      : 1;
    __IO uint32_t SPI4                      : 1;
    uint32_t RESERVED20                     : 4;
    __IO uint32_t USART1                    : 1;
    __IO uint32_t USART2                    : 1;
    __IO uint32_t USART3                    : 1;
    __IO uint32_t USART4                    : 1;
    uint32_t RESERVED28                     : 4;
} stc_mstp_fcg1_field_t;

typedef struct
{
    __IO uint32_t TIMER0_1                  : 1;
    __IO uint32_t TIMER0_2                  : 1;
    __IO uint32_t TIMERA_1                  : 1;
    __IO uint32_t TIMERA_2                  : 1;
    __IO uint32_t TIMERA_3                  : 1;
    __IO uint32_t TIMERA_4                  : 1;
    __IO uint32_t TIMERA_5                  : 1;
    __IO uint32_t TIMERA_6                  : 1;
    __IO uint32_t TIMER4_1                  : 1;
    __IO uint32_t TIMER4_2                  : 1;
    __IO uint32_t TIMER4_3                  : 1;
    uint32_t RESERVED11                     : 4;
    __IO uint32_t EMB                       : 1;
    __IO uint32_t TIMER6_1                  : 1;
    __IO uint32_t TIMER6_2                  : 1;
    __IO uint32_t TIMER6_3                  : 1;
    uint32_t RESERVED19                     :13;
} stc_mstp_fcg2_field_t;

typedef struct
{
    __IO uint32_t ADC1                      : 1;
    __IO uint32_t ADC2                      : 1;
    uint32_t RESERVED2                      : 6;
    __IO uint32_t CMP                       : 1;
    uint32_t RESERVED9                      : 3;
    __IO uint32_t OTS                       : 1;
    uint32_t RESERVED13                     :19;
} stc_mstp_fcg3_field_t;

typedef struct
{
    __IO uint32_t PRT0                      : 1;
    uint32_t RESERVED1                      :15;
    __IO uint32_t FCG0PCWE                  :16;
} stc_mstp_fcg0pc_field_t;

typedef struct
{
    __IO uint16_t OTSST                     : 1;
    __IO uint16_t OTSCK                     : 1;
    __IO uint16_t OTSIE                     : 1;
    __IO uint16_t TSSTP                     : 1;
    uint16_t RESERVED4                      :12;
} stc_ots_ctl_field_t;

typedef struct
{
    __IO uint32_t TSOFS                     : 8;
    __IO uint32_t TSSLP                     :24;
} stc_ots_lpr_field_t;

typedef struct
{
    __IO uint32_t DFB                       : 1;
    __IO uint32_t SOFEN                     : 1;
    uint32_t RESERVED2                      :30;
} stc_peric_usbfs_syctlreg_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 1;
    __IO uint32_t SELMMC1                   : 1;
    uint32_t RESERVED2                      : 1;
    __IO uint32_t SELMMC2                   : 1;
    uint32_t RESERVED4                      :28;
} stc_peric_sdioc_syctlreg_field_t;

typedef struct
{
    __IO uint16_t PIN00                     : 1;
    __IO uint16_t PIN01                     : 1;
    __IO uint16_t PIN02                     : 1;
    __IO uint16_t PIN03                     : 1;
    __IO uint16_t PIN04                     : 1;
    __IO uint16_t PIN05                     : 1;
    __IO uint16_t PIN06                     : 1;
    __IO uint16_t PIN07                     : 1;
    __IO uint16_t PIN08                     : 1;
    __IO uint16_t PIN09                     : 1;
    __IO uint16_t PIN10                     : 1;
    __IO uint16_t PIN11                     : 1;
    __IO uint16_t PIN12                     : 1;
    __IO uint16_t PIN13                     : 1;
    __IO uint16_t PIN14                     : 1;
    __IO uint16_t PIN15                     : 1;
} stc_port_pidr_field_t;

typedef struct
{
    __IO uint16_t POUT00                    : 1;
    __IO uint16_t POUT01                    : 1;
    __IO uint16_t POUT02                    : 1;
    __IO uint16_t POUT03                    : 1;
    __IO uint16_t POUT04                    : 1;
    __IO uint16_t POUT05                    : 1;
    __IO uint16_t POUT06                    : 1;
    __IO uint16_t POUT07                    : 1;
    __IO uint16_t POUT08                    : 1;
    __IO uint16_t POUT09                    : 1;
    __IO uint16_t POUT10                    : 1;
    __IO uint16_t POUT11                    : 1;
    __IO uint16_t POUT12                    : 1;
    __IO uint16_t POUT13                    : 1;
    __IO uint16_t POUT14                    : 1;
    __IO uint16_t POUT15                    : 1;
} stc_port_podr_field_t;

typedef struct
{
    __IO uint16_t POUTE00                   : 1;
    __IO uint16_t POUTE01                   : 1;
    __IO uint16_t POUTE02                   : 1;
    __IO uint16_t POUTE03                   : 1;
    __IO uint16_t POUTE04                   : 1;
    __IO uint16_t POUTE05                   : 1;
    __IO uint16_t POUTE06                   : 1;
    __IO uint16_t POUTE07                   : 1;
    __IO uint16_t POUTE08                   : 1;
    __IO uint16_t POUTE09                   : 1;
    __IO uint16_t POUTE10                   : 1;
    __IO uint16_t POUTE11                   : 1;
    __IO uint16_t POUTE12                   : 1;
    __IO uint16_t POUTE13                   : 1;
    __IO uint16_t POUTE14                   : 1;
    __IO uint16_t POUTE15                   : 1;
} stc_port_poer_field_t;

typedef struct
{
    __IO uint16_t POS00                     : 1;
    __IO uint16_t POS01                     : 1;
    __IO uint16_t POS02                     : 1;
    __IO uint16_t POS03                     : 1;
    __IO uint16_t POS04                     : 1;
    __IO uint16_t POS05                     : 1;
    __IO uint16_t POS06                     : 1;
    __IO uint16_t POS07                     : 1;
    __IO uint16_t POS08                     : 1;
    __IO uint16_t POS09                     : 1;
    __IO uint16_t POS10                     : 1;
    __IO uint16_t POS11                     : 1;
    __IO uint16_t POS12                     : 1;
    __IO uint16_t POS13                     : 1;
    __IO uint16_t POS14                     : 1;
    __IO uint16_t POS15                     : 1;
} stc_port_posr_field_t;

typedef struct
{
    __IO uint16_t POR00                     : 1;
    __IO uint16_t POR01                     : 1;
    __IO uint16_t POR02                     : 1;
    __IO uint16_t POR03                     : 1;
    __IO uint16_t POR04                     : 1;
    __IO uint16_t POR05                     : 1;
    __IO uint16_t POR06                     : 1;
    __IO uint16_t POR07                     : 1;
    __IO uint16_t POR08                     : 1;
    __IO uint16_t POR09                     : 1;
    __IO uint16_t POR10                     : 1;
    __IO uint16_t POR11                     : 1;
    __IO uint16_t POR12                     : 1;
    __IO uint16_t POR13                     : 1;
    __IO uint16_t POR14                     : 1;
    __IO uint16_t POR15                     : 1;
} stc_port_porr_field_t;

typedef struct
{
    __IO uint16_t POT00                     : 1;
    __IO uint16_t POT01                     : 1;
    __IO uint16_t POT02                     : 1;
    __IO uint16_t POT03                     : 1;
    __IO uint16_t POT04                     : 1;
    __IO uint16_t POT05                     : 1;
    __IO uint16_t POT06                     : 1;
    __IO uint16_t POT07                     : 1;
    __IO uint16_t POT08                     : 1;
    __IO uint16_t POT09                     : 1;
    __IO uint16_t POT10                     : 1;
    __IO uint16_t POT11                     : 1;
    __IO uint16_t POT12                     : 1;
    __IO uint16_t POT13                     : 1;
    __IO uint16_t POT14                     : 1;
    __IO uint16_t POT15                     : 1;
} stc_port_potr_field_t;

typedef struct
{
    __IO uint16_t PIN00                     : 1;
    __IO uint16_t PIN01                     : 1;
    __IO uint16_t PIN02                     : 1;
    uint16_t RESERVED3                      :13;
} stc_port_pidrh_field_t;

typedef struct
{
    __IO uint16_t POUT00                    : 1;
    __IO uint16_t POUT01                    : 1;
    __IO uint16_t POUT02                    : 1;
    uint16_t RESERVED3                      :13;
} stc_port_podrh_field_t;

typedef struct
{
    __IO uint16_t POUTE00                   : 1;
    __IO uint16_t POUTE01                   : 1;
    __IO uint16_t POUTE02                   : 1;
    uint16_t RESERVED3                      :13;
} stc_port_poerh_field_t;

typedef struct
{
    __IO uint16_t POS00                     : 1;
    __IO uint16_t POS01                     : 1;
    __IO uint16_t POS02                     : 1;
    uint16_t RESERVED3                      :13;
} stc_port_posrh_field_t;

typedef struct
{
    __IO uint16_t POR00                     : 1;
    __IO uint16_t POR01                     : 1;
    __IO uint16_t POR02                     : 1;
    uint16_t RESERVED3                      :13;
} stc_port_porrh_field_t;

typedef struct
{
    __IO uint16_t POT00                     : 1;
    __IO uint16_t POT01                     : 1;
    __IO uint16_t POT02                     : 1;
    uint16_t RESERVED3                      :13;
} stc_port_potrh_field_t;

typedef struct
{
    __IO uint16_t SPFE                      : 5;
    uint16_t RESERVED5                      :11;
} stc_port_pspcr_field_t;

typedef struct
{
    __IO uint16_t BFSEL                     : 4;
    uint16_t RESERVED4                      :10;
    __IO uint16_t RDWT                      : 2;
} stc_port_pccr_field_t;

typedef struct
{
    __IO uint16_t PINAE                     : 6;
    uint16_t RESERVED6                      :10;
} stc_port_pinaer_field_t;

typedef struct
{
    __IO uint16_t WE                        : 1;
    uint16_t RESERVED1                      : 7;
    __IO uint16_t WP                        : 8;
} stc_port_pwpr_field_t;

typedef struct
{
    __IO uint16_t POUT                      : 1;
    __IO uint16_t POUTE                     : 1;
    __IO uint16_t NOD                       : 1;
    uint16_t RESERVED3                      : 1;
    __IO uint16_t DRV                       : 2;
    __IO uint16_t PUU                       : 1;
    uint16_t RESERVED7                      : 1;
    __IO uint16_t PIN                       : 1;
    __IO uint16_t INVE                      : 1;
    uint16_t RESERVED10                     : 2;
    __IO uint16_t INTE                      : 1;
    uint16_t RESERVED13                     : 1;
    __IO uint16_t LTE                       : 1;
    __IO uint16_t DDIS                      : 1;
} stc_port_pcr_field_t;

typedef struct
{
    __IO uint16_t FSEL                      : 6;
    uint16_t RESERVED6                      : 2;
    __IO uint16_t BFE                       : 1;
    uint16_t RESERVED9                      : 7;
} stc_port_pfsr_field_t;

typedef struct
{
    __IO uint32_t MDSEL                     : 3;
    __IO uint32_t PFE                       : 1;
    __IO uint32_t PFSAE                     : 1;
    __IO uint32_t DCOME                     : 1;
    __IO uint32_t XIPE                      : 1;
    __IO uint32_t SPIMD3                    : 1;
    __IO uint32_t IPRSL                     : 2;
    __IO uint32_t APRSL                     : 2;
    __IO uint32_t DPRSL                     : 2;
    uint32_t RESERVED14                     : 2;
    __IO uint32_t DIV                       : 6;
    uint32_t RESERVED22                     :10;
} stc_qspi_cr_field_t;

typedef struct
{
    __IO uint32_t SSHW                      : 4;
    __IO uint32_t SSNW                      : 2;
    uint32_t RESERVED6                      :26;
} stc_qspi_cscr_field_t;

typedef struct
{
    __IO uint32_t AWSL                      : 2;
    __IO uint32_t FOUR_BIC                  : 1;
    uint32_t RESERVED3                      : 1;
    __IO uint32_t SSNHD                     : 1;
    __IO uint32_t SSNLD                     : 1;
    __IO uint32_t WPOL                      : 1;
    uint32_t RESERVED7                      : 1;
    __IO uint32_t DMCYCN                    : 4;
    uint32_t RESERVED12                     : 3;
    __IO uint32_t DUTY                      : 1;
    uint32_t RESERVED16                     :16;
} stc_qspi_fcr_field_t;

typedef struct
{
    __IO uint32_t BUSY                      : 1;
    uint32_t RESERVED1                      : 5;
    __IO uint32_t XIPF                      : 1;
    __IO uint32_t RAER                      : 1;
    __IO uint32_t PFNUM                     : 5;
    uint32_t RESERVED13                     : 1;
    __IO uint32_t PFFUL                     : 1;
    __IO uint32_t PFAN                      : 1;
    uint32_t RESERVED16                     :16;
} stc_qspi_sr_field_t;

typedef struct
{
    __IO uint32_t DCOM                      : 8;
    uint32_t RESERVED8                      :24;
} stc_qspi_dcom_field_t;

typedef struct
{
    __IO uint32_t RIC                       : 8;
    uint32_t RESERVED8                      :24;
} stc_qspi_ccmd_field_t;

typedef struct
{
    __IO uint32_t XIPMC                     : 8;
    uint32_t RESERVED8                      :24;
} stc_qspi_xcmd_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 7;
    __IO uint32_t RAERCLR                   : 1;
    uint32_t RESERVED8                      :24;
} stc_qspi_sr2_field_t;

typedef struct
{
    uint32_t RESERVED0                      :26;
    __IO uint32_t EXADR                     : 6;
} stc_qspi_exar_field_t;

typedef struct
{
    __IO uint32_t RESET                     : 1;
    uint32_t RESERVED1                      :31;
} stc_rtc_cr0_field_t;

typedef struct
{
    __IO uint32_t PRDS                      : 3;
    __IO uint32_t AMPM                      : 1;
    __IO uint32_t ALMFCLR                   : 1;
    __IO uint32_t ONEHZOE                   : 1;
    __IO uint32_t ONEHZSEL                  : 1;
    __IO uint32_t START                     : 1;
    uint32_t RESERVED8                      :24;
} stc_rtc_cr1_field_t;

typedef struct
{
    __IO uint32_t RWREQ                     : 1;
    __IO uint32_t RWEN                      : 1;
    uint32_t RESERVED2                      : 1;
    __IO uint32_t ALMF                      : 1;
    uint32_t RESERVED4                      : 1;
    __IO uint32_t PRDIE                     : 1;
    __IO uint32_t ALMIE                     : 1;
    __IO uint32_t ALME                      : 1;
    uint32_t RESERVED8                      :24;
} stc_rtc_cr2_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 4;
    __IO uint32_t LRCEN                     : 1;
    uint32_t RESERVED5                      : 2;
    __IO uint32_t RCKSEL                    : 1;
    uint32_t RESERVED8                      :24;
} stc_rtc_cr3_field_t;

typedef struct
{
    __IO uint32_t SECU                      : 4;
    __IO uint32_t SECD                      : 3;
    uint32_t RESERVED7                      :25;
} stc_rtc_sec_field_t;

typedef struct
{
    __IO uint32_t MINU                      : 4;
    __IO uint32_t MIND                      : 3;
    uint32_t RESERVED7                      :25;
} stc_rtc_min_field_t;

typedef struct
{
    __IO uint32_t HOURU                     : 4;
    __IO uint32_t HOURD                     : 2;
    uint32_t RESERVED6                      :26;
} stc_rtc_hour_field_t;

typedef struct
{
    __IO uint32_t WEEK                      : 3;
    uint32_t RESERVED3                      :29;
} stc_rtc_week_field_t;

typedef struct
{
    __IO uint32_t DAYU                      : 4;
    __IO uint32_t DAYD                      : 2;
    uint32_t RESERVED6                      :26;
} stc_rtc_day_field_t;

typedef struct
{
    __IO uint32_t MON                       : 5;
    uint32_t RESERVED5                      :27;
} stc_rtc_mon_field_t;

typedef struct
{
    __IO uint32_t YEARU                     : 4;
    __IO uint32_t YEARD                     : 4;
    uint32_t RESERVED8                      :24;
} stc_rtc_year_field_t;

typedef struct
{
    __IO uint32_t ALMMINU                   : 4;
    __IO uint32_t ALMMIND                   : 3;
    uint32_t RESERVED7                      :25;
} stc_rtc_almmin_field_t;

typedef struct
{
    __IO uint32_t ALMHOURU                  : 4;
    __IO uint32_t ALMHOURD                  : 2;
    uint32_t RESERVED6                      :26;
} stc_rtc_almhour_field_t;

typedef struct
{
    __IO uint32_t ALMWEEK                   : 7;
    uint32_t RESERVED7                      :25;
} stc_rtc_almweek_field_t;

typedef struct
{
    __IO uint32_t COMP8                     : 1;
    uint32_t RESERVED1                      : 6;
    __IO uint32_t COMPEN                    : 1;
    uint32_t RESERVED8                      :24;
} stc_rtc_errcrh_field_t;

typedef struct
{
    __IO uint32_t COMP                      : 8;
    uint32_t RESERVED8                      :24;
} stc_rtc_errcrl_field_t;

typedef struct
{
    __IO uint16_t TBS                       :12;
    uint16_t RESERVED12                     : 4;
} stc_sdioc_blksize_field_t;

typedef struct
{
    uint16_t RESERVED0                      : 1;
    __IO uint16_t BCE                       : 1;
    __IO uint16_t ATCEN                     : 2;
    __IO uint16_t DDIR                      : 1;
    __IO uint16_t MULB                      : 1;
    uint16_t RESERVED6                      :10;
} stc_sdioc_transmode_field_t;

typedef struct
{
    __IO uint16_t RESTYP                    : 2;
    uint16_t RESERVED2                      : 1;
    __IO uint16_t CCE                       : 1;
    __IO uint16_t ICE                       : 1;
    __IO uint16_t DAT                       : 1;
    __IO uint16_t TYP                       : 2;
    __IO uint16_t IDX                       : 6;
    uint16_t RESERVED14                     : 2;
} stc_sdioc_cmd_field_t;

typedef struct
{
    __IO uint32_t CIC                       : 1;
    __IO uint32_t CID                       : 1;
    __IO uint32_t DA                        : 1;
    uint32_t RESERVED3                      : 5;
    __IO uint32_t WTA                       : 1;
    __IO uint32_t RTA                       : 1;
    __IO uint32_t BWE                       : 1;
    __IO uint32_t BRE                       : 1;
    uint32_t RESERVED12                     : 4;
    __IO uint32_t CIN                       : 1;
    __IO uint32_t CSS                       : 1;
    __IO uint32_t CDL                       : 1;
    __IO uint32_t WPL                       : 1;
    __IO uint32_t DATL                      : 4;
    __IO uint32_t CMDL                      : 1;
    uint32_t RESERVED25                     : 7;
} stc_sdioc_pstat_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 1;
    __IO uint8_t DW                         : 1;
    __IO uint8_t HSEN                       : 1;
    uint8_t RESERVED3                       : 2;
    __IO uint8_t EXDW                       : 1;
    __IO uint8_t CDTL                       : 1;
    __IO uint8_t CDSS                       : 1;
} stc_sdioc_hostcon_field_t;

typedef struct
{
    __IO uint8_t PWON                       : 1;
    uint8_t RESERVED1                       : 7;
} stc_sdioc_pwrcon_field_t;

typedef struct
{
    __IO uint8_t SABGR                      : 1;
    __IO uint8_t CR                         : 1;
    __IO uint8_t RWC                        : 1;
    __IO uint8_t IABG                       : 1;
    uint8_t RESERVED4                       : 4;
} stc_sdioc_blkgpcon_field_t;

typedef struct
{
    __IO uint16_t ICE                       : 1;
    uint16_t RESERVED1                      : 1;
    __IO uint16_t CE                        : 1;
    uint16_t RESERVED3                      : 5;
    __IO uint16_t FS                        : 8;
} stc_sdioc_clkcon_field_t;

typedef struct
{
    __IO uint8_t DTO                        : 4;
    uint8_t RESERVED4                       : 4;
} stc_sdioc_toutcon_field_t;

typedef struct
{
    __IO uint8_t RSTA                       : 1;
    __IO uint8_t RSTC                       : 1;
    __IO uint8_t RSTD                       : 1;
    uint8_t RESERVED3                       : 5;
} stc_sdioc_sftrst_field_t;

typedef struct
{
    __IO uint16_t CC                        : 1;
    __IO uint16_t TC                        : 1;
    __IO uint16_t BGE                       : 1;
    uint16_t RESERVED3                      : 1;
    __IO uint16_t BWR                       : 1;
    __IO uint16_t BRR                       : 1;
    __IO uint16_t CIST                      : 1;
    __IO uint16_t CRM                       : 1;
    __IO uint16_t CINT                      : 1;
    uint16_t RESERVED9                      : 6;
    __IO uint16_t EI                        : 1;
} stc_sdioc_norintst_field_t;

typedef struct
{
    __IO uint16_t CTOE                      : 1;
    __IO uint16_t CCE                       : 1;
    __IO uint16_t CEBE                      : 1;
    __IO uint16_t CIE                       : 1;
    __IO uint16_t DTOE                      : 1;
    __IO uint16_t DCE                       : 1;
    __IO uint16_t DEBE                      : 1;
    uint16_t RESERVED7                      : 1;
    __IO uint16_t ACE                       : 1;
    uint16_t RESERVED9                      : 7;
} stc_sdioc_errintst_field_t;

typedef struct
{
    __IO uint16_t CCEN                      : 1;
    __IO uint16_t TCEN                      : 1;
    __IO uint16_t BGEEN                     : 1;
    uint16_t RESERVED3                      : 1;
    __IO uint16_t BWREN                     : 1;
    __IO uint16_t BRREN                     : 1;
    __IO uint16_t CISTEN                    : 1;
    __IO uint16_t CRMEN                     : 1;
    __IO uint16_t CINTEN                    : 1;
    uint16_t RESERVED9                      : 7;
} stc_sdioc_norintsten_field_t;

typedef struct
{
    __IO uint16_t CTOEEN                    : 1;
    __IO uint16_t CCEEN                     : 1;
    __IO uint16_t CEBEEN                    : 1;
    __IO uint16_t CIEEN                     : 1;
    __IO uint16_t DTOEEN                    : 1;
    __IO uint16_t DCEEN                     : 1;
    __IO uint16_t DEBEEN                    : 1;
    uint16_t RESERVED7                      : 1;
    __IO uint16_t ACEEN                     : 1;
    uint16_t RESERVED9                      : 7;
} stc_sdioc_errintsten_field_t;

typedef struct
{
    __IO uint16_t CCSEN                     : 1;
    __IO uint16_t TCSEN                     : 1;
    __IO uint16_t BGESEN                    : 1;
    uint16_t RESERVED3                      : 1;
    __IO uint16_t BWRSEN                    : 1;
    __IO uint16_t BRRSEN                    : 1;
    __IO uint16_t CISTSEN                   : 1;
    __IO uint16_t CRMSEN                    : 1;
    __IO uint16_t CINTSEN                   : 1;
    uint16_t RESERVED9                      : 7;
} stc_sdioc_norintsgen_field_t;

typedef struct
{
    __IO uint16_t CTOESEN                   : 1;
    __IO uint16_t CCESEN                    : 1;
    __IO uint16_t CEBESEN                   : 1;
    __IO uint16_t CIESEN                    : 1;
    __IO uint16_t DTOESEN                   : 1;
    __IO uint16_t DCESEN                    : 1;
    __IO uint16_t DEBESEN                   : 1;
    uint16_t RESERVED7                      : 1;
    __IO uint16_t ACESEN                    : 1;
    uint16_t RESERVED9                      : 7;
} stc_sdioc_errintsgen_field_t;

typedef struct
{
    __IO uint16_t NE                        : 1;
    __IO uint16_t TOE                       : 1;
    __IO uint16_t CE                        : 1;
    __IO uint16_t EBE                       : 1;
    __IO uint16_t IE                        : 1;
    uint16_t RESERVED5                      : 2;
    __IO uint16_t CMDE                      : 1;
    uint16_t RESERVED8                      : 8;
} stc_sdioc_atcerrst_field_t;

typedef struct
{
    __IO uint16_t FNE                       : 1;
    __IO uint16_t FTOE                      : 1;
    __IO uint16_t FCE                       : 1;
    __IO uint16_t FEBE                      : 1;
    __IO uint16_t FIE                       : 1;
    uint16_t RESERVED5                      : 2;
    __IO uint16_t FCMDE                     : 1;
    uint16_t RESERVED8                      : 8;
} stc_sdioc_fea_field_t;

typedef struct
{
    __IO uint16_t FCTOE                     : 1;
    __IO uint16_t FCCE                      : 1;
    __IO uint16_t FCEBE                     : 1;
    __IO uint16_t FCIE                      : 1;
    __IO uint16_t FDTOE                     : 1;
    __IO uint16_t FDCE                      : 1;
    __IO uint16_t FDEBE                     : 1;
    uint16_t RESERVED7                      : 1;
    __IO uint16_t FACE                      : 1;
    uint16_t RESERVED9                      : 7;
} stc_sdioc_fee_field_t;

typedef struct
{
    __IO uint32_t SPIMDS                    : 1;
    __IO uint32_t TXMDS                     : 1;
    uint32_t RESERVED2                      : 1;
    __IO uint32_t MSTR                      : 1;
    __IO uint32_t SPLPBK                    : 1;
    __IO uint32_t SPLPBK2                   : 1;
    __IO uint32_t SPE                       : 1;
    __IO uint32_t CSUSPE                    : 1;
    __IO uint32_t EIE                       : 1;
    __IO uint32_t TXIE                      : 1;
    __IO uint32_t RXIE                      : 1;
    __IO uint32_t IDIE                      : 1;
    __IO uint32_t MODFE                     : 1;
    __IO uint32_t PATE                      : 1;
    __IO uint32_t PAOE                      : 1;
    __IO uint32_t PAE                       : 1;
    uint32_t RESERVED16                     :16;
} stc_spi_cr1_field_t;

typedef struct
{
    __IO uint32_t FTHLV                     : 2;
    uint32_t RESERVED2                      : 4;
    __IO uint32_t SPRDTD                    : 1;
    uint32_t RESERVED7                      : 1;
    __IO uint32_t SS0PV                     : 1;
    __IO uint32_t SS1PV                     : 1;
    __IO uint32_t SS2PV                     : 1;
    __IO uint32_t SS3PV                     : 1;
    uint32_t RESERVED12                     : 8;
    __IO uint32_t MSSI                      : 3;
    uint32_t RESERVED23                     : 1;
    __IO uint32_t MSSDL                     : 3;
    uint32_t RESERVED27                     : 1;
    __IO uint32_t MIDI                      : 3;
    uint32_t RESERVED31                     : 1;
} stc_spi_cfg1_field_t;

typedef struct
{
    __IO uint32_t OVRERF                    : 1;
    __IO uint32_t IDLNF                     : 1;
    __IO uint32_t MODFERF                   : 1;
    __IO uint32_t PERF                      : 1;
    __IO uint32_t UDRERF                    : 1;
    __IO uint32_t TDEF                      : 1;
    uint32_t RESERVED6                      : 1;
    __IO uint32_t RDFF                      : 1;
    uint32_t RESERVED8                      :24;
} stc_spi_sr_field_t;

typedef struct
{
    __IO uint32_t CPHA                      : 1;
    __IO uint32_t CPOL                      : 1;
    __IO uint32_t MBR                       : 3;
    __IO uint32_t SSA                       : 3;
    __IO uint32_t DSIZE                     : 4;
    __IO uint32_t LSBF                      : 1;
    __IO uint32_t MIDIE                     : 1;
    __IO uint32_t MSSDLE                    : 1;
    __IO uint32_t MSSIE                     : 1;
    uint32_t RESERVED16                     :16;
} stc_spi_cfg2_field_t;

typedef struct
{
    __IO uint32_t SRAM12_RWT                : 3;
    uint32_t RESERVED3                      : 1;
    __IO uint32_t SRAM12_WWT                : 3;
    uint32_t RESERVED7                      : 1;
    __IO uint32_t SRAM3_RWT                 : 3;
    uint32_t RESERVED11                     : 1;
    __IO uint32_t SRAM3_WWT                 : 3;
    uint32_t RESERVED15                     : 1;
    __IO uint32_t SRAMH_RWT                 : 3;
    uint32_t RESERVED19                     : 1;
    __IO uint32_t SRAMH_WWT                 : 3;
    uint32_t RESERVED23                     : 1;
    __IO uint32_t SRAMR_RWT                 : 3;
    uint32_t RESERVED27                     : 1;
    __IO uint32_t SRAMR_WWT                 : 3;
    uint32_t RESERVED31                     : 1;
} stc_sramc_wtcr_field_t;

typedef struct
{
    __IO uint32_t WTPRC                     : 1;
    __IO uint32_t WTPRKW                    : 7;
    uint32_t RESERVED8                      :24;
} stc_sramc_wtpr_field_t;

typedef struct
{
    __IO uint32_t PYOAD                     : 1;
    uint32_t RESERVED1                      :15;
    __IO uint32_t ECCOAD                    : 1;
    uint32_t RESERVED17                     : 7;
    __IO uint32_t ECCMOD                    : 2;
    uint32_t RESERVED26                     : 6;
} stc_sramc_ckcr_field_t;

typedef struct
{
    __IO uint32_t CKPRC                     : 1;
    __IO uint32_t CKPRKW                    : 7;
    uint32_t RESERVED8                      :24;
} stc_sramc_ckpr_field_t;

typedef struct
{
    __IO uint32_t SRAM3_1ERR                : 1;
    __IO uint32_t SRAM3_2ERR                : 1;
    __IO uint32_t SRAM12_PYERR              : 1;
    __IO uint32_t SRAMH_PYERR               : 1;
    __IO uint32_t SRAMR_PYERR               : 1;
    uint32_t RESERVED5                      :27;
} stc_sramc_cksr_field_t;

typedef struct
{
    __IO uint32_t CNT                       :16;
    __IO uint32_t UDF                       : 1;
    __IO uint32_t REF                       : 1;
    uint32_t RESERVED18                     :14;
} stc_swdt_sr_field_t;

typedef struct
{
    __IO uint32_t RF                        :16;
    uint32_t RESERVED16                     :16;
} stc_swdt_rr_field_t;

typedef struct
{
    __IO uint16_t FLNWT                     : 1;
    __IO uint16_t CKSMRC                    : 1;
    uint16_t RESERVED2                      :13;
    __IO uint16_t STOP                      : 1;
} stc_sysreg_pwr_stpmcr_field_t;

typedef struct
{
    __IO uint16_t PERICKSEL                 : 4;
    uint16_t RESERVED4                      :12;
} stc_sysreg_cmu_pericksel_field_t;

typedef struct
{
    __IO uint16_t I2S1CKSEL                 : 4;
    __IO uint16_t I2S2CKSEL                 : 4;
    __IO uint16_t I2S3CKSEL                 : 4;
    __IO uint16_t I2S4CKSEL                 : 4;
} stc_sysreg_cmu_i2scksel_field_t;

typedef struct
{
    __IO uint32_t RAMPDC0                   : 1;
    __IO uint32_t RAMPDC1                   : 1;
    __IO uint32_t RAMPDC2                   : 1;
    __IO uint32_t RAMPDC3                   : 1;
    __IO uint32_t RAMPDC4                   : 1;
    __IO uint32_t RAMPDC5                   : 1;
    __IO uint32_t RAMPDC6                   : 1;
    __IO uint32_t RAMPDC7                   : 1;
    __IO uint32_t RAMPDC8                   : 1;
    uint32_t RESERVED9                      :23;
} stc_sysreg_pwr_rampc0_field_t;

typedef struct
{
    __IO uint32_t AESRDP                    : 1;
    __IO uint32_t AESWRP                    : 1;
    __IO uint32_t HASHRDP                   : 1;
    __IO uint32_t HASHWRP                   : 1;
    __IO uint32_t TRNGRDP                   : 1;
    __IO uint32_t TRNGWRP                   : 1;
    __IO uint32_t CRCRDP                    : 1;
    __IO uint32_t CRCWRP                    : 1;
    __IO uint32_t FMCRDP                    : 1;
    __IO uint32_t FMCWRP                    : 1;
    uint32_t RESERVED10                     : 2;
    __IO uint32_t WDTRDP                    : 1;
    __IO uint32_t WDTWRP                    : 1;
    __IO uint32_t SWDTRDP                   : 1;
    __IO uint32_t SWDTWRP                   : 1;
    __IO uint32_t BKSRAMRDP                 : 1;
    __IO uint32_t BKSRAMWRP                 : 1;
    __IO uint32_t RTCRDP                    : 1;
    __IO uint32_t RTCWRP                    : 1;
    __IO uint32_t DMPURDP                   : 1;
    __IO uint32_t DMPUWRP                   : 1;
    __IO uint32_t SRAMCRDP                  : 1;
    __IO uint32_t SRAMCWRP                  : 1;
    __IO uint32_t INTCRDP                   : 1;
    __IO uint32_t INTCWRP                   : 1;
    __IO uint32_t SYSCRDP                   : 1;
    __IO uint32_t SYSCWRP                   : 1;
    __IO uint32_t MSTPRDP                   : 1;
    __IO uint32_t MSTPWRP                   : 1;
    uint32_t RESERVED30                     : 1;
    __IO uint32_t BUSERRE                   : 1;
} stc_sysreg_mpu_ippr_field_t;

typedef struct
{
    __IO uint32_t PCLK0S                    : 3;
    uint32_t RESERVED3                      : 1;
    __IO uint32_t PCLK1S                    : 3;
    uint32_t RESERVED7                      : 1;
    __IO uint32_t PCLK2S                    : 3;
    uint32_t RESERVED11                     : 1;
    __IO uint32_t PCLK3S                    : 3;
    uint32_t RESERVED15                     : 1;
    __IO uint32_t PCLK4S                    : 3;
    uint32_t RESERVED19                     : 1;
    __IO uint32_t EXCKS                     : 3;
    uint32_t RESERVED23                     : 1;
    __IO uint32_t HCLKS                     : 3;
    uint32_t RESERVED27                     : 5;
} stc_sysreg_cmu_scfgr_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 4;
    __IO uint8_t USBCKS                     : 4;
} stc_sysreg_cmu_ufsckcfgr_field_t;

typedef struct
{
    __IO uint8_t CKSW                       : 3;
    uint8_t RESERVED3                       : 5;
} stc_sysreg_cmu_ckswr_field_t;

typedef struct
{
    __IO uint8_t MPLLOFF                    : 1;
    uint8_t RESERVED1                       : 7;
} stc_sysreg_cmu_pllcr_field_t;

typedef struct
{
    __IO uint8_t UPLLOFF                    : 1;
    uint8_t RESERVED1                       : 7;
} stc_sysreg_cmu_upllcr_field_t;

typedef struct
{
    __IO uint8_t XTALSTP                    : 1;
    uint8_t RESERVED1                       : 7;
} stc_sysreg_cmu_xtalcr_field_t;

typedef struct
{
    __IO uint8_t HRCSTP                     : 1;
    uint8_t RESERVED1                       : 7;
} stc_sysreg_cmu_hrccr_field_t;

typedef struct
{
    __IO uint8_t MRCSTP                     : 1;
    uint8_t RESERVED1                       : 7;
} stc_sysreg_cmu_mrccr_field_t;

typedef struct
{
    __IO uint8_t HRCSTBF                    : 1;
    uint8_t RESERVED1                       : 2;
    __IO uint8_t XTALSTBF                   : 1;
    uint8_t RESERVED4                       : 1;
    __IO uint8_t MPLLSTBF                   : 1;
    __IO uint8_t UPLLSTBF                   : 1;
    uint8_t RESERVED7                       : 1;
} stc_sysreg_cmu_oscstbsr_field_t;

typedef struct
{
    __IO uint8_t MCO1SEL                    : 4;
    __IO uint8_t MCO1DIV                    : 3;
    __IO uint8_t MCO1EN                     : 1;
} stc_sysreg_cmu_mco1cfgr_field_t;

typedef struct
{
    __IO uint8_t MCO2SEL                    : 4;
    __IO uint8_t MCO2DIV                    : 3;
    __IO uint8_t MCO2EN                     : 1;
} stc_sysreg_cmu_mco2cfgr_field_t;

typedef struct
{
    __IO uint8_t TPIUCKS                    : 2;
    uint8_t RESERVED2                       : 5;
    __IO uint8_t TPIUCKOE                   : 1;
} stc_sysreg_cmu_tpiuckcfgr_field_t;

typedef struct
{
    __IO uint8_t XTALSTDIE                  : 1;
    __IO uint8_t XTALSTDRE                  : 1;
    __IO uint8_t XTALSTDRIS                 : 1;
    uint8_t RESERVED3                       : 4;
    __IO uint8_t XTALSTDE                   : 1;
} stc_sysreg_cmu_xtalstdcr_field_t;

typedef struct
{
    __IO uint8_t XTALSTDF                   : 1;
    uint8_t RESERVED1                       : 7;
} stc_sysreg_cmu_xtalstdsr_field_t;

typedef struct
{
    __IO uint8_t XTALSTB                    : 4;
    uint8_t RESERVED4                       : 4;
} stc_sysreg_cmu_xtalstbcr_field_t;

typedef struct
{
    __IO uint16_t PORF                      : 1;
    __IO uint16_t PINRF                     : 1;
    __IO uint16_t BORF                      : 1;
    __IO uint16_t PVD1RF                    : 1;
    __IO uint16_t PVD2RF                    : 1;
    __IO uint16_t WDRF                      : 1;
    __IO uint16_t SWDRF                     : 1;
    __IO uint16_t PDRF                      : 1;
    __IO uint16_t SWRF                      : 1;
    __IO uint16_t MPUERF                    : 1;
    __IO uint16_t RAPERF                    : 1;
    __IO uint16_t RAECRF                    : 1;
    __IO uint16_t CKFERF                    : 1;
    __IO uint16_t XTALERF                   : 1;
    __IO uint16_t MULTIRF                   : 1;
    __IO uint16_t CLRF                      : 1;
} stc_sysreg_rmu_rstf0_field_t;

typedef struct
{
    __IO uint8_t PVD1NMIS                   : 1;
    uint8_t RESERVED1                       : 3;
    __IO uint8_t PVD2NMIS                   : 1;
    uint8_t RESERVED5                       : 3;
} stc_sysreg_pwr_pvdicr_field_t;

typedef struct
{
    __IO uint8_t PVD1MON                    : 1;
    __IO uint8_t PVD1DETFLG                 : 1;
    uint8_t RESERVED2                       : 2;
    __IO uint8_t PVD2MON                    : 1;
    __IO uint8_t PVD2DETFLG                 : 1;
    uint8_t RESERVED6                       : 2;
} stc_sysreg_pwr_pvddsr_field_t;

typedef struct
{
    __IO uint32_t MPLLM                     : 5;
    uint32_t RESERVED5                      : 2;
    __IO uint32_t PLLSRC                    : 1;
    __IO uint32_t MPLLN                     : 9;
    uint32_t RESERVED17                     : 3;
    __IO uint32_t MPLLR                     : 4;
    __IO uint32_t MPLLQ                     : 4;
    __IO uint32_t MPLLP                     : 4;
} stc_sysreg_cmu_pllcfgr_field_t;

typedef struct
{
    __IO uint32_t UPLLM                     : 5;
    uint32_t RESERVED5                      : 3;
    __IO uint32_t UPLLN                     : 9;
    uint32_t RESERVED17                     : 3;
    __IO uint32_t UPLLR                     : 4;
    __IO uint32_t UPLLQ                     : 4;
    __IO uint32_t UPLLP                     : 4;
} stc_sysreg_cmu_upllcfgr_field_t;

typedef struct
{
    __IO uint16_t FPRCB0                    : 1;
    __IO uint16_t FPRCB1                    : 1;
    __IO uint16_t FPRCB2                    : 1;
    __IO uint16_t FPRCB3                    : 1;
    uint16_t RESERVED4                      : 4;
    __IO uint16_t FPRCWE                    : 8;
} stc_sysreg_pwr_fprc_field_t;

typedef struct
{
    __IO uint8_t PDMDS                      : 2;
    __IO uint8_t VVDRSD                     : 1;
    __IO uint8_t RETRAMSD                   : 1;
    __IO uint8_t IORTN                      : 2;
    uint8_t RESERVED6                       : 1;
    __IO uint8_t PWDN                       : 1;
} stc_sysreg_pwr_pwrc0_field_t;

typedef struct
{
    __IO uint8_t VPLLSD                     : 1;
    __IO uint8_t VHRCSD                     : 1;
    uint8_t RESERVED2                       : 4;
    __IO uint8_t STPDAS                     : 2;
} stc_sysreg_pwr_pwrc1_field_t;

typedef struct
{
    __IO uint8_t DDAS                       : 4;
    __IO uint8_t DVS                        : 2;
    uint8_t RESERVED6                       : 2;
} stc_sysreg_pwr_pwrc2_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 2;
    __IO uint8_t PDTS                       : 1;
    uint8_t RESERVED3                       : 5;
} stc_sysreg_pwr_pwrc3_field_t;

typedef struct
{
    __IO uint8_t WKE00                      : 1;
    __IO uint8_t WKE01                      : 1;
    __IO uint8_t WKE02                      : 1;
    __IO uint8_t WKE03                      : 1;
    __IO uint8_t WKE10                      : 1;
    __IO uint8_t WKE11                      : 1;
    __IO uint8_t WKE12                      : 1;
    __IO uint8_t WKE13                      : 1;
} stc_sysreg_pwr_pdwke0_field_t;

typedef struct
{
    __IO uint8_t WKE20                      : 1;
    __IO uint8_t WKE21                      : 1;
    __IO uint8_t WKE22                      : 1;
    __IO uint8_t WKE23                      : 1;
    __IO uint8_t WKE30                      : 1;
    __IO uint8_t WKE31                      : 1;
    __IO uint8_t WKE32                      : 1;
    __IO uint8_t WKE33                      : 1;
} stc_sysreg_pwr_pdwke1_field_t;

typedef struct
{
    __IO uint8_t VD1WKE                     : 1;
    __IO uint8_t VD2WKE                     : 1;
    __IO uint8_t NMIWKE                     : 1;
    uint8_t RESERVED3                       : 1;
    __IO uint8_t RTCPRDWKE                  : 1;
    __IO uint8_t RTCALMWKE                  : 1;
    uint8_t RESERVED6                       : 1;
    __IO uint8_t WKTMWKE                    : 1;
} stc_sysreg_pwr_pdwke2_field_t;

typedef struct
{
    __IO uint8_t WK0EGS                     : 1;
    __IO uint8_t WK1EGS                     : 1;
    __IO uint8_t WK2EGS                     : 1;
    __IO uint8_t WK3EGS                     : 1;
    __IO uint8_t VD1EGS                     : 1;
    __IO uint8_t VD2EGS                     : 1;
    __IO uint8_t NMIEGS                     : 1;
    uint8_t RESERVED7                       : 1;
} stc_sysreg_pwr_pdwkes_field_t;

typedef struct
{
    __IO uint8_t PTWK0F                     : 1;
    __IO uint8_t PTWK1F                     : 1;
    __IO uint8_t PTWK2F                     : 1;
    __IO uint8_t PTWK3F                     : 1;
    __IO uint8_t VD1WKF                     : 1;
    __IO uint8_t VD2WKF                     : 1;
    __IO uint8_t NMIWKF                     : 1;
    uint8_t RESERVED7                       : 1;
} stc_sysreg_pwr_pdwkf0_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 4;
    __IO uint8_t RTCPRDWKF                  : 1;
    __IO uint8_t RTCALMWKF                  : 1;
    uint8_t RESERVED6                       : 1;
    __IO uint8_t WKTMWKF                    : 1;
} stc_sysreg_pwr_pdwkf1_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 7;
    __IO uint8_t ADBUFE                     : 1;
} stc_sysreg_pwr_pwcmr_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 4;
    __IO uint8_t XTALDRV                    : 2;
    __IO uint8_t XTALMS                     : 1;
    __IO uint8_t SUPDRV                     : 1;
} stc_sysreg_cmu_xtalcfgr_field_t;

typedef struct
{
    __IO uint8_t EXVCCINEN                  : 1;
    uint8_t RESERVED1                       : 4;
    __IO uint8_t PVD1EN                     : 1;
    __IO uint8_t PVD2EN                     : 1;
    uint8_t RESERVED7                       : 1;
} stc_sysreg_pwr_pvdcr0_field_t;

typedef struct
{
    __IO uint8_t PVD1IRE                    : 1;
    __IO uint8_t PVD1IRS                    : 1;
    __IO uint8_t PVD1CMPOE                  : 1;
    uint8_t RESERVED3                       : 1;
    __IO uint8_t PVD2IRE                    : 1;
    __IO uint8_t PVD2IRS                    : 1;
    __IO uint8_t PVD2CMPOE                  : 1;
    uint8_t RESERVED7                       : 1;
} stc_sysreg_pwr_pvdcr1_field_t;

typedef struct
{
    __IO uint8_t PVD1NFDIS                  : 1;
    __IO uint8_t PVD1NFCKS                  : 2;
    uint8_t RESERVED3                       : 1;
    __IO uint8_t PVD2NFDIS                  : 1;
    __IO uint8_t PVD2NFCKS                  : 2;
    uint8_t RESERVED7                       : 1;
} stc_sysreg_pwr_pvdfcr_field_t;

typedef struct
{
    __IO uint8_t PVD1LVL                    : 3;
    uint8_t RESERVED3                       : 1;
    __IO uint8_t PVD2LVL                    : 3;
    uint8_t RESERVED7                       : 1;
} stc_sysreg_pwr_pvdlcr_field_t;

typedef struct
{
    __IO uint8_t XTAL32STP                  : 1;
    uint8_t RESERVED1                       : 7;
} stc_sysreg_cmu_xtal32cr_field_t;

typedef struct
{
    __IO uint8_t XTAL32DRV                  : 3;
    uint8_t RESERVED3                       : 5;
} stc_sysreg_cmu_xtal32cfgr_field_t;

typedef struct
{
    __IO uint8_t XTAL32NF                   : 2;
    uint8_t RESERVED2                       : 6;
} stc_sysreg_cmu_xtal32nfr_field_t;

typedef struct
{
    __IO uint8_t LRCSTP                     : 1;
    uint8_t RESERVED1                       : 7;
} stc_sysreg_cmu_lrccr_field_t;

typedef struct
{
    uint8_t RESERVED0                       : 7;
    __IO uint8_t CSDIS                      : 1;
} stc_sysreg_pwr_xtal32cs_field_t;

typedef struct
{
    __IO uint32_t CNTA                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr0_cntar_field_t;

typedef struct
{
    __IO uint32_t CNTB                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr0_cntbr_field_t;

typedef struct
{
    __IO uint32_t CMPA                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr0_cmpar_field_t;

typedef struct
{
    __IO uint32_t CMPB                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr0_cmpbr_field_t;

typedef struct
{
    __IO uint32_t CSTA                      : 1;
    __IO uint32_t CAPMDA                    : 1;
    __IO uint32_t INTENA                    : 1;
    uint32_t RESERVED3                      : 1;
    __IO uint32_t CKDIVA                    : 4;
    __IO uint32_t SYNSA                     : 1;
    __IO uint32_t SYNCLKA                   : 1;
    __IO uint32_t ASYNCLKA                  : 1;
    uint32_t RESERVED11                     : 1;
    __IO uint32_t HSTAA                     : 1;
    __IO uint32_t HSTPA                     : 1;
    __IO uint32_t HCLEA                     : 1;
    __IO uint32_t HICPA                     : 1;
    __IO uint32_t CSTB                      : 1;
    __IO uint32_t CAPMDB                    : 1;
    __IO uint32_t INTENB                    : 1;
    uint32_t RESERVED19                     : 1;
    __IO uint32_t CKDIVB                    : 4;
    __IO uint32_t SYNSB                     : 1;
    __IO uint32_t SYNCLKB                   : 1;
    __IO uint32_t ASYNCLKB                  : 1;
    uint32_t RESERVED27                     : 1;
    __IO uint32_t HSTAB                     : 1;
    __IO uint32_t HSTPB                     : 1;
    __IO uint32_t HCLEB                     : 1;
    __IO uint32_t HICPB                     : 1;
} stc_tmr0_bconr_field_t;

typedef struct
{
    __IO uint32_t CMAF                      : 1;
    uint32_t RESERVED1                      :15;
    __IO uint32_t CMBF                      : 1;
    uint32_t RESERVED17                     :15;
} stc_tmr0_stflr_field_t;

typedef struct
{
    __IO uint16_t OCEH                      : 1;
    __IO uint16_t OCEL                      : 1;
    __IO uint16_t OCPH                      : 1;
    __IO uint16_t OCPL                      : 1;
    __IO uint16_t OCIEH                     : 1;
    __IO uint16_t OCIEL                     : 1;
    __IO uint16_t OCFH                      : 1;
    __IO uint16_t OCFL                      : 1;
    uint16_t RESERVED8                      : 8;
} stc_tmr4_ocsr_field_t;

typedef struct
{
    __IO uint16_t CHBUFEN                   : 2;
    __IO uint16_t CLBUFEN                   : 2;
    __IO uint16_t MHBUFEN                   : 2;
    __IO uint16_t MLBUFEN                   : 2;
    __IO uint16_t LMCH                      : 1;
    __IO uint16_t LMCL                      : 1;
    __IO uint16_t LMMH                      : 1;
    __IO uint16_t LMML                      : 1;
    __IO uint16_t MCECH                     : 1;
    __IO uint16_t MCECL                     : 1;
    uint16_t RESERVED14                     : 2;
} stc_tmr4_ocer_field_t;

typedef struct
{
    __IO uint16_t OCFDCH                    : 1;
    __IO uint16_t OCFPKH                    : 1;
    __IO uint16_t OCFUCH                    : 1;
    __IO uint16_t OCFZRH                    : 1;
    __IO uint16_t OPDCH                     : 2;
    __IO uint16_t OPPKH                     : 2;
    __IO uint16_t OPUCH                     : 2;
    __IO uint16_t OPZRH                     : 2;
    __IO uint16_t OPNPKH                    : 2;
    __IO uint16_t OPNZRH                    : 2;
} stc_tmr4_ocmrh_field_t;

typedef struct
{
    __IO uint32_t OCFDCL                    : 1;
    __IO uint32_t OCFPKL                    : 1;
    __IO uint32_t OCFUCL                    : 1;
    __IO uint32_t OCFZRL                    : 1;
    __IO uint32_t OPDCL                     : 2;
    __IO uint32_t OPPKL                     : 2;
    __IO uint32_t OPUCL                     : 2;
    __IO uint32_t OPZRL                     : 2;
    __IO uint32_t OPNPKL                    : 2;
    __IO uint32_t OPNZRL                    : 2;
    __IO uint32_t EOPNDCL                   : 2;
    __IO uint32_t EOPNUCL                   : 2;
    __IO uint32_t EOPDCL                    : 2;
    __IO uint32_t EOPPKL                    : 2;
    __IO uint32_t EOPUCL                    : 2;
    __IO uint32_t EOPZRL                    : 2;
    __IO uint32_t EOPNPKL                   : 2;
    __IO uint32_t EOPNZRL                   : 2;
} stc_tmr4_ocmrl_field_t;

typedef struct
{
    __IO uint16_t CKDIV                     : 4;
    __IO uint16_t CLEAR                     : 1;
    __IO uint16_t MODE                      : 1;
    __IO uint16_t STOP                      : 1;
    __IO uint16_t BUFEN                     : 1;
    __IO uint16_t IRQPEN                    : 1;
    __IO uint16_t IRQPF                     : 1;
    uint16_t RESERVED10                     : 3;
    __IO uint16_t IRQZEN                    : 1;
    __IO uint16_t IRQZF                     : 1;
    __IO uint16_t ECKEN                     : 1;
} stc_tmr4_ccsr_field_t;

typedef struct
{
    __IO uint16_t ZIM                       : 4;
    __IO uint16_t PIM                       : 4;
    __IO uint16_t ZIC                       : 4;
    __IO uint16_t PIC                       : 4;
} stc_tmr4_cvpr_field_t;

typedef struct
{
    __IO uint16_t DIVCK                     : 4;
    __IO uint16_t PWMMD                     : 2;
    __IO uint16_t LVLS                      : 2;
    uint16_t RESERVED8                      : 8;
} stc_tmr4_pocr_field_t;

typedef struct
{
    __IO uint16_t RTIDU                     : 1;
    __IO uint16_t RTIDV                     : 1;
    __IO uint16_t RTIDW                     : 1;
    uint16_t RESERVED3                      : 1;
    __IO uint16_t RTIFU                     : 1;
    __IO uint16_t RTICU                     : 1;
    __IO uint16_t RTEU                      : 1;
    __IO uint16_t RTSU                      : 1;
    __IO uint16_t RTIFV                     : 1;
    __IO uint16_t RTICV                     : 1;
    __IO uint16_t RTEV                      : 1;
    __IO uint16_t RTSV                      : 1;
    __IO uint16_t RTIFW                     : 1;
    __IO uint16_t RTICW                     : 1;
    __IO uint16_t RTEW                      : 1;
    __IO uint16_t RTSW                      : 1;
} stc_tmr4_rcsr_field_t;

typedef struct
{
    __IO uint16_t BUFEN                     : 2;
    __IO uint16_t EVTOS                     : 3;
    __IO uint16_t LMC                       : 1;
    uint16_t RESERVED6                      : 2;
    __IO uint16_t EVTMS                     : 1;
    __IO uint16_t EVTDS                     : 1;
    uint16_t RESERVED10                     : 2;
    __IO uint16_t DEN                       : 1;
    __IO uint16_t PEN                       : 1;
    __IO uint16_t UEN                       : 1;
    __IO uint16_t ZEN                       : 1;
} stc_tmr4_scsr_field_t;

typedef struct
{
    __IO uint16_t AMC                       : 4;
    uint16_t RESERVED4                      : 2;
    __IO uint16_t MZCE                      : 1;
    __IO uint16_t MPCE                      : 1;
    uint16_t RESERVED8                      : 8;
} stc_tmr4_scmr_field_t;

typedef struct
{
    uint16_t RESERVED0                      : 7;
    __IO uint16_t HOLD                      : 1;
    uint16_t RESERVED8                      : 8;
} stc_tmr4_ecsr_field_t;

typedef struct
{
    __IO uint16_t EMBVAL                    : 2;
    uint16_t RESERVED2                      :14;
} stc_tmr4_cr_ecer1_field_t;

typedef struct
{
    __IO uint16_t EMBVAL                    : 2;
    uint16_t RESERVED2                      :14;
} stc_tmr4_cr_ecer2_field_t;

typedef struct
{
    __IO uint16_t EMBVAL                    : 2;
    uint16_t RESERVED2                      :14;
} stc_tmr4_cr_ecer3_field_t;

typedef struct
{
    __IO uint32_t CNT                       :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_cnter_field_t;

typedef struct
{
    __IO uint32_t PERA                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_perar_field_t;

typedef struct
{
    __IO uint32_t PERB                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_perbr_field_t;

typedef struct
{
    __IO uint32_t PERC                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_percr_field_t;

typedef struct
{
    __IO uint32_t GCMA                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_gcmar_field_t;

typedef struct
{
    __IO uint32_t GCMB                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_gcmbr_field_t;

typedef struct
{
    __IO uint32_t GCMC                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_gcmcr_field_t;

typedef struct
{
    __IO uint32_t GCMD                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_gcmdr_field_t;

typedef struct
{
    __IO uint32_t GCME                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_gcmer_field_t;

typedef struct
{
    __IO uint32_t GCMF                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_gcmfr_field_t;

typedef struct
{
    __IO uint32_t SCMA                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_scmar_field_t;

typedef struct
{
    __IO uint32_t SCMB                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_scmbr_field_t;

typedef struct
{
    __IO uint32_t SCMC                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_scmcr_field_t;

typedef struct
{
    __IO uint32_t SCMD                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_scmdr_field_t;

typedef struct
{
    __IO uint32_t SCME                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_scmer_field_t;

typedef struct
{
    __IO uint32_t SCMF                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_scmfr_field_t;

typedef struct
{
    __IO uint32_t DTUA                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_dtuar_field_t;

typedef struct
{
    __IO uint32_t DTDA                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_dtdar_field_t;

typedef struct
{
    __IO uint32_t DTUB                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_dtubr_field_t;

typedef struct
{
    __IO uint32_t DTDB                      :16;
    uint32_t RESERVED16                     :16;
} stc_tmr6_dtdbr_field_t;

typedef struct
{
    __IO uint32_t START                     : 1;
    __IO uint32_t MODE                      : 3;
    __IO uint32_t CKDIV                     : 3;
    uint32_t RESERVED7                      : 1;
    __IO uint32_t DIR                       : 1;
    uint32_t RESERVED9                      : 7;
    __IO uint32_t ZMSKREV                   : 1;
    __IO uint32_t ZMSKPOS                   : 1;
    __IO uint32_t ZMSKVAL                   : 2;
    uint32_t RESERVED20                     :12;
} stc_tmr6_gconr_field_t;

typedef struct
{
    __IO uint32_t INTENA                    : 1;
    __IO uint32_t INTENB                    : 1;
    __IO uint32_t INTENC                    : 1;
    __IO uint32_t INTEND                    : 1;
    __IO uint32_t INTENE                    : 1;
    __IO uint32_t INTENF                    : 1;
    __IO uint32_t INTENOVF                  : 1;
    __IO uint32_t INTENUDF                  : 1;
    __IO uint32_t INTENDTE                  : 1;
    uint32_t RESERVED9                      : 7;
    __IO uint32_t INTENSAU                  : 1;
    __IO uint32_t INTENSAD                  : 1;
    __IO uint32_t INTENSBU                  : 1;
    __IO uint32_t INTENSBD                  : 1;
    uint32_t RESERVED20                     :12;
} stc_tmr6_iconr_field_t;

typedef struct
{
    __IO uint32_t CAPMDA                    : 1;
    __IO uint32_t STACA                     : 1;
    __IO uint32_t STPCA                     : 1;
    __IO uint32_t STASTPSA                  : 1;
    __IO uint32_t CMPCA                     : 2;
    __IO uint32_t PERCA                     : 2;
    __IO uint32_t OUTENA                    : 1;
    uint32_t RESERVED9                      : 2;
    __IO uint32_t EMBVALA                   : 2;
    uint32_t RESERVED13                     : 3;
    __IO uint32_t CAPMDB                    : 1;
    __IO uint32_t STACB                     : 1;
    __IO uint32_t STPCB                     : 1;
    __IO uint32_t STASTPSB                  : 1;
    __IO uint32_t CMPCB                     : 2;
    __IO uint32_t PERCB                     : 2;
    __IO uint32_t OUTENB                    : 1;
    uint32_t RESERVED25                     : 2;
    __IO uint32_t EMBVALB                   : 2;
    uint32_t RESERVED29                     : 3;
} stc_tmr6_pconr_field_t;

typedef struct
{
    __IO uint32_t BENA                      : 1;
    __IO uint32_t BSEA                      : 1;
    __IO uint32_t BENB                      : 1;
    __IO uint32_t BSEB                      : 1;
    uint32_t RESERVED4                      : 4;
    __IO uint32_t BENP                      : 1;
    __IO uint32_t BSEP                      : 1;
    uint32_t RESERVED10                     : 6;
    __IO uint32_t BENSPA                    : 1;
    __IO uint32_t BSESPA                    : 1;
    uint32_t RESERVED18                     : 2;
    __IO uint32_t BTRSPA                    : 2;
    uint32_t RESERVED22                     : 2;
    __IO uint32_t BENSPB                    : 1;
    __IO uint32_t BSESPB                    : 1;
    uint32_t RESERVED26                     : 2;
    __IO uint32_t BTRSPB                    : 2;
    uint32_t RESERVED30                     : 2;
} stc_tmr6_bconr_field_t;

typedef struct
{
    __IO uint32_t DTCEN                     : 1;
    uint32_t RESERVED1                      : 3;
    __IO uint32_t DTBENU                    : 1;
    __IO uint32_t DTBEND                    : 1;
    uint32_t RESERVED6                      : 2;
    __IO uint32_t SEPA                      : 1;
    uint32_t RESERVED9                      :23;
} stc_tmr6_dconr_field_t;

typedef struct
{
    __IO uint32_t NOFIENGA                  : 1;
    __IO uint32_t NOFICKGA                  : 2;
    uint32_t RESERVED3                      : 1;
    __IO uint32_t NOFIENGB                  : 1;
    __IO uint32_t NOFICKGB                  : 2;
    uint32_t RESERVED7                      : 9;
    __IO uint32_t NOFIENTA                  : 1;
    __IO uint32_t NOFICKTA                  : 2;
    uint32_t RESERVED19                     : 1;
    __IO uint32_t NOFIENTB                  : 1;
    __IO uint32_t NOFICKTB                  : 2;
    uint32_t RESERVED23                     : 9;
} stc_tmr6_fconr_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 8;
    __IO uint32_t SPPERIA                   : 1;
    __IO uint32_t SPPERIB                   : 1;
    uint32_t RESERVED10                     : 6;
    __IO uint32_t PCNTE                     : 2;
    __IO uint32_t PCNTS                     : 3;
    uint32_t RESERVED21                     :11;
} stc_tmr6_vperr_field_t;

typedef struct
{
    __IO uint32_t CMAF                      : 1;
    __IO uint32_t CMBF                      : 1;
    __IO uint32_t CMCF                      : 1;
    __IO uint32_t CMDF                      : 1;
    __IO uint32_t CMEF                      : 1;
    __IO uint32_t CMFF                      : 1;
    __IO uint32_t OVFF                      : 1;
    __IO uint32_t UDFF                      : 1;
    __IO uint32_t DTEF                      : 1;
    __IO uint32_t CMSAUF                    : 1;
    __IO uint32_t CMSADF                    : 1;
    __IO uint32_t CMSBUF                    : 1;
    __IO uint32_t CMSBDF                    : 1;
    uint32_t RESERVED13                     : 8;
    __IO uint32_t VPERNUM                   : 3;
    uint32_t RESERVED24                     : 7;
    __IO uint32_t DIRF                      : 1;
} stc_tmr6_stflr_field_t;

typedef struct
{
    __IO uint32_t HSTA0                     : 1;
    __IO uint32_t HSTA1                     : 1;
    uint32_t RESERVED2                      : 2;
    __IO uint32_t HSTA4                     : 1;
    __IO uint32_t HSTA5                     : 1;
    __IO uint32_t HSTA6                     : 1;
    __IO uint32_t HSTA7                     : 1;
    __IO uint32_t HSTA8                     : 1;
    __IO uint32_t HSTA9                     : 1;
    __IO uint32_t HSTA10                    : 1;
    __IO uint32_t HSTA11                    : 1;
    uint32_t RESERVED12                     :19;
    __IO uint32_t STARTS                    : 1;
} stc_tmr6_hstar_field_t;

typedef struct
{
    __IO uint32_t HSTP0                     : 1;
    __IO uint32_t HSTP1                     : 1;
    uint32_t RESERVED2                      : 2;
    __IO uint32_t HSTP4                     : 1;
    __IO uint32_t HSTP5                     : 1;
    __IO uint32_t HSTP6                     : 1;
    __IO uint32_t HSTP7                     : 1;
    __IO uint32_t HSTP8                     : 1;
    __IO uint32_t HSTP9                     : 1;
    __IO uint32_t HSTP10                    : 1;
    __IO uint32_t HSTP11                    : 1;
    uint32_t RESERVED12                     :19;
    __IO uint32_t STOPS                     : 1;
} stc_tmr6_hstpr_field_t;

typedef struct
{
    __IO uint32_t HCLE0                     : 1;
    __IO uint32_t HCLE1                     : 1;
    uint32_t RESERVED2                      : 2;
    __IO uint32_t HCLE4                     : 1;
    __IO uint32_t HCLE5                     : 1;
    __IO uint32_t HCLE6                     : 1;
    __IO uint32_t HCLE7                     : 1;
    __IO uint32_t HCLE8                     : 1;
    __IO uint32_t HCLE9                     : 1;
    __IO uint32_t HCLE10                    : 1;
    __IO uint32_t HCLE11                    : 1;
    uint32_t RESERVED12                     :19;
    __IO uint32_t CLEARS                    : 1;
} stc_tmr6_hclrr_field_t;

typedef struct
{
    __IO uint32_t HCPA0                     : 1;
    __IO uint32_t HCPA1                     : 1;
    uint32_t RESERVED2                      : 2;
    __IO uint32_t HCPA4                     : 1;
    __IO uint32_t HCPA5                     : 1;
    __IO uint32_t HCPA6                     : 1;
    __IO uint32_t HCPA7                     : 1;
    __IO uint32_t HCPA8                     : 1;
    __IO uint32_t HCPA9                     : 1;
    __IO uint32_t HCPA10                    : 1;
    __IO uint32_t HCPA11                    : 1;
    uint32_t RESERVED12                     :20;
} stc_tmr6_hcpar_field_t;

typedef struct
{
    __IO uint32_t HCPB0                     : 1;
    __IO uint32_t HCPB1                     : 1;
    uint32_t RESERVED2                      : 2;
    __IO uint32_t HCPB4                     : 1;
    __IO uint32_t HCPB5                     : 1;
    __IO uint32_t HCPB6                     : 1;
    __IO uint32_t HCPB7                     : 1;
    __IO uint32_t HCPB8                     : 1;
    __IO uint32_t HCPB9                     : 1;
    __IO uint32_t HCPB10                    : 1;
    __IO uint32_t HCPB11                    : 1;
    uint32_t RESERVED12                     :20;
} stc_tmr6_hcpbr_field_t;

typedef struct
{
    __IO uint32_t HCUP0                     : 1;
    __IO uint32_t HCUP1                     : 1;
    __IO uint32_t HCUP2                     : 1;
    __IO uint32_t HCUP3                     : 1;
    __IO uint32_t HCUP4                     : 1;
    __IO uint32_t HCUP5                     : 1;
    __IO uint32_t HCUP6                     : 1;
    __IO uint32_t HCUP7                     : 1;
    __IO uint32_t HCUP8                     : 1;
    __IO uint32_t HCUP9                     : 1;
    __IO uint32_t HCUP10                    : 1;
    __IO uint32_t HCUP11                    : 1;
    uint32_t RESERVED12                     : 4;
    __IO uint32_t HCUP16                    : 1;
    __IO uint32_t HCUP17                    : 1;
    uint32_t RESERVED18                     :14;
} stc_tmr6_hcupr_field_t;

typedef struct
{
    __IO uint32_t HCDO0                     : 1;
    __IO uint32_t HCDO1                     : 1;
    __IO uint32_t HCDO2                     : 1;
    __IO uint32_t HCDO3                     : 1;
    __IO uint32_t HCDO4                     : 1;
    __IO uint32_t HCDO5                     : 1;
    __IO uint32_t HCDO6                     : 1;
    __IO uint32_t HCDO7                     : 1;
    __IO uint32_t HCDO8                     : 1;
    __IO uint32_t HCDO9                     : 1;
    __IO uint32_t HCDO10                    : 1;
    __IO uint32_t HCDO11                    : 1;
    uint32_t RESERVED12                     : 4;
    __IO uint32_t HCDO16                    : 1;
    __IO uint32_t HCDO17                    : 1;
    uint32_t RESERVED18                     :14;
} stc_tmr6_hcdor_field_t;

typedef struct
{
    __IO uint32_t SSTA1                     : 1;
    __IO uint32_t SSTA2                     : 1;
    __IO uint32_t SSTA3                     : 1;
    uint32_t RESERVED3                      :13;
    __IO uint32_t RESV0                     : 1;
    uint32_t RESERVED17                     : 7;
    __IO uint32_t RESV                      : 1;
    uint32_t RESERVED25                     : 7;
} stc_tmr6_cr_sstar_field_t;

typedef struct
{
    __IO uint32_t SSTP1                     : 1;
    __IO uint32_t SSTP2                     : 1;
    __IO uint32_t SSTP3                     : 1;
    uint32_t RESERVED3                      :29;
} stc_tmr6_cr_sstpr_field_t;

typedef struct
{
    __IO uint32_t SCLE1                     : 1;
    __IO uint32_t SCLE2                     : 1;
    __IO uint32_t SCLE3                     : 1;
    uint32_t RESERVED3                      :29;
} stc_tmr6_cr_sclrr_field_t;

typedef struct
{
    __IO uint32_t CNT                       :16;
    uint32_t RESERVED16                     :16;
} stc_tmra_cnter_field_t;

typedef struct
{
    __IO uint32_t PER                       :16;
    uint32_t RESERVED16                     :16;
} stc_tmra_perar_field_t;

typedef struct
{
    __IO uint32_t CMP                       :16;
    uint32_t RESERVED16                     :16;
} stc_tmra_cmpar_field_t;

typedef struct
{
    __IO uint32_t START                     : 1;
    __IO uint32_t DIR                       : 1;
    __IO uint32_t MODE                      : 1;
    __IO uint32_t SYNST                     : 1;
    __IO uint32_t CKDIV                     : 4;
    uint32_t RESERVED8                      : 4;
    __IO uint32_t ITENOVF                   : 1;
    __IO uint32_t ITENUDF                   : 1;
    __IO uint32_t OVFF                      : 1;
    __IO uint32_t UDFF                      : 1;
    uint32_t RESERVED16                     :16;
} stc_tmra_bcstr_field_t;

typedef struct
{
    __IO uint32_t HSTA0                     : 1;
    __IO uint32_t HSTA1                     : 1;
    __IO uint32_t HSTA2                     : 1;
    uint32_t RESERVED3                      : 1;
    __IO uint32_t HSTP0                     : 1;
    __IO uint32_t HSTP1                     : 1;
    __IO uint32_t HSTP2                     : 1;
    uint32_t RESERVED7                      : 1;
    __IO uint32_t HCLE0                     : 1;
    __IO uint32_t HCLE1                     : 1;
    __IO uint32_t HCLE2                     : 1;
    uint32_t RESERVED11                     : 1;
    __IO uint32_t HCLE3                     : 1;
    __IO uint32_t HCLE4                     : 1;
    __IO uint32_t HCLE5                     : 1;
    __IO uint32_t HCLE6                     : 1;
    uint32_t RESERVED16                     :16;
} stc_tmra_hconr_field_t;

typedef struct
{
    __IO uint32_t HCUP0                     : 1;
    __IO uint32_t HCUP1                     : 1;
    __IO uint32_t HCUP2                     : 1;
    __IO uint32_t HCUP3                     : 1;
    __IO uint32_t HCUP4                     : 1;
    __IO uint32_t HCUP5                     : 1;
    __IO uint32_t HCUP6                     : 1;
    __IO uint32_t HCUP7                     : 1;
    __IO uint32_t HCUP8                     : 1;
    __IO uint32_t HCUP9                     : 1;
    __IO uint32_t HCUP10                    : 1;
    __IO uint32_t HCUP11                    : 1;
    __IO uint32_t HCUP12                    : 1;
    uint32_t RESERVED13                     :19;
} stc_tmra_hcupr_field_t;

typedef struct
{
    __IO uint32_t HCDO0                     : 1;
    __IO uint32_t HCDO1                     : 1;
    __IO uint32_t HCDO2                     : 1;
    __IO uint32_t HCDO3                     : 1;
    __IO uint32_t HCDO4                     : 1;
    __IO uint32_t HCDO5                     : 1;
    __IO uint32_t HCDO6                     : 1;
    __IO uint32_t HCDO7                     : 1;
    __IO uint32_t HCDO8                     : 1;
    __IO uint32_t HCDO9                     : 1;
    __IO uint32_t HCDO10                    : 1;
    __IO uint32_t HCDO11                    : 1;
    __IO uint32_t HCDO12                    : 1;
    uint32_t RESERVED13                     :19;
} stc_tmra_hcdor_field_t;

typedef struct
{
    __IO uint32_t ITEN1                     : 1;
    __IO uint32_t ITEN2                     : 1;
    __IO uint32_t ITEN3                     : 1;
    __IO uint32_t ITEN4                     : 1;
    __IO uint32_t ITEN5                     : 1;
    __IO uint32_t ITEN6                     : 1;
    __IO uint32_t ITEN7                     : 1;
    __IO uint32_t ITEN8                     : 1;
    uint32_t RESERVED8                      :24;
} stc_tmra_iconr_field_t;

typedef struct
{
    __IO uint32_t ETEN1                     : 1;
    __IO uint32_t ETEN2                     : 1;
    __IO uint32_t ETEN3                     : 1;
    __IO uint32_t ETEN4                     : 1;
    __IO uint32_t ETEN5                     : 1;
    __IO uint32_t ETEN6                     : 1;
    __IO uint32_t ETEN7                     : 1;
    __IO uint32_t ETEN8                     : 1;
    uint32_t RESERVED8                      :24;
} stc_tmra_econr_field_t;

typedef struct
{
    __IO uint32_t NOFIENTG                  : 1;
    __IO uint32_t NOFICKTG                  : 2;
    uint32_t RESERVED3                      : 5;
    __IO uint32_t NOFIENCA                  : 1;
    __IO uint32_t NOFICKCA                  : 2;
    uint32_t RESERVED11                     : 1;
    __IO uint32_t NOFIENCB                  : 1;
    __IO uint32_t NOFICKCB                  : 2;
    uint32_t RESERVED15                     :17;
} stc_tmra_fconr_field_t;

typedef struct
{
    __IO uint32_t CMPF1                     : 1;
    __IO uint32_t CMPF2                     : 1;
    __IO uint32_t CMPF3                     : 1;
    __IO uint32_t CMPF4                     : 1;
    __IO uint32_t CMPF5                     : 1;
    __IO uint32_t CMPF6                     : 1;
    __IO uint32_t CMPF7                     : 1;
    __IO uint32_t CMPF8                     : 1;
    uint32_t RESERVED8                      :24;
} stc_tmra_stflr_field_t;

typedef struct
{
    __IO uint32_t BEN                       : 1;
    __IO uint32_t BSE0                      : 1;
    __IO uint32_t BSE1                      : 1;
    uint32_t RESERVED3                      :29;
} stc_tmra_bconr_field_t;

typedef struct
{
    __IO uint32_t CAPMD                     : 1;
    uint32_t RESERVED1                      : 3;
    __IO uint32_t HICP0                     : 1;
    __IO uint32_t HICP1                     : 1;
    __IO uint32_t HICP2                     : 1;
    uint32_t RESERVED7                      : 1;
    __IO uint32_t HICP3                     : 1;
    __IO uint32_t HICP4                     : 1;
    uint32_t RESERVED10                     : 2;
    __IO uint32_t NOFIENCP                  : 1;
    __IO uint32_t NOFICKCP                  : 2;
    uint32_t RESERVED15                     :17;
} stc_tmra_cconr_field_t;

typedef struct
{
    __IO uint32_t STAC                      : 2;
    __IO uint32_t STPC                      : 2;
    __IO uint32_t CMPC                      : 2;
    __IO uint32_t PERC                      : 2;
    __IO uint32_t FORC                      : 2;
    uint32_t RESERVED10                     : 2;
    __IO uint32_t OUTEN                     : 1;
    uint32_t RESERVED13                     :19;
} stc_tmra_pconr_field_t;

typedef struct
{
    __IO uint32_t EN                        : 1;
    __IO uint32_t RUN                       : 1;
    uint32_t RESERVED2                      :30;
} stc_trng_cr_field_t;

typedef struct
{
    __IO uint32_t LOAD                      : 1;
    uint32_t RESERVED1                      : 1;
    __IO uint32_t CNT                       : 3;
    uint32_t RESERVED5                      :27;
} stc_trng_mr_field_t;

typedef struct
{
    __IO uint32_t PE                        : 1;
    __IO uint32_t FE                        : 1;
    uint32_t RESERVED2                      : 1;
    __IO uint32_t ORE                       : 1;
    uint32_t RESERVED4                      : 1;
    __IO uint32_t RXNE                      : 1;
    __IO uint32_t TC                        : 1;
    __IO uint32_t TXE                       : 1;
    __IO uint32_t RTOF                      : 1;
    uint32_t RESERVED9                      : 7;
    __IO uint32_t MPB                       : 1;
    uint32_t RESERVED17                     :15;
} stc_usart_sr_field_t;

typedef struct
{
    __IO uint32_t TDR                       : 9;
    __IO uint32_t MPID                      : 1;
    uint32_t RESERVED10                     : 6;
    __IO uint32_t RDR                       : 9;
    uint32_t RESERVED25                     : 7;
} stc_usart_dr_field_t;

typedef struct
{
    __IO uint32_t DIV_FRACTION              : 7;
    uint32_t RESERVED7                      : 1;
    __IO uint32_t DIV_INTEGER               : 8;
    uint32_t RESERVED16                     :16;
} stc_usart_brr_field_t;

typedef struct
{
    __IO uint32_t RTOE                      : 1;
    __IO uint32_t RTOIE                     : 1;
    __IO uint32_t RE                        : 1;
    __IO uint32_t TE                        : 1;
    __IO uint32_t SLME                      : 1;
    __IO uint32_t RIE                       : 1;
    __IO uint32_t TCIE                      : 1;
    __IO uint32_t TXEIE                     : 1;
    uint32_t RESERVED8                      : 1;
    __IO uint32_t PS                        : 1;
    __IO uint32_t PCE                       : 1;
    uint32_t RESERVED11                     : 1;
    __IO uint32_t M                         : 1;
    uint32_t RESERVED13                     : 2;
    __IO uint32_t OVER8                     : 1;
    __IO uint32_t CPE                       : 1;
    __IO uint32_t CFE                       : 1;
    uint32_t RESERVED18                     : 1;
    __IO uint32_t CORE                      : 1;
    __IO uint32_t CRTOF                     : 1;
    uint32_t RESERVED21                     : 3;
    __IO uint32_t MS                        : 1;
    uint32_t RESERVED25                     : 3;
    __IO uint32_t ML                        : 1;
    __IO uint32_t FBME                      : 1;
    __IO uint32_t NFE                       : 1;
    __IO uint32_t SBS                       : 1;
} stc_usart_cr1_field_t;

typedef struct
{
    __IO uint32_t MPE                       : 1;
    uint32_t RESERVED1                      :10;
    __IO uint32_t CLKC                      : 2;
    __IO uint32_t STOP                      : 1;
    uint32_t RESERVED14                     :18;
} stc_usart_cr2_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 5;
    __IO uint32_t SCEN                      : 1;
    uint32_t RESERVED6                      : 3;
    __IO uint32_t CTSE                      : 1;
    uint32_t RESERVED10                     :11;
    __IO uint32_t BCN                       : 3;
    uint32_t RESERVED24                     : 8;
} stc_usart_cr3_field_t;

typedef struct
{
    __IO uint32_t PSC                       : 2;
    uint32_t RESERVED2                      :30;
} stc_usart_pr_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 6;
    __IO uint32_t VBUSOVEN                  : 1;
    __IO uint32_t VBUSVAL                   : 1;
    uint32_t RESERVED8                      :24;
} stc_usbfs_usbfs_gvbuscfg_field_t;

typedef struct
{
    __IO uint32_t GINTMSK                   : 1;
    __IO uint32_t HBSTLEN                   : 4;
    __IO uint32_t DMAEN                     : 1;
    uint32_t RESERVED6                      : 1;
    __IO uint32_t TXFELVL                   : 1;
    __IO uint32_t PTXFELVL                  : 1;
    uint32_t RESERVED9                      :23;
} stc_usbfs_gahbcfg_field_t;

typedef struct
{
    __IO uint32_t TOCAL                     : 3;
    uint32_t RESERVED3                      : 3;
    __IO uint32_t PHYSEL                    : 1;
    uint32_t RESERVED7                      : 3;
    __IO uint32_t TRDT                      : 4;
    uint32_t RESERVED14                     :15;
    __IO uint32_t FHMOD                     : 1;
    __IO uint32_t FDMOD                     : 1;
    uint32_t RESERVED31                     : 1;
} stc_usbfs_gusbcfg_field_t;

typedef struct
{
    __IO uint32_t CSRST                     : 1;
    __IO uint32_t HSRST                     : 1;
    __IO uint32_t FCRST                     : 1;
    uint32_t RESERVED3                      : 1;
    __IO uint32_t RXFFLSH                   : 1;
    __IO uint32_t TXFFLSH                   : 1;
    __IO uint32_t TXFNUM                    : 5;
    uint32_t RESERVED11                     :19;
    __IO uint32_t DMAREQ                    : 1;
    __IO uint32_t AHBIDL                    : 1;
} stc_usbfs_grstctl_field_t;

typedef struct
{
    __IO uint32_t CMOD                      : 1;
    __IO uint32_t MMIS                      : 1;
    uint32_t RESERVED2                      : 1;
    __IO uint32_t SOF                       : 1;
    __IO uint32_t RXFNE                     : 1;
    __IO uint32_t NPTXFE                    : 1;
    __IO uint32_t GINAKEFF                  : 1;
    __IO uint32_t GONAKEFF                  : 1;
    uint32_t RESERVED8                      : 2;
    __IO uint32_t ESUSP                     : 1;
    __IO uint32_t USBSUSP                   : 1;
    __IO uint32_t USBRST                    : 1;
    __IO uint32_t ENUMDNE                   : 1;
    __IO uint32_t ISOODRP                   : 1;
    __IO uint32_t EOPF                      : 1;
    uint32_t RESERVED16                     : 2;
    __IO uint32_t IEPINT                    : 1;
    __IO uint32_t OEPINT                    : 1;
    __IO uint32_t IISOIXFR                  : 1;
    __IO uint32_t IPXFR_INCOMPISOOUT        : 1;
    __IO uint32_t DATAFSUSP                 : 1;
    uint32_t RESERVED23                     : 1;
    __IO uint32_t HPRTINT                   : 1;
    __IO uint32_t HCINT                     : 1;
    __IO uint32_t PTXFE                     : 1;
    uint32_t RESERVED27                     : 1;
    __IO uint32_t CIDSCHG                   : 1;
    __IO uint32_t DISCINT                   : 1;
    __IO uint32_t VBUSVINT                  : 1;
    __IO uint32_t WKUINT                    : 1;
} stc_usbfs_gintsts_field_t;

typedef struct
{
    uint32_t RESERVED0                      : 1;
    __IO uint32_t MMISM                     : 1;
    uint32_t RESERVED2                      : 1;
    __IO uint32_t SOFM                      : 1;
    __IO uint32_t RXFNEM                    : 1;
    __IO uint32_t NPTXFEM                   : 1;
    __IO uint32_t GINAKEFFM                 : 1;
    __IO uint32_t GONAKEFFM                 : 1;
    uint32_t RESERVED8                      : 2;
    __IO uint32_t ESUSPM                    : 1;
    __IO uint32_t USBSUSPM                  : 1;
    __IO uint32_t USBRSTM                   : 1;
    __IO uint32_t ENUMDNEM                  : 1;
    __IO uint32_t ISOODRPM                  : 1;
    __IO uint32_t EOPFM                     : 1;
    uint32_t RESERVED16                     : 2;
    __IO uint32_t IEPIM                     : 1;
    __IO uint32_t OEPIM                     : 1;
    __IO uint32_t IISOIXFRM                 : 1;
    __IO uint32_t IPXFRM_INCOMPISOOUTM      : 1;
    __IO uint32_t DATAFSUSPM                : 1;
    uint32_t RESERVED23                     : 1;
    __IO uint32_t HPRTIM                    : 1;
    __IO uint32_t HCIM                      : 1;
    __IO uint32_t PTXFEM                    : 1;
    uint32_t RESERVED27                     : 1;
    __IO uint32_t CIDSCHGM                  : 1;
    __IO uint32_t DISCIM                    : 1;
    __IO uint32_t VBUSVIM                   : 1;
    __IO uint32_t WKUIM                     : 1;
} stc_usbfs_gintmsk_field_t;

typedef struct
{
    __IO uint32_t CHNUM_EPNUM               : 4;
    __IO uint32_t BCNT                      :11;
    __IO uint32_t DPID                      : 2;
    __IO uint32_t PKTSTS                    : 4;
    uint32_t RESERVED21                     :11;
} stc_usbfs_grxstsr_field_t;

typedef struct
{
    __IO uint32_t CHNUM_EPNUM               : 4;
    __IO uint32_t BCNT                      :11;
    __IO uint32_t DPID                      : 2;
    __IO uint32_t PKTSTS                    : 4;
    uint32_t RESERVED21                     :11;
} stc_usbfs_grxstsp_field_t;

typedef struct
{
    __IO uint32_t RXFD                      :11;
    uint32_t RESERVED11                     :21;
} stc_usbfs_grxfsiz_field_t;

typedef struct
{
    __IO uint32_t NPTXFSA                   :16;
    __IO uint32_t NPTXFD                    :16;
} stc_usbfs_hnptxfsiz_field_t;

typedef struct
{
    __IO uint32_t NPTXFSAV                  :16;
    __IO uint32_t NPTQXSAV                  : 8;
    __IO uint32_t NPTXQTOP                  : 7;
    uint32_t RESERVED31                     : 1;
} stc_usbfs_hnptxsts_field_t;

typedef struct
{
    __IO uint32_t PTXSA                     :12;
    uint32_t RESERVED12                     : 4;
    __IO uint32_t PTXFD                     :11;
    uint32_t RESERVED27                     : 5;
} stc_usbfs_hptxfsiz_field_t;

typedef struct
{
    __IO uint32_t INEPTXSA                  :12;
    uint32_t RESERVED12                     : 4;
    __IO uint32_t INEPTXFD                  :10;
    uint32_t RESERVED26                     : 6;
} stc_usbfs_dieptxf_field_t;

typedef struct
{
    __IO uint32_t FSLSPCS                   : 2;
    __IO uint32_t FSLSS                     : 1;
    uint32_t RESERVED3                      :29;
} stc_usbfs_hcfg_field_t;

typedef struct
{
    __IO uint32_t FRIVL                     :16;
    uint32_t RESERVED16                     :16;
} stc_usbfs_hfir_field_t;

typedef struct
{
    __IO uint32_t FRNUM                     :16;
    __IO uint32_t FTREM                     :16;
} stc_usbfs_hfnum_field_t;

typedef struct
{
    __IO uint32_t PTXFSAVL                  :16;
    __IO uint32_t PTXQSAV                   : 8;
    __IO uint32_t PTXQTOP                   : 8;
} stc_usbfs_hptxsts_field_t;

typedef struct
{
    __IO uint32_t HAINT                     :12;
    uint32_t RESERVED12                     :20;
} stc_usbfs_haint_field_t;

typedef struct
{
    __IO uint32_t HAINTM                    :12;
    uint32_t RESERVED12                     :20;
} stc_usbfs_haintmsk_field_t;

typedef struct
{
    __IO uint32_t PCSTS                     : 1;
    __IO uint32_t PCDET                     : 1;
    __IO uint32_t PENA                      : 1;
    __IO uint32_t PENCHNG                   : 1;
    uint32_t RESERVED4                      : 2;
    __IO uint32_t PRES                      : 1;
    __IO uint32_t PSUSP                     : 1;
    __IO uint32_t PRST                      : 1;
    uint32_t RESERVED9                      : 1;
    __IO uint32_t PLSTS                     : 2;
    __IO uint32_t PWPR                      : 1;
    uint32_t RESERVED13                     : 4;
    __IO uint32_t PSPD                      : 2;
    uint32_t RESERVED19                     :13;
} stc_usbfs_hprt_field_t;

typedef struct
{
    __IO uint32_t MPSIZ                     :11;
    __IO uint32_t EPNUM                     : 4;
    __IO uint32_t EPDIR                     : 1;
    uint32_t RESERVED16                     : 1;
    __IO uint32_t LSDEV                     : 1;
    __IO uint32_t EPTYP                     : 2;
    uint32_t RESERVED20                     : 2;
    __IO uint32_t DAD                       : 7;
    __IO uint32_t ODDFRM                    : 1;
    __IO uint32_t CHDIS                     : 1;
    __IO uint32_t CHENA                     : 1;
} stc_usbfs_hcchar_field_t;

typedef struct
{
    __IO uint32_t XFRC                      : 1;
    __IO uint32_t CHH                       : 1;
    uint32_t RESERVED2                      : 1;
    __IO uint32_t STALL                     : 1;
    __IO uint32_t NAK                       : 1;
    __IO uint32_t ACK                       : 1;
    uint32_t RESERVED6                      : 1;
    __IO uint32_t TXERR                     : 1;
    __IO uint32_t BBERR                     : 1;
    __IO uint32_t FRMOR                     : 1;
    __IO uint32_t DTERR                     : 1;
    uint32_t RESERVED11                     :21;
} stc_usbfs_hcint_field_t;

typedef struct
{
    __IO uint32_t XFRCM                     : 1;
    __IO uint32_t CHHM                      : 1;
    uint32_t RESERVED2                      : 1;
    __IO uint32_t STALLM                    : 1;
    __IO uint32_t NAKM                      : 1;
    __IO uint32_t ACKM                      : 1;
    uint32_t RESERVED6                      : 1;
    __IO uint32_t TXERRM                    : 1;
    __IO uint32_t BBERRM                    : 1;
    __IO uint32_t FRMORM                    : 1;
    __IO uint32_t DTERRM                    : 1;
    uint32_t RESERVED11                     :21;
} stc_usbfs_hcintmsk_field_t;

typedef struct
{
    __IO uint32_t XFRSIZ                    :19;
    __IO uint32_t PKTCNT                    :10;
    __IO uint32_t DPID                      : 2;
    uint32_t RESERVED31                     : 1;
} stc_usbfs_hctsiz_field_t;

typedef struct
{
    __IO uint32_t DSPD                      : 2;
    __IO uint32_t NZLSOHSK                  : 1;
    uint32_t RESERVED3                      : 1;
    __IO uint32_t DAD                       : 7;
    __IO uint32_t PFIVL                     : 2;
    uint32_t RESERVED13                     :19;
} stc_usbfs_dcfg_field_t;

typedef struct
{
    __IO uint32_t RWUSIG                    : 1;
    __IO uint32_t SDIS                      : 1;
    __IO uint32_t GINSTS                    : 1;
    __IO uint32_t GONSTS                    : 1;
    uint32_t RESERVED4                      : 3;
    __IO uint32_t SGINAK                    : 1;
    __IO uint32_t CGINAK                    : 1;
    __IO uint32_t SGONAK                    : 1;
    __IO uint32_t CGONAK                    : 1;
    __IO uint32_t POPRGDNE                  : 1;
    uint32_t RESERVED12                     :20;
} stc_usbfs_dctl_field_t;

typedef struct
{
    __IO uint32_t SUSPSTS                   : 1;
    __IO uint32_t ENUMSPD                   : 2;
    __IO uint32_t EERR                      : 1;
    uint32_t RESERVED4                      : 4;
    __IO uint32_t FNSOF                     :14;
    uint32_t RESERVED22                     :10;
} stc_usbfs_dsts_field_t;

typedef struct
{
    __IO uint32_t XFRCM                     : 1;
    __IO uint32_t EPDM                      : 1;
    uint32_t RESERVED2                      : 1;
    __IO uint32_t TOM                       : 1;
    __IO uint32_t ITTXFEMSK                 : 1;
    __IO uint32_t INEPNMM                   : 1;
    __IO uint32_t INEPNEM                   : 1;
    uint32_t RESERVED7                      :25;
} stc_usbfs_diepmsk_field_t;

typedef struct
{
    __IO uint32_t XFRCM                     : 1;
    __IO uint32_t EPDM                      : 1;
    uint32_t RESERVED2                      : 1;
    __IO uint32_t STUPM                     : 1;
    __IO uint32_t OTEPDM                    : 1;
    uint32_t RESERVED5                      :27;
} stc_usbfs_doepmsk_field_t;

typedef struct
{
    __IO uint32_t IEPINT                    : 6;
    uint32_t RESERVED6                      :10;
    __IO uint32_t OEPINT                    : 6;
    uint32_t RESERVED22                     :10;
} stc_usbfs_daint_field_t;

typedef struct
{
    __IO uint32_t IEPINTM                   : 6;
    uint32_t RESERVED6                      :10;
    __IO uint32_t OEPINTM                   : 6;
    uint32_t RESERVED22                     :10;
} stc_usbfs_daintmsk_field_t;

typedef struct
{
    __IO uint32_t INEPTXFEM                 : 6;
    uint32_t RESERVED6                      :26;
} stc_usbfs_diepempmsk_field_t;

typedef struct
{
    __IO uint32_t MPSIZ                     : 2;
    uint32_t RESERVED2                      :13;
    __IO uint32_t USBAEP                    : 1;
    uint32_t RESERVED16                     : 1;
    __IO uint32_t NAKSTS                    : 1;
    __IO uint32_t EPTYP                     : 2;
    uint32_t RESERVED20                     : 1;
    __IO uint32_t STALL                     : 1;
    __IO uint32_t TXFNUM                    : 4;
    __IO uint32_t CNAK                      : 1;
    __IO uint32_t SNAK                      : 1;
    uint32_t RESERVED28                     : 2;
    __IO uint32_t EPDIS                     : 1;
    __IO uint32_t EPENA                     : 1;
} stc_usbfs_diepctl0_field_t;

typedef struct
{
    __IO uint32_t XFRC                      : 1;
    __IO uint32_t EPDISD                    : 1;
    uint32_t RESERVED2                      : 1;
    __IO uint32_t TOC                       : 1;
    __IO uint32_t TTXFE                     : 1;
    uint32_t RESERVED5                      : 1;
    __IO uint32_t INEPNE                    : 1;
    __IO uint32_t TXFE                      : 1;
    uint32_t RESERVED8                      :24;
} stc_usbfs_diepint0_field_t;

typedef struct
{
    __IO uint32_t XFRSIZ                    : 7;
    uint32_t RESERVED7                      :12;
    __IO uint32_t PKTCNT                    : 2;
    uint32_t RESERVED21                     :11;
} stc_usbfs_dieptsiz0_field_t;

typedef struct
{
    __IO uint32_t INEPTFSAV                 :16;
    uint32_t RESERVED16                     :16;
} stc_usbfs_dtxfsts0_field_t;

typedef struct
{
    __IO uint32_t MPSIZ                     :11;
    uint32_t RESERVED11                     : 4;
    __IO uint32_t USBAEP                    : 1;
    __IO uint32_t EONUM_DPID                : 1;
    __IO uint32_t NAKSTS                    : 1;
    __IO uint32_t EPTYP                     : 2;
    uint32_t RESERVED20                     : 1;
    __IO uint32_t STALL                     : 1;
    __IO uint32_t TXFNUM                    : 4;
    __IO uint32_t CNAK                      : 1;
    __IO uint32_t SNAK                      : 1;
    __IO uint32_t SD0PID_SEVNFRM            : 1;
    __IO uint32_t SODDFRM                   : 1;
    __IO uint32_t EPDIS                     : 1;
    __IO uint32_t EPENA                     : 1;
} stc_usbfs_diepctl_field_t;

typedef struct
{
    __IO uint32_t XFRC                      : 1;
    __IO uint32_t EPDISD                    : 1;
    uint32_t RESERVED2                      : 1;
    __IO uint32_t TOC                       : 1;
    __IO uint32_t TTXFE                     : 1;
    uint32_t RESERVED5                      : 1;
    __IO uint32_t INEPNE                    : 1;
    __IO uint32_t TXFE                      : 1;
    uint32_t RESERVED8                      :24;
} stc_usbfs_diepint_field_t;

typedef struct
{
    __IO uint32_t XFRSIZ                    :19;
    __IO uint32_t PKTCNT                    :10;
    uint32_t RESERVED29                     : 3;
} stc_usbfs_dieptsiz_field_t;

typedef struct
{
    __IO uint32_t INEPTFSAV                 :16;
    uint32_t RESERVED16                     :16;
} stc_usbfs_dtxfsts_field_t;

typedef struct
{
    __IO uint32_t MPSIZ                     : 2;
    uint32_t RESERVED2                      :13;
    __IO uint32_t USBAEP                    : 1;
    uint32_t RESERVED16                     : 1;
    __IO uint32_t NAKSTS                    : 1;
    __IO uint32_t EPTYP                     : 2;
    __IO uint32_t SNPM                      : 1;
    __IO uint32_t STALL                     : 1;
    uint32_t RESERVED22                     : 4;
    __IO uint32_t CNAK                      : 1;
    __IO uint32_t SNAK                      : 1;
    uint32_t RESERVED28                     : 2;
    __IO uint32_t EPDIS                     : 1;
    __IO uint32_t EPENA                     : 1;
} stc_usbfs_doepctl0_field_t;

typedef struct
{
    __IO uint32_t XFRC                      : 1;
    __IO uint32_t EPDISD                    : 1;
    uint32_t RESERVED2                      : 1;
    __IO uint32_t STUP                      : 1;
    __IO uint32_t OTEPDIS                   : 1;
    uint32_t RESERVED5                      : 1;
    __IO uint32_t B2BSTUP                   : 1;
    uint32_t RESERVED7                      :25;
} stc_usbfs_doepint_field_t;

typedef struct
{
    __IO uint32_t XFRSIZ                    : 7;
    uint32_t RESERVED7                      :12;
    __IO uint32_t PKTCNT                    : 1;
    uint32_t RESERVED20                     : 9;
    __IO uint32_t STUPCNT                   : 2;
    uint32_t RESERVED31                     : 1;
} stc_usbfs_doeptsiz0_field_t;

typedef struct
{
    __IO uint32_t MPSIZ                     :11;
    uint32_t RESERVED11                     : 4;
    __IO uint32_t USBAEP                    : 1;
    __IO uint32_t DPID                      : 1;
    __IO uint32_t NAKSTS                    : 1;
    __IO uint32_t EPTYP                     : 2;
    __IO uint32_t SNPM                      : 1;
    __IO uint32_t STALL                     : 1;
    uint32_t RESERVED22                     : 4;
    __IO uint32_t CNAK                      : 1;
    __IO uint32_t SNAK                      : 1;
    __IO uint32_t SD0PID                    : 1;
    __IO uint32_t SD1PID                    : 1;
    __IO uint32_t EPDIS                     : 1;
    __IO uint32_t EPENA                     : 1;
} stc_usbfs_doepctl_field_t;

typedef struct
{
    __IO uint32_t XFRSIZ                    :19;
    __IO uint32_t PKTCNT                    :10;
    uint32_t RESERVED29                     : 3;
} stc_usbfs_doeptsiz_field_t;

typedef struct
{
    __IO uint32_t STPPCLK                   : 1;
    __IO uint32_t GATEHCLK                  : 1;
    uint32_t RESERVED2                      :30;
} stc_usbfs_pcgcctl_field_t;

typedef struct
{
    __IO uint32_t PERI                      : 2;
    uint32_t RESERVED2                      : 2;
    __IO uint32_t CKS                       : 4;
    __IO uint32_t WDPT                      : 4;
    uint32_t RESERVED12                     : 4;
    __IO uint32_t SLPOFF                    : 1;
    uint32_t RESERVED17                     :14;
    __IO uint32_t ITS                       : 1;
} stc_wdt_cr_field_t;

typedef struct
{
    __IO uint32_t CNT                       :16;
    __IO uint32_t UDF                       : 1;
    __IO uint32_t REF                       : 1;
    uint32_t RESERVED18                     :14;
} stc_wdt_sr_field_t;

typedef struct
{
    __IO uint32_t RF                        :16;
    uint32_t RESERVED16                     :16;
} stc_wdt_rr_field_t;

typedef struct
{
    __IO uint16_t WKTMCMP                   :12;
    __IO uint16_t WKOVF                     : 1;
    __IO uint16_t WKCKS                     : 2;
    __IO uint16_t WKTCE                     : 1;
} stc_wktm_cr_field_t;


typedef struct
{
    union
    {
        __IO uint8_t STR;
        stc_adc_str_field_t STR_f;
    };
    uint8_t RESERVED1[1];
    union
    {
        __IO uint16_t CR0;
        stc_adc_cr0_field_t CR0_f;
    };
    union
    {
        __IO uint16_t CR1;
        stc_adc_cr1_field_t CR1_f;
    };
    uint8_t RESERVED3[4];
    union
    {
        __IO uint16_t TRGSR;
        stc_adc_trgsr_field_t TRGSR_f;
    };
    __IO uint16_t CHSELRA0;
    union
    {
        __IO uint16_t CHSELRA1;
        stc_adc_chselra1_field_t CHSELRA1_f;
    };
    __IO uint16_t CHSELRB0;
    union
    {
        __IO uint16_t CHSELRB1;
        stc_adc_chselrb1_field_t CHSELRB1_f;
    };
    __IO uint16_t AVCHSELR0;
    union
    {
        __IO uint16_t AVCHSELR1;
        stc_adc_avchselr1_field_t AVCHSELR1_f;
    };
    uint8_t RESERVED10[8];
    __IO uint8_t SSTR0;
    __IO uint8_t SSTR1;
    __IO uint8_t SSTR2;
    __IO uint8_t SSTR3;
    __IO uint8_t SSTR4;
    __IO uint8_t SSTR5;
    __IO uint8_t SSTR6;
    __IO uint8_t SSTR7;
    __IO uint8_t SSTR8;
    __IO uint8_t SSTR9;
    __IO uint8_t SSTR10;
    __IO uint8_t SSTR11;
    __IO uint8_t SSTR12;
    __IO uint8_t SSTR13;
    __IO uint8_t SSTR14;
    __IO uint8_t SSTR15;
    __IO uint8_t SSTRL;
    uint8_t RESERVED27[7];
    union
    {
        __IO uint16_t CHMUXR0;
        stc_adc_chmuxr0_field_t CHMUXR0_f;
    };
    union
    {
        __IO uint16_t CHMUXR1;
        stc_adc_chmuxr1_field_t CHMUXR1_f;
    };
    union
    {
        __IO uint16_t CHMUXR2;
        stc_adc_chmuxr2_field_t CHMUXR2_f;
    };
    union
    {
        __IO uint16_t CHMUXR3;
        stc_adc_chmuxr3_field_t CHMUXR3_f;
    };
    uint8_t RESERVED31[6];
    union
    {
        __IO uint8_t ISR;
        stc_adc_isr_field_t ISR_f;
    };
    union
    {
        __IO uint8_t ICR;
        stc_adc_icr_field_t ICR_f;
    };
    uint8_t RESERVED33[4];
    union
    {
        __IO uint16_t SYNCCR;
        stc_adc_synccr_field_t SYNCCR_f;
    };
    uint8_t RESERVED34[2];
    __IO uint16_t DR0;
    __IO uint16_t DR1;
    __IO uint16_t DR2;
    __IO uint16_t DR3;
    __IO uint16_t DR4;
    __IO uint16_t DR5;
    __IO uint16_t DR6;
    __IO uint16_t DR7;
    __IO uint16_t DR8;
    __IO uint16_t DR9;
    __IO uint16_t DR10;
    __IO uint16_t DR11;
    __IO uint16_t DR12;
    __IO uint16_t DR13;
    __IO uint16_t DR14;
    __IO uint16_t DR15;
    __IO uint16_t DR16;
    uint8_t RESERVED51[46];
    union
    {
        __IO uint16_t AWDCR;
        stc_adc_awdcr_field_t AWDCR_f;
    };
    uint8_t RESERVED52[2];
    __IO uint16_t AWDDR0;
    __IO uint16_t AWDDR1;
    uint8_t RESERVED54[4];
    __IO uint16_t AWDCHSR0;
    union
    {
        __IO uint16_t AWDCHSR1;
        stc_adc_awdchsr1_field_t AWDCHSR1_f;
    };
    __IO uint16_t AWDSR0;
    union
    {
        __IO uint16_t AWDSR1;
        stc_adc_awdsr1_field_t AWDSR1_f;
    };
    uint8_t RESERVED58[12];
    union
    {
        __IO uint16_t PGACR;
        stc_adc_pgacr_field_t PGACR_f;
    };
    union
    {
        __IO uint16_t PGAGSR;
        stc_adc_pgagsr_field_t PGAGSR_f;
    };
    uint8_t RESERVED60[8];
    union
    {
        __IO uint16_t PGAINSR0;
        stc_adc_pgainsr0_field_t PGAINSR0_f;
    };
    union
    {
        __IO uint16_t PGAINSR1;
        stc_adc_pgainsr1_field_t PGAINSR1_f;
    };
}M4_ADC_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CR;
        stc_aes_cr_field_t CR_f;
    };
    uint8_t RESERVED1[12];
    __IO uint32_t DR0;
    __IO uint32_t DR1;
    __IO uint32_t DR2;
    __IO uint32_t DR3;
    __IO uint32_t KR0;
    __IO uint32_t KR1;
    __IO uint32_t KR2;
    __IO uint32_t KR3;
}M4_AES_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t INT_SFTTRG;
        stc_aos_int_sfttrg_field_t INT_SFTTRG_f;
    };
    union
    {
        __IO uint32_t DCU1_TRGSEL;
        stc_aos_dcu1_trgsel_field_t DCU1_TRGSEL_f;
    };
    union
    {
        __IO uint32_t DCU2_TRGSEL;
        stc_aos_dcu2_trgsel_field_t DCU2_TRGSEL_f;
    };
    union
    {
        __IO uint32_t DCU3_TRGSEL;
        stc_aos_dcu3_trgsel_field_t DCU3_TRGSEL_f;
    };
    union
    {
        __IO uint32_t DCU4_TRGSEL;
        stc_aos_dcu4_trgsel_field_t DCU4_TRGSEL_f;
    };
    union
    {
        __IO uint32_t DMA1_TRGSEL0;
        stc_aos_dma1_trgsel_field_t DMA1_TRGSEL0_f;
    };
    union
    {
        __IO uint32_t DMA1_TRGSEL1;
        stc_aos_dma1_trgsel_field_t DMA1_TRGSEL1_f;
    };
    union
    {
        __IO uint32_t DMA1_TRGSEL2;
        stc_aos_dma1_trgsel_field_t DMA1_TRGSEL2_f;
    };
    union
    {
        __IO uint32_t DMA1_TRGSEL3;
        stc_aos_dma1_trgsel3_field_t DMA1_TRGSEL3_f;
    };
    union
    {
        __IO uint32_t DMA2_TRGSEL0;
        stc_aos_dma2_trgsel_field_t DMA2_TRGSEL0_f;
    };
    union
    {
        __IO uint32_t DMA2_TRGSEL1;
        stc_aos_dma2_trgsel_field_t DMA2_TRGSEL1_f;
    };
    union
    {
        __IO uint32_t DMA2_TRGSEL2;
        stc_aos_dma2_trgsel_field_t DMA2_TRGSEL2_f;
    };
    union
    {
        __IO uint32_t DMA2_TRGSEL3;
        stc_aos_dma2_trgsel_field_t DMA2_TRGSEL3_f;
    };
    union
    {
        __IO uint32_t DMA_TRGSELRC;
        stc_aos_dma_trgselrc_field_t DMA_TRGSELRC_f;
    };
    union
    {
        __IO uint32_t TMR6_HTSSR1;
        stc_aos_tmr6_htssr_field_t TMR6_HTSSR1_f;
    };
    union
    {
        __IO uint32_t TMR6_HTSSR2;
        stc_aos_tmr6_htssr_field_t TMR6_HTSSR2_f;
    };
    union
    {
        __IO uint32_t TMR0_HTSSR;
        stc_aos_tmr0_htssr_field_t TMR0_HTSSR_f;
    };
    union
    {
        __IO uint32_t PORT_PEVNTTRGSR12;
        stc_aos_port_pevnttrgsr12_field_t PORT_PEVNTTRGSR12_f;
    };
    union
    {
        __IO uint32_t PORT_PEVNTTRGSR34;
        stc_aos_port_pevnttrgsr34_field_t PORT_PEVNTTRGSR34_f;
    };
    union
    {
        __IO uint32_t TMRA_HTSSR0;
        stc_aos_tmra_htssr_field_t TMRA_HTSSR0_f;
    };
    union
    {
        __IO uint32_t TMRA_HTSSR1;
        stc_aos_tmra_htssr_field_t TMRA_HTSSR1_f;
    };
    union
    {
        __IO uint32_t OTS_TRG;
        stc_aos_ots_trg_field_t OTS_TRG_f;
    };
    union
    {
        __IO uint32_t ADC1_ITRGSELR0;
        stc_aos_adc1_itrgselr_field_t ADC1_ITRGSELR0_f;
    };
    union
    {
        __IO uint32_t ADC1_ITRGSELR1;
        stc_aos_adc1_itrgselr_field_t ADC1_ITRGSELR1_f;
    };
    union
    {
        __IO uint32_t ADC2_ITRGSELR0;
        stc_aos_adc2_itrgselr_field_t ADC2_ITRGSELR0_f;
    };
    union
    {
        __IO uint32_t ADC2_ITRGSELR1;
        stc_aos_adc2_itrgselr_field_t ADC2_ITRGSELR1_f;
    };
    union
    {
        __IO uint32_t COMTRG1;
        stc_aos_comtrg1_field_t COMTRG1_f;
    };
    union
    {
        __IO uint32_t COMTRG2;
        stc_aos_comtrg2_field_t COMTRG2_f;
    };
    uint8_t RESERVED28[144];
    union
    {
        __IO uint32_t PEVNTDIRR1;
        stc_aos_pevntdirr_field_t PEVNTDIRR1_f;
    };
    union
    {
        __IO uint32_t PEVNTIDR1;
        stc_aos_pevntidr_field_t PEVNTIDR1_f;
    };
    union
    {
        __IO uint32_t PEVNTODR1;
        stc_aos_pevntodr_field_t PEVNTODR1_f;
    };
    union
    {
        __IO uint32_t PEVNTORR1;
        stc_aos_pevntorr_field_t PEVNTORR1_f;
    };
    union
    {
        __IO uint32_t PEVNTOSR1;
        stc_aos_pevntosr_field_t PEVNTOSR1_f;
    };
    union
    {
        __IO uint32_t PEVNTRISR1;
        stc_aos_pevntrisr_field_t PEVNTRISR1_f;
    };
    union
    {
        __IO uint32_t PEVNTFAL1;
        stc_aos_pevntfal_field_t PEVNTFAL1_f;
    };
    union
    {
        __IO uint32_t PEVNTDIRR2;
        stc_aos_pevntdirr_field_t PEVNTDIRR2_f;
    };
    union
    {
        __IO uint32_t PEVNTIDR2;
        stc_aos_pevntidr_field_t PEVNTIDR2_f;
    };
    union
    {
        __IO uint32_t PEVNTODR2;
        stc_aos_pevntodr_field_t PEVNTODR2_f;
    };
    union
    {
        __IO uint32_t PEVNTORR2;
        stc_aos_pevntorr_field_t PEVNTORR2_f;
    };
    union
    {
        __IO uint32_t PEVNTOSR2;
        stc_aos_pevntosr_field_t PEVNTOSR2_f;
    };
    union
    {
        __IO uint32_t PEVNTRISR2;
        stc_aos_pevntrisr_field_t PEVNTRISR2_f;
    };
    union
    {
        __IO uint32_t PEVNTFAL2;
        stc_aos_pevntfal_field_t PEVNTFAL2_f;
    };
    union
    {
        __IO uint32_t PEVNTDIRR3;
        stc_aos_pevntdirr_field_t PEVNTDIRR3_f;
    };
    union
    {
        __IO uint32_t PEVNTIDR3;
        stc_aos_pevntidr_field_t PEVNTIDR3_f;
    };
    union
    {
        __IO uint32_t PEVNTODR3;
        stc_aos_pevntodr_field_t PEVNTODR3_f;
    };
    union
    {
        __IO uint32_t PEVNTORR3;
        stc_aos_pevntorr_field_t PEVNTORR3_f;
    };
    union
    {
        __IO uint32_t PEVNTOSR3;
        stc_aos_pevntosr_field_t PEVNTOSR3_f;
    };
    union
    {
        __IO uint32_t PEVNTRISR3;
        stc_aos_pevntrisr_field_t PEVNTRISR3_f;
    };
    union
    {
        __IO uint32_t PEVNTFAL3;
        stc_aos_pevntfal_field_t PEVNTFAL3_f;
    };
    union
    {
        __IO uint32_t PEVNTDIRR4;
        stc_aos_pevntdirr_field_t PEVNTDIRR4_f;
    };
    union
    {
        __IO uint32_t PEVNTIDR4;
        stc_aos_pevntidr_field_t PEVNTIDR4_f;
    };
    union
    {
        __IO uint32_t PEVNTODR4;
        stc_aos_pevntodr_field_t PEVNTODR4_f;
    };
    union
    {
        __IO uint32_t PEVNTORR4;
        stc_aos_pevntorr_field_t PEVNTORR4_f;
    };
    union
    {
        __IO uint32_t PEVNTOSR4;
        stc_aos_pevntosr_field_t PEVNTOSR4_f;
    };
    union
    {
        __IO uint32_t PEVNTRISR4;
        stc_aos_pevntrisr_field_t PEVNTRISR4_f;
    };
    union
    {
        __IO uint32_t PEVNTFAL4;
        stc_aos_pevntfal_field_t PEVNTFAL4_f;
    };
    union
    {
        __IO uint32_t PEVNTNFCR;
        stc_aos_pevntnfcr_field_t PEVNTNFCR_f;
    };
}M4_AOS_TypeDef;

typedef struct
{
    __IO uint32_t RBUF;
    uint8_t RESERVED1[76];
    __IO uint32_t TBUF;
    uint8_t RESERVED2[76];
    union
    {
        __IO uint8_t CFG_STAT;
        stc_can_cfg_stat_field_t CFG_STAT_f;
    };
    union
    {
        __IO uint8_t TCMD;
        stc_can_tcmd_field_t TCMD_f;
    };
    union
    {
        __IO uint8_t TCTRL;
        stc_can_tctrl_field_t TCTRL_f;
    };
    union
    {
        __IO uint8_t RCTRL;
        stc_can_rctrl_field_t RCTRL_f;
    };
    union
    {
        __IO uint8_t RTIE;
        stc_can_rtie_field_t RTIE_f;
    };
    union
    {
        __IO uint8_t RTIF;
        stc_can_rtif_field_t RTIF_f;
    };
    union
    {
        __IO uint8_t ERRINT;
        stc_can_errint_field_t ERRINT_f;
    };
    union
    {
        __IO uint8_t LIMIT;
        stc_can_limit_field_t LIMIT_f;
    };
    union
    {
        __IO uint32_t BT;
        stc_can_bt_field_t BT_f;
    };
    uint8_t RESERVED11[4];
    union
    {
        __IO uint8_t EALCAP;
        stc_can_ealcap_field_t EALCAP_f;
    };
    uint8_t RESERVED12[1];
    __IO uint8_t RECNT;
    __IO uint8_t TECNT;
    union
    {
        __IO uint8_t ACFCTRL;
        stc_can_acfctrl_field_t ACFCTRL_f;
    };
    uint8_t RESERVED15[1];
    union
    {
        __IO uint8_t ACFEN;
        stc_can_acfen_field_t ACFEN_f;
    };
    uint8_t RESERVED16[1];
    union
    {
        __IO uint32_t ACF;
        stc_can_acf_field_t ACF_f;
    };
    uint8_t RESERVED17[2];
    union
    {
        __IO uint8_t TBSLOT;
        stc_can_tbslot_field_t TBSLOT_f;
    };
    union
    {
        __IO uint8_t TTCFG;
        stc_can_ttcfg_field_t TTCFG_f;
    };
    union
    {
        __IO uint32_t REF_MSG;
        stc_can_ref_msg_field_t REF_MSG_f;
    };
    union
    {
        __IO uint16_t TRG_CFG;
        stc_can_trg_cfg_field_t TRG_CFG_f;
    };
    __IO uint16_t TT_TRIG;
    __IO uint16_t TT_WTRIG;
}M4_CAN_TypeDef;

typedef struct
{
    union
    {
        __IO uint16_t CTRL;
        stc_cmp_ctrl_field_t CTRL_f;
    };
    union
    {
        __IO uint16_t VLTSEL;
        stc_cmp_vltsel_field_t VLTSEL_f;
    };
    union
    {
        __IO uint16_t MON;
        stc_cmp_mon_field_t MON_f;
    };
    union
    {
        __IO uint16_t CVSSTB;
        stc_cmp_cvsstb_field_t CVSSTB_f;
    };
    union
    {
        __IO uint16_t CVSPRD;
        stc_cmp_cvsprd_field_t CVSPRD_f;
    };
}M4_CMP_TypeDef;

typedef struct
{
    uint8_t RESERVED0[256];
    union
    {
        __IO uint16_t DADR1;
        stc_cmp_cr_dadr1_field_t DADR1_f;
    };
    union
    {
        __IO uint16_t DADR2;
        stc_cmp_cr_dadr2_field_t DADR2_f;
    };
    uint8_t RESERVED2[4];
    union
    {
        __IO uint16_t DACR;
        stc_cmp_cr_dacr_field_t DACR_f;
    };
    uint8_t RESERVED3[2];
    union
    {
        __IO uint16_t RVADC;
        stc_cmp_cr_rvadc_field_t RVADC_f;
    };
}M4_CMP_CR_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CR;
        stc_crc_cr_field_t CR_f;
    };
    __IO uint32_t RESLT;
    uint8_t RESERVED2[4];
    union
    {
        __IO uint32_t FLG;
        stc_crc_flg_field_t FLG_f;
    };
    uint8_t RESERVED3[112];
    __IO uint32_t DAT0;
    __IO uint32_t DAT1;
    __IO uint32_t DAT2;
    __IO uint32_t DAT3;
    __IO uint32_t DAT4;
    __IO uint32_t DAT5;
    __IO uint32_t DAT6;
    __IO uint32_t DAT7;
    __IO uint32_t DAT8;
    __IO uint32_t DAT9;
    __IO uint32_t DAT10;
    __IO uint32_t DAT11;
    __IO uint32_t DAT12;
    __IO uint32_t DAT13;
    __IO uint32_t DAT14;
    __IO uint32_t DAT15;
    __IO uint32_t DAT16;
    __IO uint32_t DAT17;
    __IO uint32_t DAT18;
    __IO uint32_t DAT19;
    __IO uint32_t DAT20;
    __IO uint32_t DAT21;
    __IO uint32_t DAT22;
    __IO uint32_t DAT23;
    __IO uint32_t DAT24;
    __IO uint32_t DAT25;
    __IO uint32_t DAT26;
    __IO uint32_t DAT27;
    __IO uint32_t DAT28;
    __IO uint32_t DAT29;
    __IO uint32_t DAT30;
    __IO uint32_t DAT31;
}M4_CRC_TypeDef;

typedef struct
{
    __IO uint32_t AUTHID0;
    __IO uint32_t AUTHID1;
    __IO uint32_t AUTHID2;
    __IO uint32_t RESV0;
    union
    {
        __IO uint32_t MCUSTAT;
        stc_dbgc_mcustat_field_t MCUSTAT_f;
    };
    union
    {
        __IO uint32_t MCUCTL;
        stc_dbgc_mcuctl_field_t MCUCTL_f;
    };
    union
    {
        __IO uint32_t FMCCTL;
        stc_dbgc_fmcctl_field_t FMCCTL_f;
    };
    union
    {
        __IO uint32_t MCUDBGSTAT;
        stc_dbgc_mcudbgstat_field_t MCUDBGSTAT_f;
    };
    union
    {
        __IO uint32_t MCUSTPCTL;
        stc_dbgc_mcustpctl_field_t MCUSTPCTL_f;
    };
    union
    {
        __IO uint32_t MCUTRACECTL;
        stc_dbgc_mcutracectl_field_t MCUTRACECTL_f;
    };
}M4_DBGC_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CTL;
        stc_dcu_ctl_field_t CTL_f;
    };
    union
    {
        __IO uint32_t FLAG;
        stc_dcu_flag_field_t FLAG_f;
    };
    __IO uint32_t DATA0;
    __IO uint32_t DATA1;
    __IO uint32_t DATA2;
    union
    {
        __IO uint32_t FLAGCLR;
        stc_dcu_flagclr_field_t FLAGCLR_f;
    };
    union
    {
        __IO uint32_t INTSEL;
        stc_dcu_intsel_field_t INTSEL_f;
    };
}M4_DCU_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t EN;
        stc_dma_en_field_t EN_f;
    };
    union
    {
        __IO uint32_t INTSTAT0;
        stc_dma_intstat0_field_t INTSTAT0_f;
    };
    union
    {
        __IO uint32_t INTSTAT1;
        stc_dma_intstat1_field_t INTSTAT1_f;
    };
    union
    {
        __IO uint32_t INTMASK0;
        stc_dma_intmask0_field_t INTMASK0_f;
    };
    union
    {
        __IO uint32_t INTMASK1;
        stc_dma_intmask1_field_t INTMASK1_f;
    };
    union
    {
        __IO uint32_t INTCLR0;
        stc_dma_intclr0_field_t INTCLR0_f;
    };
    union
    {
        __IO uint32_t INTCLR1;
        stc_dma_intclr1_field_t INTCLR1_f;
    };
    union
    {
        __IO uint32_t CHEN;
        stc_dma_chen_field_t CHEN_f;
    };
    uint8_t RESERVED8[4];
    union
    {
        __IO uint32_t CHSTAT;
        stc_dma_chstat_field_t CHSTAT_f;
    };
    uint8_t RESERVED9[4];
    union
    {
        __IO uint32_t RCFGCTL;
        stc_dma_rcfgctl_field_t RCFGCTL_f;
    };
    uint8_t RESERVED10[16];
    __IO uint32_t SAR0;
    __IO uint32_t DAR0;
    union
    {
        __IO uint32_t DTCTL0;
        stc_dma_dtctl_field_t DTCTL0_f;
    };
    union
    {
        __IO uint32_t RPT0;
        stc_dma_rpt_field_t RPT0_f;
        __IO uint32_t RPTB0;
        stc_dma_rptb_field_t RPTB0_f;
    };
    union
    {
        __IO uint32_t SNSEQCTL0;
        stc_dma_snseqctl_field_t SNSEQCTL0_f;
        __IO uint32_t SNSEQCTLB0;
        stc_dma_snseqctlb_field_t SNSEQCTLB0_f;
    };
    union
    {
        __IO uint32_t DNSEQCTL0;
        stc_dma_dnseqctl_field_t DNSEQCTL0_f;
        __IO uint32_t DNSEQCTLB0;
        stc_dma_dnseqctlb_field_t DNSEQCTLB0_f;
    };
    union
    {
        __IO uint32_t LLP0;
        stc_dma_llp_field_t LLP0_f;
    };
    union
    {
        __IO uint32_t CH0CTL;
        stc_dma_ch0ctl_field_t CH0CTL_f;
    };
    __IO uint32_t MONSAR0;
    __IO uint32_t MONDAR0;
    union
    {
        __IO uint32_t MONDTCTL0;
        stc_dma_mondtctl_field_t MONDTCTL0_f;
    };
    union
    {
        __IO uint32_t MONRPT0;
        stc_dma_monrpt_field_t MONRPT0_f;
    };
    union
    {
        __IO uint32_t MONSNSEQCTL0;
        stc_dma_monsnseqctl_field_t MONSNSEQCTL0_f;
    };
    union
    {
        __IO uint32_t MONDNSEQCTL0;
        stc_dma_mondnseqctl_field_t MONDNSEQCTL0_f;
    };
    uint8_t RESERVED27[8];
    __IO uint32_t SAR1;
    __IO uint32_t DAR1;
    union
    {
        __IO uint32_t DTCTL1;
        stc_dma_dtctl_field_t DTCTL1_f;
    };
    union
    {
        __IO uint32_t RPT1;
        stc_dma_rpt_field_t RPT1_f;
        __IO uint32_t RPTB1;
        stc_dma_rptb_field_t RPTB1_f;
    };
    union
    {
        __IO uint32_t SNSEQCTL1;
        stc_dma_snseqctl_field_t SNSEQCTL1_f;
        __IO uint32_t SNSEQCTLB1;
        stc_dma_snseqctlb_field_t SNSEQCTLB1_f;
    };
    union
    {
        __IO uint32_t DNSEQCTL1;
        stc_dma_dnseqctl_field_t DNSEQCTL1_f;
        __IO uint32_t DNSEQCTLB1;
        stc_dma_dnseqctlb_field_t DNSEQCTLB1_f;
    };
    union
    {
        __IO uint32_t LLP1;
        stc_dma_llp_field_t LLP1_f;
    };
    union
    {
        __IO uint32_t CH1CTL;
        stc_dma_ch1ctl_field_t CH1CTL_f;
    };
    __IO uint32_t MONSAR1;
    __IO uint32_t MONDAR1;
    union
    {
        __IO uint32_t MONDTCTL1;
        stc_dma_mondtctl_field_t MONDTCTL1_f;
    };
    union
    {
        __IO uint32_t MONRPT1;
        stc_dma_monrpt_field_t MONRPT1_f;
    };
    union
    {
        __IO uint32_t MONSNSEQCTL1;
        stc_dma_monsnseqctl_field_t MONSNSEQCTL1_f;
    };
    union
    {
        __IO uint32_t MONDNSEQCTL1;
        stc_dma_mondnseqctl_field_t MONDNSEQCTL1_f;
    };
    uint8_t RESERVED44[8];
    __IO uint32_t SAR2;
    __IO uint32_t DAR2;
    union
    {
        __IO uint32_t DTCTL2;
        stc_dma_dtctl_field_t DTCTL2_f;
    };
    union
    {
        __IO uint32_t RPT2;
        stc_dma_rpt_field_t RPT2_f;
        __IO uint32_t RPTB2;
        stc_dma_rptb_field_t RPTB2_f;
    };
    union
    {
        __IO uint32_t SNSEQCTL2;
        stc_dma_snseqctl_field_t SNSEQCTL2_f;
        __IO uint32_t SNSEQCTLB2;
        stc_dma_snseqctlb_field_t SNSEQCTLB2_f;
    };
    union
    {
        __IO uint32_t DNSEQCTL2;
        stc_dma_dnseqctl_field_t DNSEQCTL2_f;
        __IO uint32_t DNSEQCTLB2;
        stc_dma_dnseqctlb_field_t DNSEQCTLB2_f;
    };
    union
    {
        __IO uint32_t LLP2;
        stc_dma_llp_field_t LLP2_f;
    };
    union
    {
        __IO uint32_t CH2CTL;
        stc_dma_ch2ctl_field_t CH2CTL_f;
    };
    __IO uint32_t MONSAR2;
    __IO uint32_t MONDAR2;
    union
    {
        __IO uint32_t MONDTCTL2;
        stc_dma_mondtctl_field_t MONDTCTL2_f;
    };
    union
    {
        __IO uint32_t MONRPT2;
        stc_dma_monrpt_field_t MONRPT2_f;
    };
    union
    {
        __IO uint32_t MONSNSEQCTL2;
        stc_dma_monsnseqctl_field_t MONSNSEQCTL2_f;
    };
    union
    {
        __IO uint32_t MONDNSEQCTL2;
        stc_dma_mondnseqctl_field_t MONDNSEQCTL2_f;
    };
    uint8_t RESERVED61[8];
    __IO uint32_t SAR3;
    __IO uint32_t DAR3;
    union
    {
        __IO uint32_t DTCTL3;
        stc_dma_dtctl_field_t DTCTL3_f;
    };
    union
    {
        __IO uint32_t RPT3;
        stc_dma_rpt_field_t RPT3_f;
        __IO uint32_t RPTB3;
        stc_dma_rptb_field_t RPTB3_f;
    };
    union
    {
        __IO uint32_t SNSEQCTL3;
        stc_dma_snseqctl_field_t SNSEQCTL3_f;
        __IO uint32_t SNSEQCTLB3;
        stc_dma_snseqctlb_field_t SNSEQCTLB3_f;
    };
    union
    {
        __IO uint32_t DNSEQCTL3;
        stc_dma_dnseqctl_field_t DNSEQCTL3_f;
        __IO uint32_t DNSEQCTLB3;
        stc_dma_dnseqctlb_field_t DNSEQCTLB3_f;
    };
    union
    {
        __IO uint32_t LLP3;
        stc_dma_llp_field_t LLP3_f;
    };
    union
    {
        __IO uint32_t CH3CTL;
        stc_dma_ch3ctl_field_t CH3CTL_f;
    };
    __IO uint32_t MONSAR3;
    __IO uint32_t MONDAR3;
    union
    {
        __IO uint32_t MONDTCTL3;
        stc_dma_mondtctl_field_t MONDTCTL3_f;
    };
    union
    {
        __IO uint32_t MONRPT3;
        stc_dma_monrpt_field_t MONRPT3_f;
    };
    union
    {
        __IO uint32_t MONSNSEQCTL3;
        stc_dma_monsnseqctl_field_t MONSNSEQCTL3_f;
    };
    union
    {
        __IO uint32_t MONDNSEQCTL3;
        stc_dma_mondnseqctl_field_t MONDNSEQCTL3_f;
    };
}M4_DMA_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t FAPRT;
        stc_efm_faprt_field_t FAPRT_f;
    };
    union
    {
        __IO uint32_t FSTP;
        stc_efm_fstp_field_t FSTP_f;
    };
    union
    {
        __IO uint32_t FRMC;
        stc_efm_frmc_field_t FRMC_f;
    };
    union
    {
        __IO uint32_t FWMC;
        stc_efm_fwmc_field_t FWMC_f;
    };
    union
    {
        __IO uint32_t FSR;
        stc_efm_fsr_field_t FSR_f;
    };
    union
    {
        __IO uint32_t FSCLR;
        stc_efm_fsclr_field_t FSCLR_f;
    };
    union
    {
        __IO uint32_t FITE;
        stc_efm_fite_field_t FITE_f;
    };
    union
    {
        __IO uint32_t FSWP;
        stc_efm_fswp_field_t FSWP_f;
    };
    union
    {
        __IO uint32_t FPMTSW;
        stc_efm_fpmtsw_field_t FPMTSW_f;
    };
    union
    {
        __IO uint32_t FPMTEW;
        stc_efm_fpmtew_field_t FPMTEW_f;
    };
    uint8_t RESERVED10[40];
    __IO uint32_t UQID1;
    __IO uint32_t UQID2;
    __IO uint32_t UQID3;
    uint8_t RESERVED13[164];
    union
    {
        __IO uint32_t MMF_REMPRT;
        stc_efm_mmf_remprt_field_t MMF_REMPRT_f;
    };
    union
    {
        __IO uint32_t MMF_REMCR0;
        stc_efm_mmf_remcr0_field_t MMF_REMCR0_f;
    };
    union
    {
        __IO uint32_t MMF_REMCR1;
        stc_efm_mmf_remcr1_field_t MMF_REMCR1_f;
    };
    uint8_t RESERVED16[248];
    union
    {
        __IO uint32_t EFM_FRANDS;
        stc_efm_efm_frands_field_t EFM_FRANDS_f;
    };
}M4_EFM_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CTL;
        stc_emb_ctl_field_t CTL_f;
    };
    union
    {
        __IO uint32_t PWMLV;
        stc_emb_pwmlv_field_t PWMLV_f;
    };
    union
    {
        __IO uint32_t SOE;
        stc_emb_soe_field_t SOE_f;
    };
    union
    {
        __IO uint32_t STAT;
        stc_emb_stat_field_t STAT_f;
    };
    union
    {
        __IO uint32_t STATCLR;
        stc_emb_statclr_field_t STATCLR_f;
    };
    union
    {
        __IO uint32_t INTEN;
        stc_emb_inten_field_t INTEN_f;
    };
}M4_EMB_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t LVR;
        stc_fcm_lvr_field_t LVR_f;
    };
    union
    {
        __IO uint32_t UVR;
        stc_fcm_uvr_field_t UVR_f;
    };
    union
    {
        __IO uint32_t CNTR;
        stc_fcm_cntr_field_t CNTR_f;
    };
    union
    {
        __IO uint32_t STR;
        stc_fcm_str_field_t STR_f;
    };
    union
    {
        __IO uint32_t MCCR;
        stc_fcm_mccr_field_t MCCR_f;
    };
    union
    {
        __IO uint32_t RCCR;
        stc_fcm_rccr_field_t RCCR_f;
    };
    union
    {
        __IO uint32_t RIER;
        stc_fcm_rier_field_t RIER_f;
    };
    union
    {
        __IO uint32_t SR;
        stc_fcm_sr_field_t SR_f;
    };
    union
    {
        __IO uint32_t CLR;
        stc_fcm_clr_field_t CLR_f;
    };
}M4_FCM_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CR;
        stc_hash_cr_field_t CR_f;
    };
    uint8_t RESERVED1[12];
    __IO uint32_t HR7;
    __IO uint32_t HR6;
    __IO uint32_t HR5;
    __IO uint32_t HR4;
    __IO uint32_t HR3;
    __IO uint32_t HR2;
    __IO uint32_t HR1;
    __IO uint32_t HR0;
    uint8_t RESERVED9[16];
    __IO uint32_t DR15;
    __IO uint32_t DR14;
    __IO uint32_t DR13;
    __IO uint32_t DR12;
    __IO uint32_t DR11;
    __IO uint32_t DR10;
    __IO uint32_t DR9;
    __IO uint32_t DR8;
    __IO uint32_t DR7;
    __IO uint32_t DR6;
    __IO uint32_t DR5;
    __IO uint32_t DR4;
    __IO uint32_t DR3;
    __IO uint32_t DR2;
    __IO uint32_t DR1;
    __IO uint32_t DR0;
}M4_HASH_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CR1;
        stc_i2c_cr1_field_t CR1_f;
    };
    union
    {
        __IO uint32_t CR2;
        stc_i2c_cr2_field_t CR2_f;
    };
    union
    {
        __IO uint32_t CR3;
        stc_i2c_cr3_field_t CR3_f;
    };
    uint8_t RESERVED3[4];
    union
    {
        __IO uint32_t SLR0;
        stc_i2c_slr0_field_t SLR0_f;
    };
    union
    {
        __IO uint32_t SLR1;
        stc_i2c_slr1_field_t SLR1_f;
    };
    union
    {
        __IO uint32_t SLTR;
        stc_i2c_sltr_field_t SLTR_f;
    };
    union
    {
        __IO uint32_t SR;
        stc_i2c_sr_field_t SR_f;
    };
    union
    {
        __IO uint32_t CLR;
        stc_i2c_clr_field_t CLR_f;
    };
    union
    {
        __IO uint8_t DTR;
        stc_i2c_dtr_field_t DTR_f;
    };
    uint8_t RESERVED9[3];
    union
    {
        __IO uint8_t DRR;
        stc_i2c_drr_field_t DRR_f;
    };
    uint8_t RESERVED10[3];
    union
    {
        __IO uint32_t CCR;
        stc_i2c_ccr_field_t CCR_f;
    };
    union
    {
        __IO uint32_t FLTR;
        stc_i2c_fltr_field_t FLTR_f;
    };
}M4_I2C_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CTRL;
        stc_i2s_ctrl_field_t CTRL_f;
    };
    union
    {
        __IO uint32_t SR;
        stc_i2s_sr_field_t SR_f;
    };
    union
    {
        __IO uint32_t ER;
        stc_i2s_er_field_t ER_f;
    };
    union
    {
        __IO uint32_t CFGR;
        stc_i2s_cfgr_field_t CFGR_f;
    };
    __IO uint32_t TXBUF;
    __IO uint32_t RXBUF;
    union
    {
        __IO uint32_t PR;
        stc_i2s_pr_field_t PR_f;
    };
}M4_I2S_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t ICG0;
        stc_icg_icg0_field_t ICG0_f;
    };
    union
    {
        __IO uint32_t ICG1;
        stc_icg_icg1_field_t ICG1_f;
    };
    __IO uint32_t ICG2;
    __IO uint32_t ICG3;
    __IO uint32_t ICG4;
    __IO uint32_t ICG5;
    __IO uint32_t ICG6;
    __IO uint32_t ICG7;
}M4_ICG_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t NMICR;
        stc_intc_nmicr_field_t NMICR_f;
    };
    union
    {
        __IO uint32_t NMIENR;
        stc_intc_nmienr_field_t NMIENR_f;
    };
    union
    {
        __IO uint32_t NMIFR;
        stc_intc_nmifr_field_t NMIFR_f;
    };
    union
    {
        __IO uint32_t NMICFR;
        stc_intc_nmicfr_field_t NMICFR_f;
    };
    union
    {
        __IO uint32_t EIRQCR0;
        stc_intc_eirqcr_field_t EIRQCR0_f;
    };
    union
    {
        __IO uint32_t EIRQCR1;
        stc_intc_eirqcr_field_t EIRQCR1_f;
    };
    union
    {
        __IO uint32_t EIRQCR2;
        stc_intc_eirqcr_field_t EIRQCR2_f;
    };
    union
    {
        __IO uint32_t EIRQCR3;
        stc_intc_eirqcr_field_t EIRQCR3_f;
    };
    union
    {
        __IO uint32_t EIRQCR4;
        stc_intc_eirqcr_field_t EIRQCR4_f;
    };
    union
    {
        __IO uint32_t EIRQCR5;
        stc_intc_eirqcr_field_t EIRQCR5_f;
    };
    union
    {
        __IO uint32_t EIRQCR6;
        stc_intc_eirqcr_field_t EIRQCR6_f;
    };
    union
    {
        __IO uint32_t EIRQCR7;
        stc_intc_eirqcr_field_t EIRQCR7_f;
    };
    union
    {
        __IO uint32_t EIRQCR8;
        stc_intc_eirqcr_field_t EIRQCR8_f;
    };
    union
    {
        __IO uint32_t EIRQCR9;
        stc_intc_eirqcr_field_t EIRQCR9_f;
    };
    union
    {
        __IO uint32_t EIRQCR10;
        stc_intc_eirqcr_field_t EIRQCR10_f;
    };
    union
    {
        __IO uint32_t EIRQCR11;
        stc_intc_eirqcr_field_t EIRQCR11_f;
    };
    union
    {
        __IO uint32_t EIRQCR12;
        stc_intc_eirqcr_field_t EIRQCR12_f;
    };
    union
    {
        __IO uint32_t EIRQCR13;
        stc_intc_eirqcr_field_t EIRQCR13_f;
    };
    union
    {
        __IO uint32_t EIRQCR14;
        stc_intc_eirqcr_field_t EIRQCR14_f;
    };
    union
    {
        __IO uint32_t EIRQCR15;
        stc_intc_eirqcr_field_t EIRQCR15_f;
    };
    union
    {
        __IO uint32_t WUPEN;
        stc_intc_wupen_field_t WUPEN_f;
    };
    union
    {
        __IO uint32_t EIFR;
        stc_intc_eifr_field_t EIFR_f;
    };
    union
    {
        __IO uint32_t EICFR;
        stc_intc_eicfr_field_t EICFR_f;
    };
    union
    {
        __IO uint32_t SEL0;
        stc_intc_sel_field_t SEL0_f;
    };
    union
    {
        __IO uint32_t SEL1;
        stc_intc_sel_field_t SEL1_f;
    };
    union
    {
        __IO uint32_t SEL2;
        stc_intc_sel_field_t SEL2_f;
    };
    union
    {
        __IO uint32_t SEL3;
        stc_intc_sel_field_t SEL3_f;
    };
    union
    {
        __IO uint32_t SEL4;
        stc_intc_sel_field_t SEL4_f;
    };
    union
    {
        __IO uint32_t SEL5;
        stc_intc_sel_field_t SEL5_f;
    };
    union
    {
        __IO uint32_t SEL6;
        stc_intc_sel_field_t SEL6_f;
    };
    union
    {
        __IO uint32_t SEL7;
        stc_intc_sel_field_t SEL7_f;
    };
    union
    {
        __IO uint32_t SEL8;
        stc_intc_sel_field_t SEL8_f;
    };
    union
    {
        __IO uint32_t SEL9;
        stc_intc_sel_field_t SEL9_f;
    };
    union
    {
        __IO uint32_t SEL10;
        stc_intc_sel_field_t SEL10_f;
    };
    union
    {
        __IO uint32_t SEL11;
        stc_intc_sel_field_t SEL11_f;
    };
    union
    {
        __IO uint32_t SEL12;
        stc_intc_sel_field_t SEL12_f;
    };
    union
    {
        __IO uint32_t SEL13;
        stc_intc_sel_field_t SEL13_f;
    };
    union
    {
        __IO uint32_t SEL14;
        stc_intc_sel_field_t SEL14_f;
    };
    union
    {
        __IO uint32_t SEL15;
        stc_intc_sel_field_t SEL15_f;
    };
    union
    {
        __IO uint32_t SEL16;
        stc_intc_sel_field_t SEL16_f;
    };
    union
    {
        __IO uint32_t SEL17;
        stc_intc_sel_field_t SEL17_f;
    };
    union
    {
        __IO uint32_t SEL18;
        stc_intc_sel_field_t SEL18_f;
    };
    union
    {
        __IO uint32_t SEL19;
        stc_intc_sel_field_t SEL19_f;
    };
    union
    {
        __IO uint32_t SEL20;
        stc_intc_sel_field_t SEL20_f;
    };
    union
    {
        __IO uint32_t SEL21;
        stc_intc_sel_field_t SEL21_f;
    };
    union
    {
        __IO uint32_t SEL22;
        stc_intc_sel_field_t SEL22_f;
    };
    union
    {
        __IO uint32_t SEL23;
        stc_intc_sel_field_t SEL23_f;
    };
    union
    {
        __IO uint32_t SEL24;
        stc_intc_sel_field_t SEL24_f;
    };
    union
    {
        __IO uint32_t SEL25;
        stc_intc_sel_field_t SEL25_f;
    };
    union
    {
        __IO uint32_t SEL26;
        stc_intc_sel_field_t SEL26_f;
    };
    union
    {
        __IO uint32_t SEL27;
        stc_intc_sel_field_t SEL27_f;
    };
    union
    {
        __IO uint32_t SEL28;
        stc_intc_sel_field_t SEL28_f;
    };
    union
    {
        __IO uint32_t SEL29;
        stc_intc_sel_field_t SEL29_f;
    };
    union
    {
        __IO uint32_t SEL30;
        stc_intc_sel_field_t SEL30_f;
    };
    union
    {
        __IO uint32_t SEL31;
        stc_intc_sel_field_t SEL31_f;
    };
    union
    {
        __IO uint32_t SEL32;
        stc_intc_sel_field_t SEL32_f;
    };
    union
    {
        __IO uint32_t SEL33;
        stc_intc_sel_field_t SEL33_f;
    };
    union
    {
        __IO uint32_t SEL34;
        stc_intc_sel_field_t SEL34_f;
    };
    union
    {
        __IO uint32_t SEL35;
        stc_intc_sel_field_t SEL35_f;
    };
    union
    {
        __IO uint32_t SEL36;
        stc_intc_sel_field_t SEL36_f;
    };
    union
    {
        __IO uint32_t SEL37;
        stc_intc_sel_field_t SEL37_f;
    };
    union
    {
        __IO uint32_t SEL38;
        stc_intc_sel_field_t SEL38_f;
    };
    union
    {
        __IO uint32_t SEL39;
        stc_intc_sel_field_t SEL39_f;
    };
    union
    {
        __IO uint32_t SEL40;
        stc_intc_sel_field_t SEL40_f;
    };
    union
    {
        __IO uint32_t SEL41;
        stc_intc_sel_field_t SEL41_f;
    };
    union
    {
        __IO uint32_t SEL42;
        stc_intc_sel_field_t SEL42_f;
    };
    union
    {
        __IO uint32_t SEL43;
        stc_intc_sel_field_t SEL43_f;
    };
    union
    {
        __IO uint32_t SEL44;
        stc_intc_sel_field_t SEL44_f;
    };
    union
    {
        __IO uint32_t SEL45;
        stc_intc_sel_field_t SEL45_f;
    };
    union
    {
        __IO uint32_t SEL46;
        stc_intc_sel_field_t SEL46_f;
    };
    union
    {
        __IO uint32_t SEL47;
        stc_intc_sel_field_t SEL47_f;
    };
    union
    {
        __IO uint32_t SEL48;
        stc_intc_sel_field_t SEL48_f;
    };
    union
    {
        __IO uint32_t SEL49;
        stc_intc_sel_field_t SEL49_f;
    };
    union
    {
        __IO uint32_t SEL50;
        stc_intc_sel_field_t SEL50_f;
    };
    union
    {
        __IO uint32_t SEL51;
        stc_intc_sel_field_t SEL51_f;
    };
    union
    {
        __IO uint32_t SEL52;
        stc_intc_sel_field_t SEL52_f;
    };
    union
    {
        __IO uint32_t SEL53;
        stc_intc_sel_field_t SEL53_f;
    };
    union
    {
        __IO uint32_t SEL54;
        stc_intc_sel_field_t SEL54_f;
    };
    union
    {
        __IO uint32_t SEL55;
        stc_intc_sel_field_t SEL55_f;
    };
    union
    {
        __IO uint32_t SEL56;
        stc_intc_sel_field_t SEL56_f;
    };
    union
    {
        __IO uint32_t SEL57;
        stc_intc_sel_field_t SEL57_f;
    };
    union
    {
        __IO uint32_t SEL58;
        stc_intc_sel_field_t SEL58_f;
    };
    union
    {
        __IO uint32_t SEL59;
        stc_intc_sel_field_t SEL59_f;
    };
    union
    {
        __IO uint32_t SEL60;
        stc_intc_sel_field_t SEL60_f;
    };
    union
    {
        __IO uint32_t SEL61;
        stc_intc_sel_field_t SEL61_f;
    };
    union
    {
        __IO uint32_t SEL62;
        stc_intc_sel_field_t SEL62_f;
    };
    union
    {
        __IO uint32_t SEL63;
        stc_intc_sel_field_t SEL63_f;
    };
    union
    {
        __IO uint32_t SEL64;
        stc_intc_sel_field_t SEL64_f;
    };
    union
    {
        __IO uint32_t SEL65;
        stc_intc_sel_field_t SEL65_f;
    };
    union
    {
        __IO uint32_t SEL66;
        stc_intc_sel_field_t SEL66_f;
    };
    union
    {
        __IO uint32_t SEL67;
        stc_intc_sel_field_t SEL67_f;
    };
    union
    {
        __IO uint32_t SEL68;
        stc_intc_sel_field_t SEL68_f;
    };
    union
    {
        __IO uint32_t SEL69;
        stc_intc_sel_field_t SEL69_f;
    };
    union
    {
        __IO uint32_t SEL70;
        stc_intc_sel_field_t SEL70_f;
    };
    union
    {
        __IO uint32_t SEL71;
        stc_intc_sel_field_t SEL71_f;
    };
    union
    {
        __IO uint32_t SEL72;
        stc_intc_sel_field_t SEL72_f;
    };
    union
    {
        __IO uint32_t SEL73;
        stc_intc_sel_field_t SEL73_f;
    };
    union
    {
        __IO uint32_t SEL74;
        stc_intc_sel_field_t SEL74_f;
    };
    union
    {
        __IO uint32_t SEL75;
        stc_intc_sel_field_t SEL75_f;
    };
    union
    {
        __IO uint32_t SEL76;
        stc_intc_sel_field_t SEL76_f;
    };
    union
    {
        __IO uint32_t SEL77;
        stc_intc_sel_field_t SEL77_f;
    };
    union
    {
        __IO uint32_t SEL78;
        stc_intc_sel_field_t SEL78_f;
    };
    union
    {
        __IO uint32_t SEL79;
        stc_intc_sel_field_t SEL79_f;
    };
    union
    {
        __IO uint32_t SEL80;
        stc_intc_sel_field_t SEL80_f;
    };
    union
    {
        __IO uint32_t SEL81;
        stc_intc_sel_field_t SEL81_f;
    };
    union
    {
        __IO uint32_t SEL82;
        stc_intc_sel_field_t SEL82_f;
    };
    union
    {
        __IO uint32_t SEL83;
        stc_intc_sel_field_t SEL83_f;
    };
    union
    {
        __IO uint32_t SEL84;
        stc_intc_sel_field_t SEL84_f;
    };
    union
    {
        __IO uint32_t SEL85;
        stc_intc_sel_field_t SEL85_f;
    };
    union
    {
        __IO uint32_t SEL86;
        stc_intc_sel_field_t SEL86_f;
    };
    union
    {
        __IO uint32_t SEL87;
        stc_intc_sel_field_t SEL87_f;
    };
    union
    {
        __IO uint32_t SEL88;
        stc_intc_sel_field_t SEL88_f;
    };
    union
    {
        __IO uint32_t SEL89;
        stc_intc_sel_field_t SEL89_f;
    };
    union
    {
        __IO uint32_t SEL90;
        stc_intc_sel_field_t SEL90_f;
    };
    union
    {
        __IO uint32_t SEL91;
        stc_intc_sel_field_t SEL91_f;
    };
    union
    {
        __IO uint32_t SEL92;
        stc_intc_sel_field_t SEL92_f;
    };
    union
    {
        __IO uint32_t SEL93;
        stc_intc_sel_field_t SEL93_f;
    };
    union
    {
        __IO uint32_t SEL94;
        stc_intc_sel_field_t SEL94_f;
    };
    union
    {
        __IO uint32_t SEL95;
        stc_intc_sel_field_t SEL95_f;
    };
    union
    {
        __IO uint32_t SEL96;
        stc_intc_sel_field_t SEL96_f;
    };
    union
    {
        __IO uint32_t SEL97;
        stc_intc_sel_field_t SEL97_f;
    };
    union
    {
        __IO uint32_t SEL98;
        stc_intc_sel_field_t SEL98_f;
    };
    union
    {
        __IO uint32_t SEL99;
        stc_intc_sel_field_t SEL99_f;
    };
    union
    {
        __IO uint32_t SEL100;
        stc_intc_sel_field_t SEL100_f;
    };
    union
    {
        __IO uint32_t SEL101;
        stc_intc_sel_field_t SEL101_f;
    };
    union
    {
        __IO uint32_t SEL102;
        stc_intc_sel_field_t SEL102_f;
    };
    union
    {
        __IO uint32_t SEL103;
        stc_intc_sel_field_t SEL103_f;
    };
    union
    {
        __IO uint32_t SEL104;
        stc_intc_sel_field_t SEL104_f;
    };
    union
    {
        __IO uint32_t SEL105;
        stc_intc_sel_field_t SEL105_f;
    };
    union
    {
        __IO uint32_t SEL106;
        stc_intc_sel_field_t SEL106_f;
    };
    union
    {
        __IO uint32_t SEL107;
        stc_intc_sel_field_t SEL107_f;
    };
    union
    {
        __IO uint32_t SEL108;
        stc_intc_sel_field_t SEL108_f;
    };
    union
    {
        __IO uint32_t SEL109;
        stc_intc_sel_field_t SEL109_f;
    };
    union
    {
        __IO uint32_t SEL110;
        stc_intc_sel_field_t SEL110_f;
    };
    union
    {
        __IO uint32_t SEL111;
        stc_intc_sel_field_t SEL111_f;
    };
    union
    {
        __IO uint32_t SEL112;
        stc_intc_sel_field_t SEL112_f;
    };
    union
    {
        __IO uint32_t SEL113;
        stc_intc_sel_field_t SEL113_f;
    };
    union
    {
        __IO uint32_t SEL114;
        stc_intc_sel_field_t SEL114_f;
    };
    union
    {
        __IO uint32_t SEL115;
        stc_intc_sel_field_t SEL115_f;
    };
    union
    {
        __IO uint32_t SEL116;
        stc_intc_sel_field_t SEL116_f;
    };
    union
    {
        __IO uint32_t SEL117;
        stc_intc_sel_field_t SEL117_f;
    };
    union
    {
        __IO uint32_t SEL118;
        stc_intc_sel_field_t SEL118_f;
    };
    union
    {
        __IO uint32_t SEL119;
        stc_intc_sel_field_t SEL119_f;
    };
    union
    {
        __IO uint32_t SEL120;
        stc_intc_sel_field_t SEL120_f;
    };
    union
    {
        __IO uint32_t SEL121;
        stc_intc_sel_field_t SEL121_f;
    };
    union
    {
        __IO uint32_t SEL122;
        stc_intc_sel_field_t SEL122_f;
    };
    union
    {
        __IO uint32_t SEL123;
        stc_intc_sel_field_t SEL123_f;
    };
    union
    {
        __IO uint32_t SEL124;
        stc_intc_sel_field_t SEL124_f;
    };
    union
    {
        __IO uint32_t SEL125;
        stc_intc_sel_field_t SEL125_f;
    };
    union
    {
        __IO uint32_t SEL126;
        stc_intc_sel_field_t SEL126_f;
    };
    union
    {
        __IO uint32_t SEL127;
        stc_intc_sel_field_t SEL127_f;
    };
    union
    {
        __IO uint32_t VSSEL128;
        stc_intc_vssel_field_t VSSEL128_f;
    };
    union
    {
        __IO uint32_t VSSEL129;
        stc_intc_vssel_field_t VSSEL129_f;
    };
    union
    {
        __IO uint32_t VSSEL130;
        stc_intc_vssel_field_t VSSEL130_f;
    };
    union
    {
        __IO uint32_t VSSEL131;
        stc_intc_vssel_field_t VSSEL131_f;
    };
    union
    {
        __IO uint32_t VSSEL132;
        stc_intc_vssel_field_t VSSEL132_f;
    };
    union
    {
        __IO uint32_t VSSEL133;
        stc_intc_vssel_field_t VSSEL133_f;
    };
    union
    {
        __IO uint32_t VSSEL134;
        stc_intc_vssel_field_t VSSEL134_f;
    };
    union
    {
        __IO uint32_t VSSEL135;
        stc_intc_vssel_field_t VSSEL135_f;
    };
    union
    {
        __IO uint32_t VSSEL136;
        stc_intc_vssel_field_t VSSEL136_f;
    };
    union
    {
        __IO uint32_t VSSEL137;
        stc_intc_vssel_field_t VSSEL137_f;
    };
    union
    {
        __IO uint32_t VSSEL138;
        stc_intc_vssel_field_t VSSEL138_f;
    };
    union
    {
        __IO uint32_t VSSEL139;
        stc_intc_vssel_field_t VSSEL139_f;
    };
    union
    {
        __IO uint32_t VSSEL140;
        stc_intc_vssel_field_t VSSEL140_f;
    };
    union
    {
        __IO uint32_t VSSEL141;
        stc_intc_vssel_field_t VSSEL141_f;
    };
    union
    {
        __IO uint32_t VSSEL142;
        stc_intc_vssel_field_t VSSEL142_f;
    };
    union
    {
        __IO uint32_t VSSEL143;
        stc_intc_vssel_field_t VSSEL143_f;
    };
    union
    {
        __IO uint32_t SWIER;
        stc_intc_swier_field_t SWIER_f;
    };
    union
    {
        __IO uint32_t EVTER;
        stc_intc_evter_field_t EVTER_f;
    };
    union
    {
        __IO uint32_t IER;
        stc_intc_ier_field_t IER_f;
    };
}M4_INTC_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t SCR;
        stc_keyscan_scr_field_t SCR_f;
    };
    union
    {
        __IO uint32_t SER;
        stc_keyscan_ser_field_t SER_f;
    };
    union
    {
        __IO uint32_t SSR;
        stc_keyscan_ssr_field_t SSR_f;
    };
}M4_KEYSCAN_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t RGD0;
        stc_mpu_rgd0_field_t RGD0_f;
    };
    union
    {
        __IO uint32_t RGD1;
        stc_mpu_rgd1_field_t RGD1_f;
    };
    union
    {
        __IO uint32_t RGD2;
        stc_mpu_rgd2_field_t RGD2_f;
    };
    union
    {
        __IO uint32_t RGD3;
        stc_mpu_rgd3_field_t RGD3_f;
    };
    union
    {
        __IO uint32_t RGD4;
        stc_mpu_rgd4_field_t RGD4_f;
    };
    union
    {
        __IO uint32_t RGD5;
        stc_mpu_rgd5_field_t RGD5_f;
    };
    union
    {
        __IO uint32_t RGD6;
        stc_mpu_rgd6_field_t RGD6_f;
    };
    union
    {
        __IO uint32_t RGD7;
        stc_mpu_rgd7_field_t RGD7_f;
    };
    union
    {
        __IO uint32_t RGD8;
        stc_mpu_rgd8_field_t RGD8_f;
    };
    union
    {
        __IO uint32_t RGD9;
        stc_mpu_rgd9_field_t RGD9_f;
    };
    union
    {
        __IO uint32_t RGD10;
        stc_mpu_rgd10_field_t RGD10_f;
    };
    union
    {
        __IO uint32_t RGD11;
        stc_mpu_rgd11_field_t RGD11_f;
    };
    union
    {
        __IO uint32_t RGD12;
        stc_mpu_rgd12_field_t RGD12_f;
    };
    union
    {
        __IO uint32_t RGD13;
        stc_mpu_rgd13_field_t RGD13_f;
    };
    union
    {
        __IO uint32_t RGD14;
        stc_mpu_rgd14_field_t RGD14_f;
    };
    union
    {
        __IO uint32_t RGD15;
        stc_mpu_rgd15_field_t RGD15_f;
    };
    union
    {
        __IO uint32_t RGCR0;
        stc_mpu_rgcr0_field_t RGCR0_f;
    };
    union
    {
        __IO uint32_t RGCR1;
        stc_mpu_rgcr1_field_t RGCR1_f;
    };
    union
    {
        __IO uint32_t RGCR2;
        stc_mpu_rgcr2_field_t RGCR2_f;
    };
    union
    {
        __IO uint32_t RGCR3;
        stc_mpu_rgcr3_field_t RGCR3_f;
    };
    union
    {
        __IO uint32_t RGCR4;
        stc_mpu_rgcr4_field_t RGCR4_f;
    };
    union
    {
        __IO uint32_t RGCR5;
        stc_mpu_rgcr5_field_t RGCR5_f;
    };
    union
    {
        __IO uint32_t RGCR6;
        stc_mpu_rgcr6_field_t RGCR6_f;
    };
    union
    {
        __IO uint32_t RGCR7;
        stc_mpu_rgcr7_field_t RGCR7_f;
    };
    union
    {
        __IO uint32_t RGCR8;
        stc_mpu_rgcr8_field_t RGCR8_f;
    };
    union
    {
        __IO uint32_t RGCR9;
        stc_mpu_rgcr9_field_t RGCR9_f;
    };
    union
    {
        __IO uint32_t RGCR10;
        stc_mpu_rgcr10_field_t RGCR10_f;
    };
    union
    {
        __IO uint32_t RGCR11;
        stc_mpu_rgcr11_field_t RGCR11_f;
    };
    union
    {
        __IO uint32_t RGCR12;
        stc_mpu_rgcr12_field_t RGCR12_f;
    };
    union
    {
        __IO uint32_t RGCR13;
        stc_mpu_rgcr13_field_t RGCR13_f;
    };
    union
    {
        __IO uint32_t RGCR14;
        stc_mpu_rgcr14_field_t RGCR14_f;
    };
    union
    {
        __IO uint32_t RGCR15;
        stc_mpu_rgcr15_field_t RGCR15_f;
    };
    union
    {
        __IO uint32_t CR;
        stc_mpu_cr_field_t CR_f;
    };
    union
    {
        __IO uint32_t SR;
        stc_mpu_sr_field_t SR_f;
    };
    union
    {
        __IO uint32_t ECLR;
        stc_mpu_eclr_field_t ECLR_f;
    };
    union
    {
        __IO uint32_t WP;
        stc_mpu_wp_field_t WP_f;
    };
}M4_MPU_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t FCG0;
        stc_mstp_fcg0_field_t FCG0_f;
    };
    union
    {
        __IO uint32_t FCG1;
        stc_mstp_fcg1_field_t FCG1_f;
    };
    union
    {
        __IO uint32_t FCG2;
        stc_mstp_fcg2_field_t FCG2_f;
    };
    union
    {
        __IO uint32_t FCG3;
        stc_mstp_fcg3_field_t FCG3_f;
    };
    union
    {
        __IO uint32_t FCG0PC;
        stc_mstp_fcg0pc_field_t FCG0PC_f;
    };
}M4_MSTP_TypeDef;

typedef struct
{
    union
    {
        __IO uint16_t CTL;
        stc_ots_ctl_field_t CTL_f;
    };
    __IO uint16_t DR1;
    __IO uint16_t DR2;
    __IO uint16_t ECR;
    union
    {
        __IO uint32_t LPR;
        stc_ots_lpr_field_t LPR_f;
    };
}M4_OTS_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t USBFS_SYCTLREG;
        stc_peric_usbfs_syctlreg_field_t USBFS_SYCTLREG_f;
    };
    union
    {
        __IO uint32_t SDIOC_SYCTLREG;
        stc_peric_sdioc_syctlreg_field_t SDIOC_SYCTLREG_f;
    };
}M4_PERIC_TypeDef;

typedef struct
{
    union
    {
        __IO uint16_t PIDRA;
        stc_port_pidr_field_t PIDRA_f;
    };
    uint8_t RESERVED1[2];
    union
    {
        __IO uint16_t PODRA;
        stc_port_podr_field_t PODRA_f;
    };
    union
    {
        __IO uint16_t POERA;
        stc_port_poer_field_t POERA_f;
    };
    union
    {
        __IO uint16_t POSRA;
        stc_port_posr_field_t POSRA_f;
    };
    union
    {
        __IO uint16_t PORRA;
        stc_port_porr_field_t PORRA_f;
    };
    union
    {
        __IO uint16_t POTRA;
        stc_port_potr_field_t POTRA_f;
    };
    uint8_t RESERVED6[2];
    union
    {
        __IO uint16_t PIDRB;
        stc_port_pidr_field_t PIDRB_f;
    };
    uint8_t RESERVED7[2];
    union
    {
        __IO uint16_t PODRB;
        stc_port_podr_field_t PODRB_f;
    };
    union
    {
        __IO uint16_t POERB;
        stc_port_poer_field_t POERB_f;
    };
    union
    {
        __IO uint16_t POSRB;
        stc_port_posr_field_t POSRB_f;
    };
    union
    {
        __IO uint16_t PORRB;
        stc_port_porr_field_t PORRB_f;
    };
    union
    {
        __IO uint16_t POTRB;
        stc_port_potr_field_t POTRB_f;
    };
    uint8_t RESERVED12[2];
    union
    {
        __IO uint16_t PIDRC;
        stc_port_pidr_field_t PIDRC_f;
    };
    uint8_t RESERVED13[2];
    union
    {
        __IO uint16_t PODRC;
        stc_port_podr_field_t PODRC_f;
    };
    union
    {
        __IO uint16_t POERC;
        stc_port_poer_field_t POERC_f;
    };
    union
    {
        __IO uint16_t POSRC;
        stc_port_posr_field_t POSRC_f;
    };
    union
    {
        __IO uint16_t PORRC;
        stc_port_porr_field_t PORRC_f;
    };
    union
    {
        __IO uint16_t POTRC;
        stc_port_potr_field_t POTRC_f;
    };
    uint8_t RESERVED18[2];
    union
    {
        __IO uint16_t PIDRD;
        stc_port_pidr_field_t PIDRD_f;
    };
    uint8_t RESERVED19[2];
    union
    {
        __IO uint16_t PODRD;
        stc_port_podr_field_t PODRD_f;
    };
    union
    {
        __IO uint16_t POERD;
        stc_port_poer_field_t POERD_f;
    };
    union
    {
        __IO uint16_t POSRD;
        stc_port_posr_field_t POSRD_f;
    };
    union
    {
        __IO uint16_t PORRD;
        stc_port_porr_field_t PORRD_f;
    };
    union
    {
        __IO uint16_t POTRD;
        stc_port_potr_field_t POTRD_f;
    };
    uint8_t RESERVED24[2];
    union
    {
        __IO uint16_t PIDRE;
        stc_port_pidr_field_t PIDRE_f;
    };
    uint8_t RESERVED25[2];
    union
    {
        __IO uint16_t PODRE;
        stc_port_podr_field_t PODRE_f;
    };
    union
    {
        __IO uint16_t POERE;
        stc_port_poer_field_t POERE_f;
    };
    union
    {
        __IO uint16_t POSRE;
        stc_port_posr_field_t POSRE_f;
    };
    union
    {
        __IO uint16_t PORRE;
        stc_port_porr_field_t PORRE_f;
    };
    union
    {
        __IO uint16_t POTRE;
        stc_port_potr_field_t POTRE_f;
    };
    uint8_t RESERVED30[2];
    union
    {
        __IO uint16_t PIDRH;
        stc_port_pidrh_field_t PIDRH_f;
    };
    uint8_t RESERVED31[2];
    union
    {
        __IO uint16_t PODRH;
        stc_port_podrh_field_t PODRH_f;
    };
    union
    {
        __IO uint16_t POERH;
        stc_port_poerh_field_t POERH_f;
    };
    union
    {
        __IO uint16_t POSRH;
        stc_port_posrh_field_t POSRH_f;
    };
    union
    {
        __IO uint16_t PORRH;
        stc_port_porrh_field_t PORRH_f;
    };
    union
    {
        __IO uint16_t POTRH;
        stc_port_potrh_field_t POTRH_f;
    };
    uint8_t RESERVED36[918];
    union
    {
        __IO uint16_t PSPCR;
        stc_port_pspcr_field_t PSPCR_f;
    };
    uint8_t RESERVED37[2];
    union
    {
        __IO uint16_t PCCR;
        stc_port_pccr_field_t PCCR_f;
    };
    union
    {
        __IO uint16_t PINAER;
        stc_port_pinaer_field_t PINAER_f;
    };
    union
    {
        __IO uint16_t PWPR;
        stc_port_pwpr_field_t PWPR_f;
    };
    uint8_t RESERVED40[2];
    union
    {
        __IO uint16_t PCRA0;
        stc_port_pcr_field_t PCRA0_f;
    };
    union
    {
        __IO uint16_t PFSRA0;
        stc_port_pfsr_field_t PFSRA0_f;
    };
    union
    {
        __IO uint16_t PCRA1;
        stc_port_pcr_field_t PCRA1_f;
    };
    union
    {
        __IO uint16_t PFSRA1;
        stc_port_pfsr_field_t PFSRA1_f;
    };
    union
    {
        __IO uint16_t PCRA2;
        stc_port_pcr_field_t PCRA2_f;
    };
    union
    {
        __IO uint16_t PFSRA2;
        stc_port_pfsr_field_t PFSRA2_f;
    };
    union
    {
        __IO uint16_t PCRA3;
        stc_port_pcr_field_t PCRA3_f;
    };
    union
    {
        __IO uint16_t PFSRA3;
        stc_port_pfsr_field_t PFSRA3_f;
    };
    union
    {
        __IO uint16_t PCRA4;
        stc_port_pcr_field_t PCRA4_f;
    };
    union
    {
        __IO uint16_t PFSRA4;
        stc_port_pfsr_field_t PFSRA4_f;
    };
    union
    {
        __IO uint16_t PCRA5;
        stc_port_pcr_field_t PCRA5_f;
    };
    union
    {
        __IO uint16_t PFSRA5;
        stc_port_pfsr_field_t PFSRA5_f;
    };
    union
    {
        __IO uint16_t PCRA6;
        stc_port_pcr_field_t PCRA6_f;
    };
    union
    {
        __IO uint16_t PFSRA6;
        stc_port_pfsr_field_t PFSRA6_f;
    };
    union
    {
        __IO uint16_t PCRA7;
        stc_port_pcr_field_t PCRA7_f;
    };
    union
    {
        __IO uint16_t PFSRA7;
        stc_port_pfsr_field_t PFSRA7_f;
    };
    union
    {
        __IO uint16_t PCRA8;
        stc_port_pcr_field_t PCRA8_f;
    };
    union
    {
        __IO uint16_t PFSRA8;
        stc_port_pfsr_field_t PFSRA8_f;
    };
    union
    {
        __IO uint16_t PCRA9;
        stc_port_pcr_field_t PCRA9_f;
    };
    union
    {
        __IO uint16_t PFSRA9;
        stc_port_pfsr_field_t PFSRA9_f;
    };
    union
    {
        __IO uint16_t PCRA10;
        stc_port_pcr_field_t PCRA10_f;
    };
    union
    {
        __IO uint16_t PFSRA10;
        stc_port_pfsr_field_t PFSRA10_f;
    };
    union
    {
        __IO uint16_t PCRA11;
        stc_port_pcr_field_t PCRA11_f;
    };
    union
    {
        __IO uint16_t PFSRA11;
        stc_port_pfsr_field_t PFSRA11_f;
    };
    union
    {
        __IO uint16_t PCRA12;
        stc_port_pcr_field_t PCRA12_f;
    };
    union
    {
        __IO uint16_t PFSRA12;
        stc_port_pfsr_field_t PFSRA12_f;
    };
    union
    {
        __IO uint16_t PCRA13;
        stc_port_pcr_field_t PCRA13_f;
    };
    union
    {
        __IO uint16_t PFSRA13;
        stc_port_pfsr_field_t PFSRA13_f;
    };
    union
    {
        __IO uint16_t PCRA14;
        stc_port_pcr_field_t PCRA14_f;
    };
    union
    {
        __IO uint16_t PFSRA14;
        stc_port_pfsr_field_t PFSRA14_f;
    };
    union
    {
        __IO uint16_t PCRA15;
        stc_port_pcr_field_t PCRA15_f;
    };
    union
    {
        __IO uint16_t PFSRA15;
        stc_port_pfsr_field_t PFSRA15_f;
    };
    union
    {
        __IO uint16_t PCRB0;
        stc_port_pcr_field_t PCRB0_f;
    };
    union
    {
        __IO uint16_t PFSRB0;
        stc_port_pfsr_field_t PFSRB0_f;
    };
    union
    {
        __IO uint16_t PCRB1;
        stc_port_pcr_field_t PCRB1_f;
    };
    union
    {
        __IO uint16_t PFSRB1;
        stc_port_pfsr_field_t PFSRB1_f;
    };
    union
    {
        __IO uint16_t PCRB2;
        stc_port_pcr_field_t PCRB2_f;
    };
    union
    {
        __IO uint16_t PFSRB2;
        stc_port_pfsr_field_t PFSRB2_f;
    };
    union
    {
        __IO uint16_t PCRB3;
        stc_port_pcr_field_t PCRB3_f;
    };
    union
    {
        __IO uint16_t PFSRB3;
        stc_port_pfsr_field_t PFSRB3_f;
    };
    union
    {
        __IO uint16_t PCRB4;
        stc_port_pcr_field_t PCRB4_f;
    };
    union
    {
        __IO uint16_t PFSRB4;
        stc_port_pfsr_field_t PFSRB4_f;
    };
    union
    {
        __IO uint16_t PCRB5;
        stc_port_pcr_field_t PCRB5_f;
    };
    union
    {
        __IO uint16_t PFSRB5;
        stc_port_pfsr_field_t PFSRB5_f;
    };
    union
    {
        __IO uint16_t PCRB6;
        stc_port_pcr_field_t PCRB6_f;
    };
    union
    {
        __IO uint16_t PFSRB6;
        stc_port_pfsr_field_t PFSRB6_f;
    };
    union
    {
        __IO uint16_t PCRB7;
        stc_port_pcr_field_t PCRB7_f;
    };
    union
    {
        __IO uint16_t PFSRB7;
        stc_port_pfsr_field_t PFSRB7_f;
    };
    union
    {
        __IO uint16_t PCRB8;
        stc_port_pcr_field_t PCRB8_f;
    };
    union
    {
        __IO uint16_t PFSRB8;
        stc_port_pfsr_field_t PFSRB8_f;
    };
    union
    {
        __IO uint16_t PCRB9;
        stc_port_pcr_field_t PCRB9_f;
    };
    union
    {
        __IO uint16_t PFSRB9;
        stc_port_pfsr_field_t PFSRB9_f;
    };
    union
    {
        __IO uint16_t PCRB10;
        stc_port_pcr_field_t PCRB10_f;
    };
    union
    {
        __IO uint16_t PFSRB10;
        stc_port_pfsr_field_t PFSRB10_f;
    };
    union
    {
        __IO uint16_t PCRB11;
        stc_port_pcr_field_t PCRB11_f;
    };
    union
    {
        __IO uint16_t PFSRB11;
        stc_port_pfsr_field_t PFSRB11_f;
    };
    union
    {
        __IO uint16_t PCRB12;
        stc_port_pcr_field_t PCRB12_f;
    };
    union
    {
        __IO uint16_t PFSRB12;
        stc_port_pfsr_field_t PFSRB12_f;
    };
    union
    {
        __IO uint16_t PCRB13;
        stc_port_pcr_field_t PCRB13_f;
    };
    union
    {
        __IO uint16_t PFSRB13;
        stc_port_pfsr_field_t PFSRB13_f;
    };
    union
    {
        __IO uint16_t PCRB14;
        stc_port_pcr_field_t PCRB14_f;
    };
    union
    {
        __IO uint16_t PFSRB14;
        stc_port_pfsr_field_t PFSRB14_f;
    };
    union
    {
        __IO uint16_t PCRB15;
        stc_port_pcr_field_t PCRB15_f;
    };
    union
    {
        __IO uint16_t PFSRB15;
        stc_port_pfsr_field_t PFSRB15_f;
    };
    union
    {
        __IO uint16_t PCRC0;
        stc_port_pcr_field_t PCRC0_f;
    };
    union
    {
        __IO uint16_t PFSRC0;
        stc_port_pfsr_field_t PFSRC0_f;
    };
    union
    {
        __IO uint16_t PCRC1;
        stc_port_pcr_field_t PCRC1_f;
    };
    union
    {
        __IO uint16_t PFSRC1;
        stc_port_pfsr_field_t PFSRC1_f;
    };
    union
    {
        __IO uint16_t PCRC2;
        stc_port_pcr_field_t PCRC2_f;
    };
    union
    {
        __IO uint16_t PFSRC2;
        stc_port_pfsr_field_t PFSRC2_f;
    };
    union
    {
        __IO uint16_t PCRC3;
        stc_port_pcr_field_t PCRC3_f;
    };
    union
    {
        __IO uint16_t PFSRC3;
        stc_port_pfsr_field_t PFSRC3_f;
    };
    union
    {
        __IO uint16_t PCRC4;
        stc_port_pcr_field_t PCRC4_f;
    };
    union
    {
        __IO uint16_t PFSRC4;
        stc_port_pfsr_field_t PFSRC4_f;
    };
    union
    {
        __IO uint16_t PCRC5;
        stc_port_pcr_field_t PCRC5_f;
    };
    union
    {
        __IO uint16_t PFSRC5;
        stc_port_pfsr_field_t PFSRC5_f;
    };
    union
    {
        __IO uint16_t PCRC6;
        stc_port_pcr_field_t PCRC6_f;
    };
    union
    {
        __IO uint16_t PFSRC6;
        stc_port_pfsr_field_t PFSRC6_f;
    };
    union
    {
        __IO uint16_t PCRC7;
        stc_port_pcr_field_t PCRC7_f;
    };
    union
    {
        __IO uint16_t PFSRC7;
        stc_port_pfsr_field_t PFSRC7_f;
    };
    union
    {
        __IO uint16_t PCRC8;
        stc_port_pcr_field_t PCRC8_f;
    };
    union
    {
        __IO uint16_t PFSRC8;
        stc_port_pfsr_field_t PFSRC8_f;
    };
    union
    {
        __IO uint16_t PCRC9;
        stc_port_pcr_field_t PCRC9_f;
    };
    union
    {
        __IO uint16_t PFSRC9;
        stc_port_pfsr_field_t PFSRC9_f;
    };
    union
    {
        __IO uint16_t PCRC10;
        stc_port_pcr_field_t PCRC10_f;
    };
    union
    {
        __IO uint16_t PFSRC10;
        stc_port_pfsr_field_t PFSRC10_f;
    };
    union
    {
        __IO uint16_t PCRC11;
        stc_port_pcr_field_t PCRC11_f;
    };
    union
    {
        __IO uint16_t PFSRC11;
        stc_port_pfsr_field_t PFSRC11_f;
    };
    union
    {
        __IO uint16_t PCRC12;
        stc_port_pcr_field_t PCRC12_f;
    };
    union
    {
        __IO uint16_t PFSRC12;
        stc_port_pfsr_field_t PFSRC12_f;
    };
    union
    {
        __IO uint16_t PCRC13;
        stc_port_pcr_field_t PCRC13_f;
    };
    union
    {
        __IO uint16_t PFSRC13;
        stc_port_pfsr_field_t PFSRC13_f;
    };
    union
    {
        __IO uint16_t PCRC14;
        stc_port_pcr_field_t PCRC14_f;
    };
    union
    {
        __IO uint16_t PFSRC14;
        stc_port_pfsr_field_t PFSRC14_f;
    };
    union
    {
        __IO uint16_t PCRC15;
        stc_port_pcr_field_t PCRC15_f;
    };
    union
    {
        __IO uint16_t PFSRC15;
        stc_port_pfsr_field_t PFSRC15_f;
    };
    union
    {
        __IO uint16_t PCRD0;
        stc_port_pcr_field_t PCRD0_f;
    };
    union
    {
        __IO uint16_t PFSRD0;
        stc_port_pfsr_field_t PFSRD0_f;
    };
    union
    {
        __IO uint16_t PCRD1;
        stc_port_pcr_field_t PCRD1_f;
    };
    union
    {
        __IO uint16_t PFSRD1;
        stc_port_pfsr_field_t PFSRD1_f;
    };
    union
    {
        __IO uint16_t PCRD2;
        stc_port_pcr_field_t PCRD2_f;
    };
    union
    {
        __IO uint16_t PFSRD2;
        stc_port_pfsr_field_t PFSRD2_f;
    };
    union
    {
        __IO uint16_t PCRD3;
        stc_port_pcr_field_t PCRD3_f;
    };
    union
    {
        __IO uint16_t PFSRD3;
        stc_port_pfsr_field_t PFSRD3_f;
    };
    union
    {
        __IO uint16_t PCRD4;
        stc_port_pcr_field_t PCRD4_f;
    };
    union
    {
        __IO uint16_t PFSRD4;
        stc_port_pfsr_field_t PFSRD4_f;
    };
    union
    {
        __IO uint16_t PCRD5;
        stc_port_pcr_field_t PCRD5_f;
    };
    union
    {
        __IO uint16_t PFSRD5;
        stc_port_pfsr_field_t PFSRD5_f;
    };
    union
    {
        __IO uint16_t PCRD6;
        stc_port_pcr_field_t PCRD6_f;
    };
    union
    {
        __IO uint16_t PFSRD6;
        stc_port_pfsr_field_t PFSRD6_f;
    };
    union
    {
        __IO uint16_t PCRD7;
        stc_port_pcr_field_t PCRD7_f;
    };
    union
    {
        __IO uint16_t PFSRD7;
        stc_port_pfsr_field_t PFSRD7_f;
    };
    union
    {
        __IO uint16_t PCRD8;
        stc_port_pcr_field_t PCRD8_f;
    };
    union
    {
        __IO uint16_t PFSRD8;
        stc_port_pfsr_field_t PFSRD8_f;
    };
    union
    {
        __IO uint16_t PCRD9;
        stc_port_pcr_field_t PCRD9_f;
    };
    union
    {
        __IO uint16_t PFSRD9;
        stc_port_pfsr_field_t PFSRD9_f;
    };
    union
    {
        __IO uint16_t PCRD10;
        stc_port_pcr_field_t PCRD10_f;
    };
    union
    {
        __IO uint16_t PFSRD10;
        stc_port_pfsr_field_t PFSRD10_f;
    };
    union
    {
        __IO uint16_t PCRD11;
        stc_port_pcr_field_t PCRD11_f;
    };
    union
    {
        __IO uint16_t PFSRD11;
        stc_port_pfsr_field_t PFSRD11_f;
    };
    union
    {
        __IO uint16_t PCRD12;
        stc_port_pcr_field_t PCRD12_f;
    };
    union
    {
        __IO uint16_t PFSRD12;
        stc_port_pfsr_field_t PFSRD12_f;
    };
    union
    {
        __IO uint16_t PCRD13;
        stc_port_pcr_field_t PCRD13_f;
    };
    union
    {
        __IO uint16_t PFSRD13;
        stc_port_pfsr_field_t PFSRD13_f;
    };
    union
    {
        __IO uint16_t PCRD14;
        stc_port_pcr_field_t PCRD14_f;
    };
    union
    {
        __IO uint16_t PFSRD14;
        stc_port_pfsr_field_t PFSRD14_f;
    };
    union
    {
        __IO uint16_t PCRD15;
        stc_port_pcr_field_t PCRD15_f;
    };
    union
    {
        __IO uint16_t PFSRD15;
        stc_port_pfsr_field_t PFSRD15_f;
    };
    union
    {
        __IO uint16_t PCRE0;
        stc_port_pcr_field_t PCRE0_f;
    };
    union
    {
        __IO uint16_t PFSRE0;
        stc_port_pfsr_field_t PFSRE0_f;
    };
    union
    {
        __IO uint16_t PCRE1;
        stc_port_pcr_field_t PCRE1_f;
    };
    union
    {
        __IO uint16_t PFSRE1;
        stc_port_pfsr_field_t PFSRE1_f;
    };
    union
    {
        __IO uint16_t PCRE2;
        stc_port_pcr_field_t PCRE2_f;
    };
    union
    {
        __IO uint16_t PFSRE2;
        stc_port_pfsr_field_t PFSRE2_f;
    };
    union
    {
        __IO uint16_t PCRE3;
        stc_port_pcr_field_t PCRE3_f;
    };
    union
    {
        __IO uint16_t PFSRE3;
        stc_port_pfsr_field_t PFSRE3_f;
    };
    union
    {
        __IO uint16_t PCRE4;
        stc_port_pcr_field_t PCRE4_f;
    };
    union
    {
        __IO uint16_t PFSRE4;
        stc_port_pfsr_field_t PFSRE4_f;
    };
    union
    {
        __IO uint16_t PCRE5;
        stc_port_pcr_field_t PCRE5_f;
    };
    union
    {
        __IO uint16_t PFSRE5;
        stc_port_pfsr_field_t PFSRE5_f;
    };
    union
    {
        __IO uint16_t PCRE6;
        stc_port_pcr_field_t PCRE6_f;
    };
    union
    {
        __IO uint16_t PFSRE6;
        stc_port_pfsr_field_t PFSRE6_f;
    };
    union
    {
        __IO uint16_t PCRE7;
        stc_port_pcr_field_t PCRE7_f;
    };
    union
    {
        __IO uint16_t PFSRE7;
        stc_port_pfsr_field_t PFSRE7_f;
    };
    union
    {
        __IO uint16_t PCRE8;
        stc_port_pcr_field_t PCRE8_f;
    };
    union
    {
        __IO uint16_t PFSRE8;
        stc_port_pfsr_field_t PFSRE8_f;
    };
    union
    {
        __IO uint16_t PCRE9;
        stc_port_pcr_field_t PCRE9_f;
    };
    union
    {
        __IO uint16_t PFSRE9;
        stc_port_pfsr_field_t PFSRE9_f;
    };
    union
    {
        __IO uint16_t PCRE10;
        stc_port_pcr_field_t PCRE10_f;
    };
    union
    {
        __IO uint16_t PFSRE10;
        stc_port_pfsr_field_t PFSRE10_f;
    };
    union
    {
        __IO uint16_t PCRE11;
        stc_port_pcr_field_t PCRE11_f;
    };
    union
    {
        __IO uint16_t PFSRE11;
        stc_port_pfsr_field_t PFSRE11_f;
    };
    union
    {
        __IO uint16_t PCRE12;
        stc_port_pcr_field_t PCRE12_f;
    };
    union
    {
        __IO uint16_t PFSRE12;
        stc_port_pfsr_field_t PFSRE12_f;
    };
    union
    {
        __IO uint16_t PCRE13;
        stc_port_pcr_field_t PCRE13_f;
    };
    union
    {
        __IO uint16_t PFSRE13;
        stc_port_pfsr_field_t PFSRE13_f;
    };
    union
    {
        __IO uint16_t PCRE14;
        stc_port_pcr_field_t PCRE14_f;
    };
    union
    {
        __IO uint16_t PFSRE14;
        stc_port_pfsr_field_t PFSRE14_f;
    };
    union
    {
        __IO uint16_t PCRE15;
        stc_port_pcr_field_t PCRE15_f;
    };
    union
    {
        __IO uint16_t PFSRE15;
        stc_port_pfsr_field_t PFSRE15_f;
    };
    union
    {
        __IO uint16_t PCRH0;
        stc_port_pcr_field_t PCRH0_f;
    };
    union
    {
        __IO uint16_t PFSRH0;
        stc_port_pfsr_field_t PFSRH0_f;
    };
    union
    {
        __IO uint16_t PCRH1;
        stc_port_pcr_field_t PCRH1_f;
    };
    union
    {
        __IO uint16_t PFSRH1;
        stc_port_pfsr_field_t PFSRH1_f;
    };
    union
    {
        __IO uint16_t PCRH2;
        stc_port_pcr_field_t PCRH2_f;
    };
    union
    {
        __IO uint16_t PFSRH2;
        stc_port_pfsr_field_t PFSRH2_f;
    };
}M4_PORT_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CR;
        stc_qspi_cr_field_t CR_f;
    };
    union
    {
        __IO uint32_t CSCR;
        stc_qspi_cscr_field_t CSCR_f;
    };
    union
    {
        __IO uint32_t FCR;
        stc_qspi_fcr_field_t FCR_f;
    };
    union
    {
        __IO uint32_t SR;
        stc_qspi_sr_field_t SR_f;
    };
    union
    {
        __IO uint32_t DCOM;
        stc_qspi_dcom_field_t DCOM_f;
    };
    union
    {
        __IO uint32_t CCMD;
        stc_qspi_ccmd_field_t CCMD_f;
    };
    union
    {
        __IO uint32_t XCMD;
        stc_qspi_xcmd_field_t XCMD_f;
    };
    uint8_t RESERVED7[8];
    union
    {
        __IO uint32_t SR2;
        stc_qspi_sr2_field_t SR2_f;
    };
    uint8_t RESERVED8[2012];
    union
    {
        __IO uint32_t EXAR;
        stc_qspi_exar_field_t EXAR_f;
    };
}M4_QSPI_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CR0;
        stc_rtc_cr0_field_t CR0_f;
    };
    union
    {
        __IO uint32_t CR1;
        stc_rtc_cr1_field_t CR1_f;
    };
    union
    {
        __IO uint32_t CR2;
        stc_rtc_cr2_field_t CR2_f;
    };
    union
    {
        __IO uint32_t CR3;
        stc_rtc_cr3_field_t CR3_f;
    };
    union
    {
        __IO uint32_t SEC;
        stc_rtc_sec_field_t SEC_f;
    };
    union
    {
        __IO uint32_t MIN;
        stc_rtc_min_field_t MIN_f;
    };
    union
    {
        __IO uint32_t HOUR;
        stc_rtc_hour_field_t HOUR_f;
    };
    union
    {
        __IO uint32_t WEEK;
        stc_rtc_week_field_t WEEK_f;
    };
    union
    {
        __IO uint32_t DAY;
        stc_rtc_day_field_t DAY_f;
    };
    union
    {
        __IO uint32_t MON;
        stc_rtc_mon_field_t MON_f;
    };
    union
    {
        __IO uint32_t YEAR;
        stc_rtc_year_field_t YEAR_f;
    };
    union
    {
        __IO uint32_t ALMMIN;
        stc_rtc_almmin_field_t ALMMIN_f;
    };
    union
    {
        __IO uint32_t ALMHOUR;
        stc_rtc_almhour_field_t ALMHOUR_f;
    };
    union
    {
        __IO uint32_t ALMWEEK;
        stc_rtc_almweek_field_t ALMWEEK_f;
    };
    union
    {
        __IO uint32_t ERRCRH;
        stc_rtc_errcrh_field_t ERRCRH_f;
    };
    union
    {
        __IO uint32_t ERRCRL;
        stc_rtc_errcrl_field_t ERRCRL_f;
    };
}M4_RTC_TypeDef;

typedef struct
{
    uint8_t RESERVED0[4];
    union
    {
        __IO uint16_t BLKSIZE;
        stc_sdioc_blksize_field_t BLKSIZE_f;
    };
    __IO uint16_t BLKCNT;
    __IO uint16_t ARG0;
    __IO uint16_t ARG1;
    union
    {
        __IO uint16_t TRANSMODE;
        stc_sdioc_transmode_field_t TRANSMODE_f;
    };
    union
    {
        __IO uint16_t CMD;
        stc_sdioc_cmd_field_t CMD_f;
    };
    __IO uint16_t RESP0;
    __IO uint16_t RESP1;
    __IO uint16_t RESP2;
    __IO uint16_t RESP3;
    __IO uint16_t RESP4;
    __IO uint16_t RESP5;
    __IO uint16_t RESP6;
    __IO uint16_t RESP7;
    __IO uint16_t BUF0;
    __IO uint16_t BUF1;
    union
    {
        __IO uint32_t PSTAT;
        stc_sdioc_pstat_field_t PSTAT_f;
    };
    union
    {
        __IO uint8_t HOSTCON;
        stc_sdioc_hostcon_field_t HOSTCON_f;
    };
    union
    {
        __IO uint8_t PWRCON;
        stc_sdioc_pwrcon_field_t PWRCON_f;
    };
    union
    {
        __IO uint8_t BLKGPCON;
        stc_sdioc_blkgpcon_field_t BLKGPCON_f;
    };
    uint8_t RESERVED20[1];
    union
    {
        __IO uint16_t CLKCON;
        stc_sdioc_clkcon_field_t CLKCON_f;
    };
    union
    {
        __IO uint8_t TOUTCON;
        stc_sdioc_toutcon_field_t TOUTCON_f;
    };
    union
    {
        __IO uint8_t SFTRST;
        stc_sdioc_sftrst_field_t SFTRST_f;
    };
    union
    {
        __IO uint16_t NORINTST;
        stc_sdioc_norintst_field_t NORINTST_f;
    };
    union
    {
        __IO uint16_t ERRINTST;
        stc_sdioc_errintst_field_t ERRINTST_f;
    };
    union
    {
        __IO uint16_t NORINTSTEN;
        stc_sdioc_norintsten_field_t NORINTSTEN_f;
    };
    union
    {
        __IO uint16_t ERRINTSTEN;
        stc_sdioc_errintsten_field_t ERRINTSTEN_f;
    };
    union
    {
        __IO uint16_t NORINTSGEN;
        stc_sdioc_norintsgen_field_t NORINTSGEN_f;
    };
    union
    {
        __IO uint16_t ERRINTSGEN;
        stc_sdioc_errintsgen_field_t ERRINTSGEN_f;
    };
    union
    {
        __IO uint16_t ATCERRST;
        stc_sdioc_atcerrst_field_t ATCERRST_f;
    };
    uint8_t RESERVED30[18];
    union
    {
        __IO uint16_t FEA;
        stc_sdioc_fea_field_t FEA_f;
    };
    union
    {
        __IO uint16_t FEE;
        stc_sdioc_fee_field_t FEE_f;
    };
}M4_SDIOC_TypeDef;

typedef struct
{
    __IO uint32_t DR;
    union
    {
        __IO uint32_t CR1;
        stc_spi_cr1_field_t CR1_f;
    };
    uint8_t RESERVED2[4];
    union
    {
        __IO uint32_t CFG1;
        stc_spi_cfg1_field_t CFG1_f;
    };
    uint8_t RESERVED3[4];
    union
    {
        __IO uint32_t SR;
        stc_spi_sr_field_t SR_f;
    };
    union
    {
        __IO uint32_t CFG2;
        stc_spi_cfg2_field_t CFG2_f;
    };
}M4_SPI_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t WTCR;
        stc_sramc_wtcr_field_t WTCR_f;
    };
    union
    {
        __IO uint32_t WTPR;
        stc_sramc_wtpr_field_t WTPR_f;
    };
    union
    {
        __IO uint32_t CKCR;
        stc_sramc_ckcr_field_t CKCR_f;
    };
    union
    {
        __IO uint32_t CKPR;
        stc_sramc_ckpr_field_t CKPR_f;
    };
    union
    {
        __IO uint32_t CKSR;
        stc_sramc_cksr_field_t CKSR_f;
    };
}M4_SRAMC_TypeDef;

typedef struct
{
    uint8_t RESERVED0[4];
    union
    {
        __IO uint32_t SR;
        stc_swdt_sr_field_t SR_f;
    };
    union
    {
        __IO uint32_t RR;
        stc_swdt_rr_field_t RR_f;
    };
}M4_SWDT_TypeDef;

typedef struct
{
    uint8_t RESERVED0[12];
    union
    {
        __IO uint16_t PWR_STPMCR;
        stc_sysreg_pwr_stpmcr_field_t PWR_STPMCR_f;
    };
    uint8_t RESERVED1[2];
    union
    {
        __IO uint16_t CMU_PERICKSEL;
        stc_sysreg_cmu_pericksel_field_t CMU_PERICKSEL_f;
    };
    union
    {
        __IO uint16_t CMU_I2SCKSEL;
        stc_sysreg_cmu_i2scksel_field_t CMU_I2SCKSEL_f;
    };
    union
    {
        __IO uint32_t PWR_RAMPC0;
        stc_sysreg_pwr_rampc0_field_t PWR_RAMPC0_f;
    };
    __IO uint16_t PWR_RAMOPM;
    uint8_t RESERVED5[2];
    union
    {
        __IO uint32_t MPU_IPPR;
        stc_sysreg_mpu_ippr_field_t MPU_IPPR_f;
    };
    union
    {
        __IO uint32_t CMU_SCFGR;
        stc_sysreg_cmu_scfgr_field_t CMU_SCFGR_f;
    };
    union
    {
        __IO uint8_t CMU_UFSCKCFGR;
        stc_sysreg_cmu_ufsckcfgr_field_t CMU_UFSCKCFGR_f;
    };
    uint8_t RESERVED8[1];
    union
    {
        __IO uint8_t CMU_CKSWR;
        stc_sysreg_cmu_ckswr_field_t CMU_CKSWR_f;
    };
    uint8_t RESERVED9[3];
    union
    {
        __IO uint8_t CMU_PLLCR;
        stc_sysreg_cmu_pllcr_field_t CMU_PLLCR_f;
    };
    uint8_t RESERVED10[3];
    union
    {
        __IO uint8_t CMU_UPLLCR;
        stc_sysreg_cmu_upllcr_field_t CMU_UPLLCR_f;
    };
    uint8_t RESERVED11[3];
    union
    {
        __IO uint8_t CMU_XTALCR;
        stc_sysreg_cmu_xtalcr_field_t CMU_XTALCR_f;
    };
    uint8_t RESERVED12[3];
    union
    {
        __IO uint8_t CMU_HRCCR;
        stc_sysreg_cmu_hrccr_field_t CMU_HRCCR_f;
    };
    uint8_t RESERVED13[1];
    union
    {
        __IO uint8_t CMU_MRCCR;
        stc_sysreg_cmu_mrccr_field_t CMU_MRCCR_f;
    };
    uint8_t RESERVED14[3];
    union
    {
        __IO uint8_t CMU_OSCSTBSR;
        stc_sysreg_cmu_oscstbsr_field_t CMU_OSCSTBSR_f;
    };
    union
    {
        __IO uint8_t CMU_MCO1CFGR;
        stc_sysreg_cmu_mco1cfgr_field_t CMU_MCO1CFGR_f;
    };
    union
    {
        __IO uint8_t CMU_MCO2CFGR;
        stc_sysreg_cmu_mco2cfgr_field_t CMU_MCO2CFGR_f;
    };
    union
    {
        __IO uint8_t CMU_TPIUCKCFGR;
        stc_sysreg_cmu_tpiuckcfgr_field_t CMU_TPIUCKCFGR_f;
    };
    union
    {
        __IO uint8_t CMU_XTALSTDCR;
        stc_sysreg_cmu_xtalstdcr_field_t CMU_XTALSTDCR_f;
    };
    union
    {
        __IO uint8_t CMU_XTALSTDSR;
        stc_sysreg_cmu_xtalstdsr_field_t CMU_XTALSTDSR_f;
    };
    uint8_t RESERVED20[31];
    __IO uint8_t CMU_MRCTRM;
    __IO uint8_t CMU_HRCTRM;
    uint8_t RESERVED22[63];
    union
    {
        __IO uint8_t CMU_XTALSTBCR;
        stc_sysreg_cmu_xtalstbcr_field_t CMU_XTALSTBCR_f;
    };
    uint8_t RESERVED23[29];
    union
    {
        __IO uint16_t RMU_RSTF0;
        stc_sysreg_rmu_rstf0_field_t RMU_RSTF0_f;
    };
    uint8_t RESERVED24[30];
    union
    {
        __IO uint8_t PWR_PVDICR;
        stc_sysreg_pwr_pvdicr_field_t PWR_PVDICR_f;
    };
    union
    {
        __IO uint8_t PWR_PVDDSR;
        stc_sysreg_pwr_pvddsr_field_t PWR_PVDDSR_f;
    };
    uint8_t RESERVED26[30];
    union
    {
        __IO uint32_t CMU_PLLCFGR;
        stc_sysreg_cmu_pllcfgr_field_t CMU_PLLCFGR_f;
    };
    union
    {
        __IO uint32_t CMU_UPLLCFGR;
        stc_sysreg_cmu_upllcfgr_field_t CMU_UPLLCFGR_f;
    };
    uint8_t RESERVED28[758];
    union
    {
        __IO uint16_t PWR_FPRC;
        stc_sysreg_pwr_fprc_field_t PWR_FPRC_f;
    };
    union
    {
        __IO uint8_t PWR_PWRC0;
        stc_sysreg_pwr_pwrc0_field_t PWR_PWRC0_f;
    };
    union
    {
        __IO uint8_t PWR_PWRC1;
        stc_sysreg_pwr_pwrc1_field_t PWR_PWRC1_f;
    };
    union
    {
        __IO uint8_t PWR_PWRC2;
        stc_sysreg_pwr_pwrc2_field_t PWR_PWRC2_f;
    };
    union
    {
        __IO uint8_t PWR_PWRC3;
        stc_sysreg_pwr_pwrc3_field_t PWR_PWRC3_f;
    };
    union
    {
        __IO uint8_t PWR_PDWKE0;
        stc_sysreg_pwr_pdwke0_field_t PWR_PDWKE0_f;
    };
    union
    {
        __IO uint8_t PWR_PDWKE1;
        stc_sysreg_pwr_pdwke1_field_t PWR_PDWKE1_f;
    };
    union
    {
        __IO uint8_t PWR_PDWKE2;
        stc_sysreg_pwr_pdwke2_field_t PWR_PDWKE2_f;
    };
    union
    {
        __IO uint8_t PWR_PDWKES;
        stc_sysreg_pwr_pdwkes_field_t PWR_PDWKES_f;
    };
    union
    {
        __IO uint8_t PWR_PDWKF0;
        stc_sysreg_pwr_pdwkf0_field_t PWR_PDWKF0_f;
    };
    union
    {
        __IO uint8_t PWR_PDWKF1;
        stc_sysreg_pwr_pdwkf1_field_t PWR_PDWKF1_f;
    };
    union
    {
        __IO uint8_t PWR_PWCMR;
        stc_sysreg_pwr_pwcmr_field_t PWR_PWCMR_f;
    };
    uint8_t RESERVED40[4];
    __IO uint8_t PWR_MDSWCR;
    union
    {
        __IO uint8_t CMU_XTALCFGR;
        stc_sysreg_cmu_xtalcfgr_field_t CMU_XTALCFGR_f;
    };
    uint8_t RESERVED42[1];
    union
    {
        __IO uint8_t PWR_PVDCR0;
        stc_sysreg_pwr_pvdcr0_field_t PWR_PVDCR0_f;
    };
    union
    {
        __IO uint8_t PWR_PVDCR1;
        stc_sysreg_pwr_pvdcr1_field_t PWR_PVDCR1_f;
    };
    union
    {
        __IO uint8_t PWR_PVDFCR;
        stc_sysreg_pwr_pvdfcr_field_t PWR_PVDFCR_f;
    };
    union
    {
        __IO uint8_t PWR_PVDLCR;
        stc_sysreg_pwr_pvdlcr_field_t PWR_PVDLCR_f;
    };
    uint8_t RESERVED46[10];
    union
    {
        __IO uint8_t CMU_XTAL32CR;
        stc_sysreg_cmu_xtal32cr_field_t CMU_XTAL32CR_f;
    };
    union
    {
        __IO uint8_t CMU_XTAL32CFGR;
        stc_sysreg_cmu_xtal32cfgr_field_t CMU_XTAL32CFGR_f;
    };
    uint8_t RESERVED48[3];
    union
    {
        __IO uint8_t CMU_XTAL32NFR;
        stc_sysreg_cmu_xtal32nfr_field_t CMU_XTAL32NFR_f;
    };
    uint8_t RESERVED49[1];
    union
    {
        __IO uint8_t CMU_LRCCR;
        stc_sysreg_cmu_lrccr_field_t CMU_LRCCR_f;
    };
    uint8_t RESERVED50[1];
    __IO uint8_t CMU_LRCTRM;
    uint8_t RESERVED51[1];
    union
    {
        __IO uint8_t PWR_XTAL32CS;
        stc_sysreg_pwr_xtal32cs_field_t PWR_XTAL32CS_f;
    };
}M4_SYSREG_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CNTAR;
        stc_tmr0_cntar_field_t CNTAR_f;
    };
    union
    {
        __IO uint32_t CNTBR;
        stc_tmr0_cntbr_field_t CNTBR_f;
    };
    union
    {
        __IO uint32_t CMPAR;
        stc_tmr0_cmpar_field_t CMPAR_f;
    };
    union
    {
        __IO uint32_t CMPBR;
        stc_tmr0_cmpbr_field_t CMPBR_f;
    };
    union
    {
        __IO uint32_t BCONR;
        stc_tmr0_bconr_field_t BCONR_f;
    };
    union
    {
        __IO uint32_t STFLR;
        stc_tmr0_stflr_field_t STFLR_f;
    };
}M4_TMR0_TypeDef;

typedef struct
{
    uint8_t RESERVED0[2];
    __IO uint16_t OCCRUH;
    uint8_t RESERVED1[2];
    __IO uint16_t OCCRUL;
    uint8_t RESERVED2[2];
    __IO uint16_t OCCRVH;
    uint8_t RESERVED3[2];
    __IO uint16_t OCCRVL;
    uint8_t RESERVED4[2];
    __IO uint16_t OCCRWH;
    uint8_t RESERVED5[2];
    __IO uint16_t OCCRWL;
    union
    {
        __IO uint16_t OCSRU;
        stc_tmr4_ocsr_field_t OCSRU_f;
    };
    union
    {
        __IO uint16_t OCERU;
        stc_tmr4_ocer_field_t OCERU_f;
    };
    union
    {
        __IO uint16_t OCSRV;
        stc_tmr4_ocsr_field_t OCSRV_f;
    };
    union
    {
        __IO uint16_t OCERV;
        stc_tmr4_ocer_field_t OCERV_f;
    };
    union
    {
        __IO uint16_t OCSRW;
        stc_tmr4_ocsr_field_t OCSRW_f;
    };
    union
    {
        __IO uint16_t OCERW;
        stc_tmr4_ocer_field_t OCERW_f;
    };
    union
    {
        __IO uint16_t OCMRHUH;
        stc_tmr4_ocmrh_field_t OCMRHUH_f;
    };
    uint8_t RESERVED13[2];
    union
    {
        __IO uint32_t OCMRLUL;
        stc_tmr4_ocmrl_field_t OCMRLUL_f;
    };
    union
    {
        __IO uint16_t OCMRHVH;
        stc_tmr4_ocmrh_field_t OCMRHVH_f;
    };
    uint8_t RESERVED15[2];
    union
    {
        __IO uint32_t OCMRLVL;
        stc_tmr4_ocmrl_field_t OCMRLVL_f;
    };
    union
    {
        __IO uint16_t OCMRHWH;
        stc_tmr4_ocmrh_field_t OCMRHWH_f;
    };
    uint8_t RESERVED17[2];
    union
    {
        __IO uint32_t OCMRLWL;
        stc_tmr4_ocmrl_field_t OCMRLWL_f;
    };
    uint8_t RESERVED18[6];
    __IO uint16_t CPSR;
    uint8_t RESERVED19[2];
    __IO uint16_t CNTR;
    union
    {
        __IO uint16_t CCSR;
        stc_tmr4_ccsr_field_t CCSR_f;
    };
    union
    {
        __IO uint16_t CVPR;
        stc_tmr4_cvpr_field_t CVPR_f;
    };
    uint8_t RESERVED22[54];
    __IO uint16_t PFSRU;
    __IO uint16_t PDARU;
    __IO uint16_t PDBRU;
    uint8_t RESERVED25[2];
    __IO uint16_t PFSRV;
    __IO uint16_t PDARV;
    __IO uint16_t PDBRV;
    uint8_t RESERVED28[2];
    __IO uint16_t PFSRW;
    __IO uint16_t PDARW;
    __IO uint16_t PDBRW;
    union
    {
        __IO uint16_t POCRU;
        stc_tmr4_pocr_field_t POCRU_f;
    };
    uint8_t RESERVED32[2];
    union
    {
        __IO uint16_t POCRV;
        stc_tmr4_pocr_field_t POCRV_f;
    };
    uint8_t RESERVED33[2];
    union
    {
        __IO uint16_t POCRW;
        stc_tmr4_pocr_field_t POCRW_f;
    };
    uint8_t RESERVED34[2];
    union
    {
        __IO uint16_t RCSR;
        stc_tmr4_rcsr_field_t RCSR_f;
    };
    uint8_t RESERVED35[12];
    __IO uint16_t SCCRUH;
    uint8_t RESERVED36[2];
    __IO uint16_t SCCRUL;
    uint8_t RESERVED37[2];
    __IO uint16_t SCCRVH;
    uint8_t RESERVED38[2];
    __IO uint16_t SCCRVL;
    uint8_t RESERVED39[2];
    __IO uint16_t SCCRWH;
    uint8_t RESERVED40[2];
    __IO uint16_t SCCRWL;
    union
    {
        __IO uint16_t SCSRUH;
        stc_tmr4_scsr_field_t SCSRUH_f;
    };
    union
    {
        __IO uint16_t SCMRUH;
        stc_tmr4_scmr_field_t SCMRUH_f;
    };
    union
    {
        __IO uint16_t SCSRUL;
        stc_tmr4_scsr_field_t SCSRUL_f;
    };
    union
    {
        __IO uint16_t SCMRUL;
        stc_tmr4_scmr_field_t SCMRUL_f;
    };
    union
    {
        __IO uint16_t SCSRVH;
        stc_tmr4_scsr_field_t SCSRVH_f;
    };
    union
    {
        __IO uint16_t SCMRVH;
        stc_tmr4_scmr_field_t SCMRVH_f;
    };
    union
    {
        __IO uint16_t SCSRVL;
        stc_tmr4_scsr_field_t SCSRVL_f;
    };
    union
    {
        __IO uint16_t SCMRVL;
        stc_tmr4_scmr_field_t SCMRVL_f;
    };
    union
    {
        __IO uint16_t SCSRWH;
        stc_tmr4_scsr_field_t SCSRWH_f;
    };
    union
    {
        __IO uint16_t SCMRWH;
        stc_tmr4_scmr_field_t SCMRWH_f;
    };
    union
    {
        __IO uint16_t SCSRWL;
        stc_tmr4_scsr_field_t SCSRWL_f;
    };
    union
    {
        __IO uint16_t SCMRWL;
        stc_tmr4_scmr_field_t SCMRWL_f;
    };
    uint8_t RESERVED53[16];
    union
    {
        __IO uint16_t ECSR;
        stc_tmr4_ecsr_field_t ECSR_f;
    };
}M4_TMR4_TypeDef;

typedef struct
{
    union
    {
        __IO uint16_t ECER1;
        stc_tmr4_cr_ecer1_field_t ECER1_f;
    };
    uint8_t RESERVED1[2];
    union
    {
        __IO uint16_t ECER2;
        stc_tmr4_cr_ecer2_field_t ECER2_f;
    };
    uint8_t RESERVED2[2];
    union
    {
        __IO uint16_t ECER3;
        stc_tmr4_cr_ecer3_field_t ECER3_f;
    };
}M4_TMR4_CR_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CNTER;
        stc_tmr6_cnter_field_t CNTER_f;
    };
    union
    {
        __IO uint32_t PERAR;
        stc_tmr6_perar_field_t PERAR_f;
    };
    union
    {
        __IO uint32_t PERBR;
        stc_tmr6_perbr_field_t PERBR_f;
    };
    union
    {
        __IO uint32_t PERCR;
        stc_tmr6_percr_field_t PERCR_f;
    };
    union
    {
        __IO uint32_t GCMAR;
        stc_tmr6_gcmar_field_t GCMAR_f;
    };
    union
    {
        __IO uint32_t GCMBR;
        stc_tmr6_gcmbr_field_t GCMBR_f;
    };
    union
    {
        __IO uint32_t GCMCR;
        stc_tmr6_gcmcr_field_t GCMCR_f;
    };
    union
    {
        __IO uint32_t GCMDR;
        stc_tmr6_gcmdr_field_t GCMDR_f;
    };
    union
    {
        __IO uint32_t GCMER;
        stc_tmr6_gcmer_field_t GCMER_f;
    };
    union
    {
        __IO uint32_t GCMFR;
        stc_tmr6_gcmfr_field_t GCMFR_f;
    };
    union
    {
        __IO uint32_t SCMAR;
        stc_tmr6_scmar_field_t SCMAR_f;
    };
    union
    {
        __IO uint32_t SCMBR;
        stc_tmr6_scmbr_field_t SCMBR_f;
    };
    union
    {
        __IO uint32_t SCMCR;
        stc_tmr6_scmcr_field_t SCMCR_f;
    };
    union
    {
        __IO uint32_t SCMDR;
        stc_tmr6_scmdr_field_t SCMDR_f;
    };
    union
    {
        __IO uint32_t SCMER;
        stc_tmr6_scmer_field_t SCMER_f;
    };
    union
    {
        __IO uint32_t SCMFR;
        stc_tmr6_scmfr_field_t SCMFR_f;
    };
    union
    {
        __IO uint32_t DTUAR;
        stc_tmr6_dtuar_field_t DTUAR_f;
    };
    union
    {
        __IO uint32_t DTDAR;
        stc_tmr6_dtdar_field_t DTDAR_f;
    };
    union
    {
        __IO uint32_t DTUBR;
        stc_tmr6_dtubr_field_t DTUBR_f;
    };
    union
    {
        __IO uint32_t DTDBR;
        stc_tmr6_dtdbr_field_t DTDBR_f;
    };
    union
    {
        __IO uint32_t GCONR;
        stc_tmr6_gconr_field_t GCONR_f;
    };
    union
    {
        __IO uint32_t ICONR;
        stc_tmr6_iconr_field_t ICONR_f;
    };
    union
    {
        __IO uint32_t PCONR;
        stc_tmr6_pconr_field_t PCONR_f;
    };
    union
    {
        __IO uint32_t BCONR;
        stc_tmr6_bconr_field_t BCONR_f;
    };
    union
    {
        __IO uint32_t DCONR;
        stc_tmr6_dconr_field_t DCONR_f;
    };
    uint8_t RESERVED25[4];
    union
    {
        __IO uint32_t FCONR;
        stc_tmr6_fconr_field_t FCONR_f;
    };
    union
    {
        __IO uint32_t VPERR;
        stc_tmr6_vperr_field_t VPERR_f;
    };
    union
    {
        __IO uint32_t STFLR;
        stc_tmr6_stflr_field_t STFLR_f;
    };
    union
    {
        __IO uint32_t HSTAR;
        stc_tmr6_hstar_field_t HSTAR_f;
    };
    union
    {
        __IO uint32_t HSTPR;
        stc_tmr6_hstpr_field_t HSTPR_f;
    };
    union
    {
        __IO uint32_t HCLRR;
        stc_tmr6_hclrr_field_t HCLRR_f;
    };
    union
    {
        __IO uint32_t HCPAR;
        stc_tmr6_hcpar_field_t HCPAR_f;
    };
    union
    {
        __IO uint32_t HCPBR;
        stc_tmr6_hcpbr_field_t HCPBR_f;
    };
    union
    {
        __IO uint32_t HCUPR;
        stc_tmr6_hcupr_field_t HCUPR_f;
    };
    union
    {
        __IO uint32_t HCDOR;
        stc_tmr6_hcdor_field_t HCDOR_f;
    };
}M4_TMR6_TypeDef;

typedef struct
{
    uint8_t RESERVED0[1012];
    union
    {
        __IO uint32_t SSTAR;
        stc_tmr6_cr_sstar_field_t SSTAR_f;
    };
    union
    {
        __IO uint32_t SSTPR;
        stc_tmr6_cr_sstpr_field_t SSTPR_f;
    };
    union
    {
        __IO uint32_t SCLRR;
        stc_tmr6_cr_sclrr_field_t SCLRR_f;
    };
}M4_TMR6_CR_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CNTER;
        stc_tmra_cnter_field_t CNTER_f;
    };
    union
    {
        __IO uint32_t PERAR;
        stc_tmra_perar_field_t PERAR_f;
    };
    uint8_t RESERVED2[56];
    union
    {
        __IO uint32_t CMPAR1;
        stc_tmra_cmpar_field_t CMPAR1_f;
    };
    union
    {
        __IO uint32_t CMPAR2;
        stc_tmra_cmpar_field_t CMPAR2_f;
    };
    union
    {
        __IO uint32_t CMPAR3;
        stc_tmra_cmpar_field_t CMPAR3_f;
    };
    union
    {
        __IO uint32_t CMPAR4;
        stc_tmra_cmpar_field_t CMPAR4_f;
    };
    union
    {
        __IO uint32_t CMPAR5;
        stc_tmra_cmpar_field_t CMPAR5_f;
    };
    union
    {
        __IO uint32_t CMPAR6;
        stc_tmra_cmpar_field_t CMPAR6_f;
    };
    union
    {
        __IO uint32_t CMPAR7;
        stc_tmra_cmpar_field_t CMPAR7_f;
    };
    union
    {
        __IO uint32_t CMPAR8;
        stc_tmra_cmpar_field_t CMPAR8_f;
    };
    uint8_t RESERVED10[32];
    union
    {
        __IO uint32_t BCSTR;
        stc_tmra_bcstr_field_t BCSTR_f;
    };
    union
    {
        __IO uint32_t HCONR;
        stc_tmra_hconr_field_t HCONR_f;
    };
    union
    {
        __IO uint32_t HCUPR;
        stc_tmra_hcupr_field_t HCUPR_f;
    };
    union
    {
        __IO uint32_t HCDOR;
        stc_tmra_hcdor_field_t HCDOR_f;
    };
    union
    {
        __IO uint32_t ICONR;
        stc_tmra_iconr_field_t ICONR_f;
    };
    union
    {
        __IO uint32_t ECONR;
        stc_tmra_econr_field_t ECONR_f;
    };
    union
    {
        __IO uint32_t FCONR;
        stc_tmra_fconr_field_t FCONR_f;
    };
    union
    {
        __IO uint32_t STFLR;
        stc_tmra_stflr_field_t STFLR_f;
    };
    uint8_t RESERVED18[32];
    union
    {
        __IO uint32_t BCONR1;
        stc_tmra_bconr_field_t BCONR1_f;
    };
    uint8_t RESERVED19[4];
    union
    {
        __IO uint32_t BCONR2;
        stc_tmra_bconr_field_t BCONR2_f;
    };
    uint8_t RESERVED20[4];
    union
    {
        __IO uint32_t BCONR3;
        stc_tmra_bconr_field_t BCONR3_f;
    };
    uint8_t RESERVED21[4];
    union
    {
        __IO uint32_t BCONR4;
        stc_tmra_bconr_field_t BCONR4_f;
    };
    uint8_t RESERVED22[36];
    union
    {
        __IO uint32_t CCONR1;
        stc_tmra_cconr_field_t CCONR1_f;
    };
    union
    {
        __IO uint32_t CCONR2;
        stc_tmra_cconr_field_t CCONR2_f;
    };
    union
    {
        __IO uint32_t CCONR3;
        stc_tmra_cconr_field_t CCONR3_f;
    };
    union
    {
        __IO uint32_t CCONR4;
        stc_tmra_cconr_field_t CCONR4_f;
    };
    union
    {
        __IO uint32_t CCONR5;
        stc_tmra_cconr_field_t CCONR5_f;
    };
    union
    {
        __IO uint32_t CCONR6;
        stc_tmra_cconr_field_t CCONR6_f;
    };
    union
    {
        __IO uint32_t CCONR7;
        stc_tmra_cconr_field_t CCONR7_f;
    };
    union
    {
        __IO uint32_t CCONR8;
        stc_tmra_cconr_field_t CCONR8_f;
    };
    uint8_t RESERVED30[32];
    union
    {
        __IO uint32_t PCONR1;
        stc_tmra_pconr_field_t PCONR1_f;
    };
    union
    {
        __IO uint32_t PCONR2;
        stc_tmra_pconr_field_t PCONR2_f;
    };
    union
    {
        __IO uint32_t PCONR3;
        stc_tmra_pconr_field_t PCONR3_f;
    };
    union
    {
        __IO uint32_t PCONR4;
        stc_tmra_pconr_field_t PCONR4_f;
    };
    union
    {
        __IO uint32_t PCONR5;
        stc_tmra_pconr_field_t PCONR5_f;
    };
    union
    {
        __IO uint32_t PCONR6;
        stc_tmra_pconr_field_t PCONR6_f;
    };
    union
    {
        __IO uint32_t PCONR7;
        stc_tmra_pconr_field_t PCONR7_f;
    };
    union
    {
        __IO uint32_t PCONR8;
        stc_tmra_pconr_field_t PCONR8_f;
    };
}M4_TMRA_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CR;
        stc_trng_cr_field_t CR_f;
    };
    union
    {
        __IO uint32_t MR;
        stc_trng_mr_field_t MR_f;
    };
    uint8_t RESERVED2[4];
    __IO uint32_t DR0;
    __IO uint32_t DR1;
}M4_TRNG_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t SR;
        stc_usart_sr_field_t SR_f;
    };
    union
    {
        __IO uint32_t DR;
        stc_usart_dr_field_t DR_f;
    };
    union
    {
        __IO uint32_t BRR;
        stc_usart_brr_field_t BRR_f;
    };
    union
    {
        __IO uint32_t CR1;
        stc_usart_cr1_field_t CR1_f;
    };
    union
    {
        __IO uint32_t CR2;
        stc_usart_cr2_field_t CR2_f;
    };
    union
    {
        __IO uint32_t CR3;
        stc_usart_cr3_field_t CR3_f;
    };
    union
    {
        __IO uint32_t PR;
        stc_usart_pr_field_t PR_f;
    };
}M4_USART_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t USBFS_GVBUSCFG;
        stc_usbfs_usbfs_gvbuscfg_field_t USBFS_GVBUSCFG_f;
    };
    uint8_t RESERVED1[4];
    union
    {
        __IO uint32_t GAHBCFG;
        stc_usbfs_gahbcfg_field_t GAHBCFG_f;
    };
    union
    {
        __IO uint32_t GUSBCFG;
        stc_usbfs_gusbcfg_field_t GUSBCFG_f;
    };
    union
    {
        __IO uint32_t GRSTCTL;
        stc_usbfs_grstctl_field_t GRSTCTL_f;
    };
    union
    {
        __IO uint32_t GINTSTS;
        stc_usbfs_gintsts_field_t GINTSTS_f;
    };
    union
    {
        __IO uint32_t GINTMSK;
        stc_usbfs_gintmsk_field_t GINTMSK_f;
    };
    union
    {
        __IO uint32_t GRXSTSR;
        stc_usbfs_grxstsr_field_t GRXSTSR_f;
    };
    union
    {
        __IO uint32_t GRXSTSP;
        stc_usbfs_grxstsp_field_t GRXSTSP_f;
    };
    union
    {
        __IO uint32_t GRXFSIZ;
        stc_usbfs_grxfsiz_field_t GRXFSIZ_f;
    };
    union
    {
        __IO uint32_t HNPTXFSIZ;
        stc_usbfs_hnptxfsiz_field_t HNPTXFSIZ_f;
    };
    union
    {
        __IO uint32_t HNPTXSTS;
        stc_usbfs_hnptxsts_field_t HNPTXSTS_f;
    };
    uint8_t RESERVED11[12];
    __IO uint32_t CID;
    uint8_t RESERVED12[192];
    union
    {
        __IO uint32_t HPTXFSIZ;
        stc_usbfs_hptxfsiz_field_t HPTXFSIZ_f;
    };
    union
    {
        __IO uint32_t DIEPTXF1;
        stc_usbfs_dieptxf_field_t DIEPTXF1_f;
    };
    union
    {
        __IO uint32_t DIEPTXF2;
        stc_usbfs_dieptxf_field_t DIEPTXF2_f;
    };
    union
    {
        __IO uint32_t DIEPTXF3;
        stc_usbfs_dieptxf_field_t DIEPTXF3_f;
    };
    union
    {
        __IO uint32_t DIEPTXF4;
        stc_usbfs_dieptxf_field_t DIEPTXF4_f;
    };
    union
    {
        __IO uint32_t DIEPTXF5;
        stc_usbfs_dieptxf_field_t DIEPTXF5_f;
    };
    uint8_t RESERVED18[744];
    union
    {
        __IO uint32_t HCFG;
        stc_usbfs_hcfg_field_t HCFG_f;
    };
    union
    {
        __IO uint32_t HFIR;
        stc_usbfs_hfir_field_t HFIR_f;
    };
    union
    {
        __IO uint32_t HFNUM;
        stc_usbfs_hfnum_field_t HFNUM_f;
    };
    uint8_t RESERVED21[4];
    union
    {
        __IO uint32_t HPTXSTS;
        stc_usbfs_hptxsts_field_t HPTXSTS_f;
    };
    union
    {
        __IO uint32_t HAINT;
        stc_usbfs_haint_field_t HAINT_f;
    };
    union
    {
        __IO uint32_t HAINTMSK;
        stc_usbfs_haintmsk_field_t HAINTMSK_f;
    };
    uint8_t RESERVED24[36];
    union
    {
        __IO uint32_t HPRT;
        stc_usbfs_hprt_field_t HPRT_f;
    };
    uint8_t RESERVED25[188];
    union
    {
        __IO uint32_t HCCHAR0;
        stc_usbfs_hcchar_field_t HCCHAR0_f;
    };
    uint8_t RESERVED26[4];
    union
    {
        __IO uint32_t HCINT0;
        stc_usbfs_hcint_field_t HCINT0_f;
    };
    union
    {
        __IO uint32_t HCINTMSK0;
        stc_usbfs_hcintmsk_field_t HCINTMSK0_f;
    };
    union
    {
        __IO uint32_t HCTSIZ0;
        stc_usbfs_hctsiz_field_t HCTSIZ0_f;
    };
    __IO uint32_t HCDMA0;
    uint8_t RESERVED30[8];
    union
    {
        __IO uint32_t HCCHAR1;
        stc_usbfs_hcchar_field_t HCCHAR1_f;
    };
    uint8_t RESERVED31[4];
    union
    {
        __IO uint32_t HCINT1;
        stc_usbfs_hcint_field_t HCINT1_f;
    };
    union
    {
        __IO uint32_t HCINTMSK1;
        stc_usbfs_hcintmsk_field_t HCINTMSK1_f;
    };
    union
    {
        __IO uint32_t HCTSIZ1;
        stc_usbfs_hctsiz_field_t HCTSIZ1_f;
    };
    __IO uint32_t HCDMA1;
    uint8_t RESERVED35[8];
    union
    {
        __IO uint32_t HCCHAR2;
        stc_usbfs_hcchar_field_t HCCHAR2_f;
    };
    uint8_t RESERVED36[4];
    union
    {
        __IO uint32_t HCINT2;
        stc_usbfs_hcint_field_t HCINT2_f;
    };
    union
    {
        __IO uint32_t HCINTMSK2;
        stc_usbfs_hcintmsk_field_t HCINTMSK2_f;
    };
    union
    {
        __IO uint32_t HCTSIZ2;
        stc_usbfs_hctsiz_field_t HCTSIZ2_f;
    };
    __IO uint32_t HCDMA2;
    uint8_t RESERVED40[8];
    union
    {
        __IO uint32_t HCCHAR3;
        stc_usbfs_hcchar_field_t HCCHAR3_f;
    };
    uint8_t RESERVED41[4];
    union
    {
        __IO uint32_t HCINT3;
        stc_usbfs_hcint_field_t HCINT3_f;
    };
    union
    {
        __IO uint32_t HCINTMSK3;
        stc_usbfs_hcintmsk_field_t HCINTMSK3_f;
    };
    union
    {
        __IO uint32_t HCTSIZ3;
        stc_usbfs_hctsiz_field_t HCTSIZ3_f;
    };
    __IO uint32_t HCDMA3;
    uint8_t RESERVED45[8];
    union
    {
        __IO uint32_t HCCHAR4;
        stc_usbfs_hcchar_field_t HCCHAR4_f;
    };
    uint8_t RESERVED46[4];
    union
    {
        __IO uint32_t HCINT4;
        stc_usbfs_hcint_field_t HCINT4_f;
    };
    union
    {
        __IO uint32_t HCINTMSK4;
        stc_usbfs_hcintmsk_field_t HCINTMSK4_f;
    };
    union
    {
        __IO uint32_t HCTSIZ4;
        stc_usbfs_hctsiz_field_t HCTSIZ4_f;
    };
    __IO uint32_t HCDMA4;
    uint8_t RESERVED50[8];
    union
    {
        __IO uint32_t HCCHAR5;
        stc_usbfs_hcchar_field_t HCCHAR5_f;
    };
    uint8_t RESERVED51[4];
    union
    {
        __IO uint32_t HCINT5;
        stc_usbfs_hcint_field_t HCINT5_f;
    };
    union
    {
        __IO uint32_t HCINTMSK5;
        stc_usbfs_hcintmsk_field_t HCINTMSK5_f;
    };
    union
    {
        __IO uint32_t HCTSIZ5;
        stc_usbfs_hctsiz_field_t HCTSIZ5_f;
    };
    __IO uint32_t HCDMA5;
    uint8_t RESERVED55[8];
    union
    {
        __IO uint32_t HCCHAR6;
        stc_usbfs_hcchar_field_t HCCHAR6_f;
    };
    uint8_t RESERVED56[4];
    union
    {
        __IO uint32_t HCINT6;
        stc_usbfs_hcint_field_t HCINT6_f;
    };
    union
    {
        __IO uint32_t HCINTMSK6;
        stc_usbfs_hcintmsk_field_t HCINTMSK6_f;
    };
    union
    {
        __IO uint32_t HCTSIZ6;
        stc_usbfs_hctsiz_field_t HCTSIZ6_f;
    };
    __IO uint32_t HCDMA6;
    uint8_t RESERVED60[8];
    union
    {
        __IO uint32_t HCCHAR7;
        stc_usbfs_hcchar_field_t HCCHAR7_f;
    };
    uint8_t RESERVED61[4];
    union
    {
        __IO uint32_t HCINT7;
        stc_usbfs_hcint_field_t HCINT7_f;
    };
    union
    {
        __IO uint32_t HCINTMSK7;
        stc_usbfs_hcintmsk_field_t HCINTMSK7_f;
    };
    union
    {
        __IO uint32_t HCTSIZ7;
        stc_usbfs_hctsiz_field_t HCTSIZ7_f;
    };
    __IO uint32_t HCDMA7;
    uint8_t RESERVED65[8];
    union
    {
        __IO uint32_t HCCHAR8;
        stc_usbfs_hcchar_field_t HCCHAR8_f;
    };
    uint8_t RESERVED66[4];
    union
    {
        __IO uint32_t HCINT8;
        stc_usbfs_hcint_field_t HCINT8_f;
    };
    union
    {
        __IO uint32_t HCINTMSK8;
        stc_usbfs_hcintmsk_field_t HCINTMSK8_f;
    };
    union
    {
        __IO uint32_t HCTSIZ8;
        stc_usbfs_hctsiz_field_t HCTSIZ8_f;
    };
    __IO uint32_t HCDMA8;
    uint8_t RESERVED70[8];
    union
    {
        __IO uint32_t HCCHAR9;
        stc_usbfs_hcchar_field_t HCCHAR9_f;
    };
    uint8_t RESERVED71[4];
    union
    {
        __IO uint32_t HCINT9;
        stc_usbfs_hcint_field_t HCINT9_f;
    };
    union
    {
        __IO uint32_t HCINTMSK9;
        stc_usbfs_hcintmsk_field_t HCINTMSK9_f;
    };
    union
    {
        __IO uint32_t HCTSIZ9;
        stc_usbfs_hctsiz_field_t HCTSIZ9_f;
    };
    __IO uint32_t HCDMA9;
    uint8_t RESERVED75[8];
    union
    {
        __IO uint32_t HCCHAR10;
        stc_usbfs_hcchar_field_t HCCHAR10_f;
    };
    uint8_t RESERVED76[4];
    union
    {
        __IO uint32_t HCINT10;
        stc_usbfs_hcint_field_t HCINT10_f;
    };
    union
    {
        __IO uint32_t HCINTMSK10;
        stc_usbfs_hcintmsk_field_t HCINTMSK10_f;
    };
    union
    {
        __IO uint32_t HCTSIZ10;
        stc_usbfs_hctsiz_field_t HCTSIZ10_f;
    };
    __IO uint32_t HCDMA10;
    uint8_t RESERVED80[8];
    union
    {
        __IO uint32_t HCCHAR11;
        stc_usbfs_hcchar_field_t HCCHAR11_f;
    };
    uint8_t RESERVED81[4];
    union
    {
        __IO uint32_t HCINT11;
        stc_usbfs_hcint_field_t HCINT11_f;
    };
    union
    {
        __IO uint32_t HCINTMSK11;
        stc_usbfs_hcintmsk_field_t HCINTMSK11_f;
    };
    union
    {
        __IO uint32_t HCTSIZ11;
        stc_usbfs_hctsiz_field_t HCTSIZ11_f;
    };
    __IO uint32_t HCDMA11;
    uint8_t RESERVED85[392];
    union
    {
        __IO uint32_t DCFG;
        stc_usbfs_dcfg_field_t DCFG_f;
    };
    union
    {
        __IO uint32_t DCTL;
        stc_usbfs_dctl_field_t DCTL_f;
    };
    union
    {
        __IO uint32_t DSTS;
        stc_usbfs_dsts_field_t DSTS_f;
    };
    uint8_t RESERVED88[4];
    union
    {
        __IO uint32_t DIEPMSK;
        stc_usbfs_diepmsk_field_t DIEPMSK_f;
    };
    union
    {
        __IO uint32_t DOEPMSK;
        stc_usbfs_doepmsk_field_t DOEPMSK_f;
    };
    union
    {
        __IO uint32_t DAINT;
        stc_usbfs_daint_field_t DAINT_f;
    };
    union
    {
        __IO uint32_t DAINTMSK;
        stc_usbfs_daintmsk_field_t DAINTMSK_f;
    };
    uint8_t RESERVED92[20];
    union
    {
        __IO uint32_t DIEPEMPMSK;
        stc_usbfs_diepempmsk_field_t DIEPEMPMSK_f;
    };
    uint8_t RESERVED93[200];
    union
    {
        __IO uint32_t DIEPCTL0;
        stc_usbfs_diepctl0_field_t DIEPCTL0_f;
    };
    uint8_t RESERVED94[4];
    union
    {
        __IO uint32_t DIEPINT0;
        stc_usbfs_diepint0_field_t DIEPINT0_f;
    };
    uint8_t RESERVED95[4];
    union
    {
        __IO uint32_t DIEPTSIZ0;
        stc_usbfs_dieptsiz0_field_t DIEPTSIZ0_f;
    };
    __IO uint32_t DIEPDMA0;
    union
    {
        __IO uint32_t DTXFSTS0;
        stc_usbfs_dtxfsts0_field_t DTXFSTS0_f;
    };
    uint8_t RESERVED98[4];
    union
    {
        __IO uint32_t DIEPCTL1;
        stc_usbfs_diepctl_field_t DIEPCTL1_f;
    };
    uint8_t RESERVED99[4];
    union
    {
        __IO uint32_t DIEPINT1;
        stc_usbfs_diepint_field_t DIEPINT1_f;
    };
    uint8_t RESERVED100[4];
    union
    {
        __IO uint32_t DIEPTSIZ1;
        stc_usbfs_dieptsiz_field_t DIEPTSIZ1_f;
    };
    __IO uint32_t DIEPDMA1;
    union
    {
        __IO uint32_t DTXFSTS1;
        stc_usbfs_dtxfsts_field_t DTXFSTS1_f;
    };
    uint8_t RESERVED103[4];
    union
    {
        __IO uint32_t DIEPCTL2;
        stc_usbfs_diepctl_field_t DIEPCTL2_f;
    };
    uint8_t RESERVED104[4];
    union
    {
        __IO uint32_t DIEPINT2;
        stc_usbfs_diepint_field_t DIEPINT2_f;
    };
    uint8_t RESERVED105[4];
    union
    {
        __IO uint32_t DIEPTSIZ2;
        stc_usbfs_dieptsiz_field_t DIEPTSIZ2_f;
    };
    __IO uint32_t DIEPDMA2;
    union
    {
        __IO uint32_t DTXFSTS2;
        stc_usbfs_dtxfsts_field_t DTXFSTS2_f;
    };
    uint8_t RESERVED108[4];
    union
    {
        __IO uint32_t DIEPCTL3;
        stc_usbfs_diepctl_field_t DIEPCTL3_f;
    };
    uint8_t RESERVED109[4];
    union
    {
        __IO uint32_t DIEPINT3;
        stc_usbfs_diepint_field_t DIEPINT3_f;
    };
    uint8_t RESERVED110[4];
    union
    {
        __IO uint32_t DIEPTSIZ3;
        stc_usbfs_dieptsiz_field_t DIEPTSIZ3_f;
    };
    __IO uint32_t DIEPDMA3;
    union
    {
        __IO uint32_t DTXFSTS3;
        stc_usbfs_dtxfsts_field_t DTXFSTS3_f;
    };
    uint8_t RESERVED113[4];
    union
    {
        __IO uint32_t DIEPCTL4;
        stc_usbfs_diepctl_field_t DIEPCTL4_f;
    };
    uint8_t RESERVED114[4];
    union
    {
        __IO uint32_t DIEPINT4;
        stc_usbfs_diepint_field_t DIEPINT4_f;
    };
    uint8_t RESERVED115[4];
    union
    {
        __IO uint32_t DIEPTSIZ4;
        stc_usbfs_dieptsiz_field_t DIEPTSIZ4_f;
    };
    __IO uint32_t DIEPDMA4;
    union
    {
        __IO uint32_t DTXFSTS4;
        stc_usbfs_dtxfsts_field_t DTXFSTS4_f;
    };
    uint8_t RESERVED118[4];
    union
    {
        __IO uint32_t DIEPCTL5;
        stc_usbfs_diepctl_field_t DIEPCTL5_f;
    };
    uint8_t RESERVED119[4];
    union
    {
        __IO uint32_t DIEPINT5;
        stc_usbfs_diepint_field_t DIEPINT5_f;
    };
    uint8_t RESERVED120[4];
    union
    {
        __IO uint32_t DIEPTSIZ5;
        stc_usbfs_dieptsiz_field_t DIEPTSIZ5_f;
    };
    __IO uint32_t DIEPDMA5;
    union
    {
        __IO uint32_t DTXFSTS5;
        stc_usbfs_dtxfsts_field_t DTXFSTS5_f;
    };
    uint8_t RESERVED123[324];
    union
    {
        __IO uint32_t DOEPCTL0;
        stc_usbfs_doepctl0_field_t DOEPCTL0_f;
    };
    uint8_t RESERVED124[4];
    union
    {
        __IO uint32_t DOEPINT0;
        stc_usbfs_doepint_field_t DOEPINT0_f;
    };
    uint8_t RESERVED125[4];
    union
    {
        __IO uint32_t DOEPTSIZ0;
        stc_usbfs_doeptsiz0_field_t DOEPTSIZ0_f;
    };
    __IO uint32_t DOEPDMA0;
    uint8_t RESERVED127[8];
    union
    {
        __IO uint32_t DOEPCTL1;
        stc_usbfs_doepctl_field_t DOEPCTL1_f;
    };
    uint8_t RESERVED128[4];
    union
    {
        __IO uint32_t DOEPINT1;
        stc_usbfs_doepint_field_t DOEPINT1_f;
    };
    uint8_t RESERVED129[4];
    union
    {
        __IO uint32_t DOEPTSIZ1;
        stc_usbfs_doeptsiz_field_t DOEPTSIZ1_f;
    };
    __IO uint32_t DOEPDMA1;
    uint8_t RESERVED131[8];
    union
    {
        __IO uint32_t DOEPCTL2;
        stc_usbfs_doepctl_field_t DOEPCTL2_f;
    };
    uint8_t RESERVED132[4];
    union
    {
        __IO uint32_t DOEPINT2;
        stc_usbfs_doepint_field_t DOEPINT2_f;
    };
    uint8_t RESERVED133[4];
    union
    {
        __IO uint32_t DOEPTSIZ2;
        stc_usbfs_doeptsiz_field_t DOEPTSIZ2_f;
    };
    __IO uint32_t DOEPDMA2;
    uint8_t RESERVED135[8];
    union
    {
        __IO uint32_t DOEPCTL3;
        stc_usbfs_doepctl_field_t DOEPCTL3_f;
    };
    uint8_t RESERVED136[4];
    union
    {
        __IO uint32_t DOEPINT3;
        stc_usbfs_doepint_field_t DOEPINT3_f;
    };
    uint8_t RESERVED137[4];
    union
    {
        __IO uint32_t DOEPTSIZ3;
        stc_usbfs_doeptsiz_field_t DOEPTSIZ3_f;
    };
    __IO uint32_t DOEPDMA3;
    uint8_t RESERVED139[8];
    union
    {
        __IO uint32_t DOEPCTL4;
        stc_usbfs_doepctl_field_t DOEPCTL4_f;
    };
    uint8_t RESERVED140[4];
    union
    {
        __IO uint32_t DOEPINT4;
        stc_usbfs_doepint_field_t DOEPINT4_f;
    };
    uint8_t RESERVED141[4];
    union
    {
        __IO uint32_t DOEPTSIZ4;
        stc_usbfs_doeptsiz_field_t DOEPTSIZ4_f;
    };
    __IO uint32_t DOEPDMA4;
    uint8_t RESERVED143[8];
    union
    {
        __IO uint32_t DOEPCTL5;
        stc_usbfs_doepctl_field_t DOEPCTL5_f;
    };
    uint8_t RESERVED144[4];
    union
    {
        __IO uint32_t DOEPINT5;
        stc_usbfs_doepint_field_t DOEPINT5_f;
    };
    uint8_t RESERVED145[4];
    union
    {
        __IO uint32_t DOEPTSIZ5;
        stc_usbfs_doeptsiz_field_t DOEPTSIZ5_f;
    };
    __IO uint32_t DOEPDMA5;
    uint8_t RESERVED147[584];
    union
    {
        __IO uint32_t PCGCCTL;
        stc_usbfs_pcgcctl_field_t PCGCCTL_f;
    };
}M4_USBFS_TypeDef;

typedef struct
{
    union
    {
        __IO uint32_t CR;
        stc_wdt_cr_field_t CR_f;
    };
    union
    {
        __IO uint32_t SR;
        stc_wdt_sr_field_t SR_f;
    };
    union
    {
        __IO uint32_t RR;
        stc_wdt_rr_field_t RR_f;
    };
}M4_WDT_TypeDef;

typedef struct
{
    union
    {
        __IO uint16_t CR;
        stc_wktm_cr_field_t CR_f;
    };
}M4_WKTM_TypeDef;



#define M4_ADC1                                 ((M4_ADC_TypeDef *)0x40040000UL)
#define M4_ADC2                                 ((M4_ADC_TypeDef *)0x40040400UL)
#define M4_AES                                  ((M4_AES_TypeDef *)0x40008000UL)
#define M4_AOS                                  ((M4_AOS_TypeDef *)0x40010800UL)
#define M4_CAN                                  ((M4_CAN_TypeDef *)0x40070400UL)
#define M4_CMP1                                 ((M4_CMP_TypeDef *)0x4004A000UL)
#define M4_CMP2                                 ((M4_CMP_TypeDef *)0x4004A010UL)
#define M4_CMP3                                 ((M4_CMP_TypeDef *)0x4004A020UL)
#define M4_CMP_CR                               ((M4_CMP_CR_TypeDef *)0x4004A000UL)
#define M4_CRC                                  ((M4_CRC_TypeDef *)0x40008C00UL)
#define M4_DBGC                                 ((M4_DBGC_TypeDef *)0xE0042000UL)
#define M4_DCU1                                 ((M4_DCU_TypeDef *)0x40052000UL)
#define M4_DCU2                                 ((M4_DCU_TypeDef *)0x40052400UL)
#define M4_DCU3                                 ((M4_DCU_TypeDef *)0x40052800UL)
#define M4_DCU4                                 ((M4_DCU_TypeDef *)0x40052C00UL)
#define M4_DMA1                                 ((M4_DMA_TypeDef *)0x40053000UL)
#define M4_DMA2                                 ((M4_DMA_TypeDef *)0x40053400UL)
#define M4_EFM                                  ((M4_EFM_TypeDef *)0x40010400UL)
#define M4_EMB1                                 ((M4_EMB_TypeDef *)0x40017C00UL)
#define M4_EMB2                                 ((M4_EMB_TypeDef *)0x40017C20UL)
#define M4_EMB3                                 ((M4_EMB_TypeDef *)0x40017C40UL)
#define M4_EMB4                                 ((M4_EMB_TypeDef *)0x40017C60UL)
#define M4_FCM                                  ((M4_FCM_TypeDef *)0x40048400UL)
#define M4_HASH                                 ((M4_HASH_TypeDef *)0x40008400UL)
#define M4_I2C1                                 ((M4_I2C_TypeDef *)0x4004E000UL)
#define M4_I2C2                                 ((M4_I2C_TypeDef *)0x4004E400UL)
#define M4_I2C3                                 ((M4_I2C_TypeDef *)0x4004E800UL)
#define M4_I2S1                                 ((M4_I2S_TypeDef *)0x4001E000UL)
#define M4_I2S2                                 ((M4_I2S_TypeDef *)0x4001E400UL)
#define M4_I2S3                                 ((M4_I2S_TypeDef *)0x40022000UL)
#define M4_I2S4                                 ((M4_I2S_TypeDef *)0x40022400UL)
#define M4_ICG                                  ((M4_ICG_TypeDef *)0x00000400UL)
#define M4_INTC                                 ((M4_INTC_TypeDef *)0x40051000UL)
#define M4_KEYSCAN                              ((M4_KEYSCAN_TypeDef *)0x40050C00UL)
#define M4_MPU                                  ((M4_MPU_TypeDef *)0x40050000UL)
#define M4_MSTP                                 ((M4_MSTP_TypeDef *)0x40048000UL)
#define M4_OTS                                  ((M4_OTS_TypeDef *)0x4004A400UL)
#define M4_PERIC                                ((M4_PERIC_TypeDef *)0x40055400UL)
#define M4_PORT                                 ((M4_PORT_TypeDef *)0x40053800UL)
#define M4_QSPI                                 ((M4_QSPI_TypeDef *)0x9C000000UL)
#define M4_RTC                                  ((M4_RTC_TypeDef *)0x4004C000UL)
#define M4_SDIOC1                               ((M4_SDIOC_TypeDef *)0x4006FC00UL)
#define M4_SDIOC2                               ((M4_SDIOC_TypeDef *)0x40070000UL)
#define M4_SPI1                                 ((M4_SPI_TypeDef *)0x4001C000UL)
#define M4_SPI2                                 ((M4_SPI_TypeDef *)0x4001C400UL)
#define M4_SPI3                                 ((M4_SPI_TypeDef *)0x40020000UL)
#define M4_SPI4                                 ((M4_SPI_TypeDef *)0x40020400UL)
#define M4_SRAMC                                ((M4_SRAMC_TypeDef *)0x40050800UL)
#define M4_SWDT                                 ((M4_SWDT_TypeDef *)0x40049400UL)
#define M4_SYSREG                               ((M4_SYSREG_TypeDef *)0x40054000UL)
#define M4_TMR01                                ((M4_TMR0_TypeDef *)0x40024000UL)
#define M4_TMR02                                ((M4_TMR0_TypeDef *)0x40024400UL)
#define M4_TMR41                                ((M4_TMR4_TypeDef *)0x40017000UL)
#define M4_TMR42                                ((M4_TMR4_TypeDef *)0x40024800UL)
#define M4_TMR43                                ((M4_TMR4_TypeDef *)0x40024C00UL)
#define M4_TMR4_CR                              ((M4_TMR4_CR_TypeDef *)0x40055408UL)
#define M4_TMR61                                ((M4_TMR6_TypeDef *)0x40018000UL)
#define M4_TMR62                                ((M4_TMR6_TypeDef *)0x40018400UL)
#define M4_TMR63                                ((M4_TMR6_TypeDef *)0x40018800UL)
#define M4_TMR6_CR                              ((M4_TMR6_CR_TypeDef *)0x40018000UL)
#define M4_TMRA1                                ((M4_TMRA_TypeDef *)0x40015000UL)
#define M4_TMRA2                                ((M4_TMRA_TypeDef *)0x40015400UL)
#define M4_TMRA3                                ((M4_TMRA_TypeDef *)0x40015800UL)
#define M4_TMRA4                                ((M4_TMRA_TypeDef *)0x40015C00UL)
#define M4_TMRA5                                ((M4_TMRA_TypeDef *)0x40016000UL)
#define M4_TMRA6                                ((M4_TMRA_TypeDef *)0x40016400UL)
#define M4_TRNG                                 ((M4_TRNG_TypeDef *)0x40041000UL)
#define M4_USART1                               ((M4_USART_TypeDef *)0x4001D000UL)
#define M4_USART2                               ((M4_USART_TypeDef *)0x4001D400UL)
#define M4_USART3                               ((M4_USART_TypeDef *)0x40021000UL)
#define M4_USART4                               ((M4_USART_TypeDef *)0x40021400UL)
#define M4_USBFS                                ((M4_USBFS_TypeDef *)0x400C0000UL)
#define M4_WDT                                  ((M4_WDT_TypeDef *)0x40049000UL)
#define M4_WKTM                                 ((M4_WKTM_TypeDef *)0x4004C400UL)

//注:bM4_xxx定义放在独立文件hc32f46xb里

#ifdef __cplusplus
}
#endif


#endif /* __HC32F46X_H__ */

