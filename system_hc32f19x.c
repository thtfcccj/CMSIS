/*******************************************************************************
* Copyright (C) 2019, Huada Semiconductor Co.,Ltd All rights reserved.
*
* This software is owned and published by:
* Huada Semiconductor Co.,Ltd ("HDSC").
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
* REGARDING THE SOFTWARE (INCLUDING ANY ACOOMPANYING WRITTEN MATERIALS),
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
/** \file system_hc32f19x.c
 **
 ** System clock initialization.
 ** @link SampleGroup Some description @endlink
 **
 **   - 2019-03-01  1.0  Lux First version.
 **
 ******************************************************************************/

/******************************************************************************/
/* Include files                                                              */
/******************************************************************************/
#include "base_types.h"
#include "hc32f19x.h"
#include "system_hc32f19x.h"

//注：SYS_MHZ为全局定义

/**
 ******************************************************************************
 ** System Clock Frequency (Core Clock) Variable according CMSIS
 ******************************************************************************/
uint32_t SystemCoreClock;// = 4000000;


//add clock source.
void SystemCoreClockUpdate (void)
{
    SystemCoreClock = SYS_MHZ * 1000000;
}

/**
 ******************************************************************************
 ** \brief  对MCU未引出IO端口进行默认配置.
 **
 ** \param  none
 ** \return none
 ******************************************************************************/
