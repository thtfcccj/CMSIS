/*******************************************************************************
* Copyright (C) 2017, Huada Semiconductor Co.,Ltd All rights reserved.
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
/** \file system_hc32f030e8pa.c
 **
 ** System clock initialization.
 ** @link SampleGroup Some description @endlink
 **
 **   - 2018-03-09  1.0  Lux First version.
 **
 ******************************************************************************/

/******************************************************************************/
/* Include files                                                              */
/******************************************************************************/
#include "base_types.h"
#include "HC32f030.h"
#include "system_hc32f030e8pa.h"

//注：SYS_MHZ为全局定义

/**
 ******************************************************************************
 ** System Clock Frequency (Core Clock) Variable according CMSIS
 ******************************************************************************/
uint32_t SystemCoreClock;


//add clock source.
void SystemCoreClockUpdate (void) // Update SystemCoreClock variable
{
    SystemCoreClock = SYS_MHZ * 1000000;
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
    M0P_SYSCTRL->SYSCTRL0_f.CLK_SW5_SEL = 4;
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
 
}