static void _InitHidePin(void)
{
    uint32_t tmpReg = M0P_SYSCTRL->PERI_CLKEN0;
	
	M0P_SYSCTRL->PERI_CLKEN0_f.GPIO = 1;
	
#if defined(HC32F19xPxxx)	      //100PIN MCU	  
	M0P_GPIO->PFADS &= 0xFF4F;  ///< PF04/PF05/PF07配置为数字端口    
	
    M0P_GPIO->PFDIR	|= 0x00B0;  ///< PF04/PF05/PF07配置为端口输入	
	  
	M0P_GPIO->PFPU  |= 0x00B0;  ///< PF04/PF05/PF07配置为上拉
	
#elif defined(HC32F19xMxxx)     //80PIN MCU	  
	M0P_GPIO->PDADS &= 0x0F1F;  ///< PD05~07/PD12~15配置为数字端口	  
	M0P_GPIO->PEADS &= 0x783C;  ///< PE00/PE01/PE06~10/PE15配置为数字端口	  
	M0P_GPIO->PFADS &= 0xF9F3;  ///< PF02/PF03/PF09/PF10配置为数字端口	
    
    M0P_GPIO->PDDIR	|= 0xF0E0;  ///< PD05~07/PD12~15配置为端口输入    
	M0P_GPIO->PEDIR	|= 0x87C3;  ///< PE00/PE01/PE06~10/PE15配置为端口输入	  
	M0P_GPIO->PFDIR	|= 0x060C;  ///< PF02/PF03/PF09/PF10配置为数字端口
	
	  
	M0P_GPIO->PDPU  |= 0xF0E0;  ///< PD05~07/PD12~15配置为上拉	  
	M0P_GPIO->PEPU  |= 0x87C3;  ///< PE00/PE01/PE06~10/PE15配置为上拉	  
	M0P_GPIO->PFPU  |= 0x060C;  ///< PF02/PF03/PF09/PF10配置为数字端口
		
#elif defined(HC32F19xKxxx)     //64PIN MCU	  
	M0P_GPIO->PDADS &= 0x0004;  ///< PD00/PD01/PD03~15配置为数字端口	  
	M0P_GPIO->PEADS &= 0x0000;  ///< PE00~15配置为数字端口	  
	M0P_GPIO->PFADS &= 0xF9F3;  ///< PF02/PF03/PF09/PF10配置为数字端口	
    
	M0P_GPIO->PDDIR	|= 0xFFFB;  ///< PD00/PD01/PD03~15配置为端口输入    
	M0P_GPIO->PEDIR	|= 0xFFFF;  ///< PE00~15配置为端口输入	  
	M0P_GPIO->PFDIR	|= 0x060C;  ///< PF02/PF03/PF09/PF10配置为数字端口	
	  
	M0P_GPIO->PDPU  |= 0xFFFB;  ///< PD00/PD01/PD03~15配置为上拉	  
	M0P_GPIO->PEPU  |= 0xFFFF;  ///< PE00~15配置为上拉	  
	M0P_GPIO->PFPU  |= 0x060C;  ///< PF02/PF03/PF09/PF10配置为数字端口
		
#elif defined(HC32F19xJxxx)     //48PIN MCU	  
	M0P_GPIO->PCADS &= 0xE000;  ///< PC00~12配置为数字端口	  
	M0P_GPIO->PDADS &= 0x0000;  ///< PD00~15配置为数字端口	  
	M0P_GPIO->PEADS &= 0x0000;  ///< PE00~15配置为数字端口	  
	M0P_GPIO->PFADS &= 0xF9C3;  ///< PF02~05/PF09/PF10配置为数字端口	
    
	M0P_GPIO->PCDIR	|= 0x1FFF;  ///< PC00~12配置为端口输入    
	M0P_GPIO->PDDIR	|= 0xFFFF;  ///< PD00~15配置为端口输入    
	M0P_GPIO->PEDIR	|= 0xFFFF;  ///< PE00~15配置为端口输入	  
	M0P_GPIO->PFDIR	|= 0x063C;  ///< PF02~05/PF09/PF10配置为数字端口
	
	  
	M0P_GPIO->PCPU  |= 0x1FFF;  ///< PC00~12配置为上拉	  
	M0P_GPIO->PDPU  |= 0xFFFF;  ///< PD00~15配置为上拉	  
    M0P_GPIO->PEPU  |= 0xFFFF;  ///< PE00~15配置为上拉	  
	M0P_GPIO->PFPU  |= 0x063C;  ///< PF02~05/PF09/PF10配置为数字端口
		
#elif defined(HC32F19xFxxx)     //32PIN MCU	  
	M0P_GPIO->PAADS &= 0xFFF4;  ///< PA00/PA01/PA03配置为数字端口	  
	M0P_GPIO->PBADS &= 0x08FB;  ///< PB02/PB08~10/PB12~15配置为数字端口	  
	M0P_GPIO->PCADS &= 0xC000;  ///< PC00~13配置为数字端口	  
	M0P_GPIO->PDADS &= 0x0000;  ///< PD00~15配置为数字端口	  
	M0P_GPIO->PEADS &= 0x0000;  ///< PE00~15配置为数字端口	  
    M0P_GPIO->PFADS &= 0xF903;  ///< PF02~07/PF09/PF10配置为数字端口	
    
	M0P_GPIO->PADIR	|= 0x000B;  ///< PA00/PA01/PA03配置为端口输入    
	M0P_GPIO->PBDIR	|= 0xF704;  ///< PB02/PB08~10/PB12~15配置为端口输入    
	M0P_GPIO->PCDIR	|= 0x3FFF;  ///< PC00~13配置为端口输入    
	M0P_GPIO->PDDIR	|= 0xFFFF;  ///< PD00~15配置为端口输入    
	M0P_GPIO->PEDIR	|= 0xFFFF;  ///< PE00~15配置为端口输入	  
	M0P_GPIO->PFDIR	|= 0x06FC;  ///< PF02~07/PF09/PF10配置为数字端口	
	  
	M0P_GPIO->PAPU  |= 0x000B;  ///< PA00/PA01/PA03配置为上拉	  
	M0P_GPIO->PBPU  |= 0xF704;  ///< PB02/PB08~10/PB12~15配置为上拉	  
	M0P_GPIO->PCPU  |= 0x3FFF;  ///< PC00~13配置为上拉	  
	M0P_GPIO->PDPU  |= 0xFFFF;  ///< PD00~15配置为上拉	  
	M0P_GPIO->PEPU  |= 0xFFFF;  ///< PE00~15配置为上拉	  
	M0P_GPIO->PFPU  |= 0x06FC;  ///< PF02~07/PF09/PF10配置为数字端口
    
#endif
	
	M0P_SYSCTRL->PERI_CLKEN0 = tmpReg;
}

/**
 ******************************************************************************
 ** \brief  Setup the microcontroller system. Initialize the System and update
 ** the SystemCoreClock variable.
 **
 ** \param  none
 ** \return none
 ******************************************************************************/
void SystemInit(void)
{
  //低频默认校正
  M0P_SYSCTRL->RCL_CR_f.TRIM = (*((volatile uint16_t*) (0x00100C22ul)));
  
  // TODO load trim from flash
  //24M校准值地址：0x00100C00 - 0x00100C01
  //22.12M校准值地址：0x00100C02 - 0x00100C03
  //16M校准值地址：0x00100C04 - 0x00100C05
  //8M校准值地址：0x00100C06 - 0x00100C07
  //4M校准值地址：0x00100C08 - 0x00100C09
  //Loader 4MHz Trimming value    
  M0P_SYSCTRL->RCH_CR_f.TRIM = (*((volatile uint16_t*) (0x00100C08)));    
  #if (SYS_MHZ > 24) //PLL SUPPORT 28M to 48M step 4M
    M0P_SYSCTRL->PLL_CR_f.FRSEL = 0;//4M
    M0P_SYSCTRL->PLL_CR_f.DIVN = SYS_MHZ / 4;
    #if (SYS_MHZ >= 36)
      M0P_SYSCTRL->PLL_CR_f.FOSC = 4;
    #else
      M0P_SYSCTRL->PLL_CR_f.FOSC = 3;
    #endif
    M0P_SYSCTRL->PLL_CR_f.STARTUP = 7; 
    M0P_SYSCTRL->SYSCTRL2 = 0X5A5A;
    M0P_SYSCTRL->SYSCTRL2 = 0XA5A5;
    M0P_SYSCTRL->SYSCTRL0_f.PLL_EN = 1;
    //重配置读等待周期,根据芯片资料,超24M时每起过24M多一值
    unsigned long Data = M0P_FLASH->CR & ~0x0C;
    Data |= ((SYS_MHZ / 24) << 2);
    while(M0P_FLASH->CR != Data){
      M0P_FLASH->BYPASS = 0x5A5A;
      M0P_FLASH->BYPASS = 0xA5A5;
      M0P_FLASH->CR = Data;
    }
    //switdh to PLL
    while(M0P_SYSCTRL->PLL_CR_f.STABLE == 0){};
    M0P_SYSCTRL->SYSCTRL2 = 0X5A5A;
    M0P_SYSCTRL->SYSCTRL2 = 0XA5A5;
    M0P_SYSCTRL->SYSCTRL0_f.CLKSW = 4;
  #elif (SYS_MHZ > 4)//RCH切换频率, 由配置逐级读取校准地址值,默认系统为4M
    //降低HCLK为1/128,需先解锁才能修改
    M0P_SYSCTRL->SYSCTRL2 = 0X5A5A;
    M0P_SYSCTRL->SYSCTRL2 = 0XA5A5;
    M0P_SYSCTRL->SYSCTRL0_f.HCLK_PRS = 7; 
    //配置时钟,推荐用下述几种，其它无校准数据不准确
    M0P_SYSCTRL->RCH_CR = *((volatile uint16_t*)( 0X00100C06)); //8M
    #if (SYS_MHZ >= 16)
      M0P_SYSCTRL->RCH_CR = *((volatile uint16_t*)( 0X00100C04)); //16M
    #endif
    #if (SYS_MHZ >= 24) 
      M0P_SYSCTRL->RCH_CR = *((volatile uint16_t*)( 0X00100C00)); //24M
    #endif
    //还原HCLK为1倍,需先解锁才能修改
    M0P_SYSCTRL->SYSCTRL2 = 0X5A5A;
    M0P_SYSCTRL->SYSCTRL2 = 0XA5A5;
    M0P_SYSCTRL->SYSCTRL0_f.HCLK_PRS = 0;                                  
  #endif
  
  SystemCoreClockUpdate();
	_InitHidePin();
}


#if defined (__CC_ARM)
extern int32_t $Super$$main(void);
/* re-define main function */
int $Sub$$main(void)
{
    SystemInit();
    $Super$$main();
    return 0;
}
#elif defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
extern int32_t $Super$$main(void);
/* re-define main function */
int $Sub$$main(void)
{
    SystemInit();
    $Super$$main();
    return 0;
}
#elif defined(__ICCARM__)
extern int32_t main(void);
/* __low_level_init will auto called by IAR cstartup */
extern void __iar_data_init3(void);
int __low_level_init(void)
{
    // call IAR table copy function.
    __iar_data_init3();
    SystemInit();
    main();
    return 0;
}
#endif

