/******************************************************************************
*Copyright(C)2018, Huada Semiconductor Co.,Ltd All rights reserved.
*
* This software is owned and published by:
* Huada Semiconductor Co.,Ltd("HDSC").
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

/** \file sysctrl.c
 **
 ** Common API of sysctrl.
 ** @link SysctrlGroup Some description @endlink
 **
 **   - 2018-04-22 Lux
 **
 ******************************************************************************/

/*******************************************************************************
 * Include files
 ******************************************************************************/
#include "sysctrl.h"

//----------------------------------------内部宏或函数--------------------------
extern void SystemCoreClockUpdate (void); // Update SystemCoreClock variable

///<< 系统时钟模块的基本功能设置
///<< 注意：使能需要使用的时钟源之前，必须优先设置目标内部时钟源的TRIM值或外部时钟源的频率范围
en_result_t Sysctrl_ClkSourceEnable(en_sysctrl_clk_source_t enSource, boolean_t bFlag);

///<<外部晶振驱动配置：系统初始化Sysctrl_ClkInit()之后，可根据需要配置外部晶振的驱动能力，时钟初始化Sysctrl_ClkInit()默认为最大值;
en_result_t Sysctrl_XTHDriverCfg(en_sysctrl_xtal_driver_t enDriver);

///<<时钟稳定周期设置:系统初始化Sysctrl_ClkInit()之后，可根据需要配置时钟开启后的稳定之间，默认为最大值;
en_result_t Sysctrl_SetXTHStableTime(en_sysctrl_xth_cycle_t enCycle);
en_result_t Sysctrl_SetRCLStableTime(en_sysctrl_rcl_cycle_t enCycle);

///<<系统时钟源切换并更新系统时钟：如果需要在系统时钟初始化Sysctrl_ClkInit()之后切换主频时钟源，则使用该函数；
///<< 时钟切换前后，必须根据目标频率值设置Flash读等待周期，可配置插入周期为0、1、2，
///<< 注意!!!：当HCLK大于24MHz时，FLASH等待周期插入必须至少为1,否则程序运行可能产生未知错误
en_result_t Sysctrl_SysClkSwitch(en_sysctrl_clk_source_t enSource);

///<< 时钟分频设置:根据系统情况，单独设置HCLK、PCLK的分配值;
en_result_t Sysctrl_SetHCLKDiv(en_sysctrl_hclk_div_t enHCLKDiv);
en_result_t Sysctrl_SetPCLKDiv(en_sysctrl_pclk_div_t enPCLKDiv);

/**
 *******************************************************************************
 ** \addtogroup SysctrlGroup
 ******************************************************************************/
//@{

/*******************************************************************************
 * Local pre-processor symbols/macros ('#define')
 ******************************************************************************/
#define CLK_TIMEOUT             (1000000u)

#define IS_VALID_SRC(x)         (   ClkRCH == (x)||\
                                    ClkXTH == (x)||\
                                    ClkRCL == (x)||\
                                    ClkXTL == (x) )


#define IS_VALID_FUNC(x)        (   ClkFuncWkupRCH == (x)||\
                                    ClkFuncXTHEn == (x)||\
                                    ClkFuncXTLEn == (x)||\
                                    ClkFuncXTLAWSON == (x)||\
                                    ClkFuncFaultEn == (x)||\
                                    ClkFuncRtcLPWEn == (x)||\
                                    ClkFuncLockUpEn == (x)||\
                                    ClkFuncRstPinIOEn == (x)||\
                                    ClkFuncSwdPinIOEn == (x) )

#define RC_TRIM_BASE_ADDR           ((volatile uint16_t*) (0x00100C00ul))
#define RCH_CR_TRIM_24M_VAL         (*((volatile uint16_t*) (0x00100C00ul)))
#define RCH_CR_TRIM_22_12M_VAL      (*((volatile uint16_t*) (0x00100C02ul)))
#define RCH_CR_TRIM_16M_VAL         (*((volatile uint16_t*) (0x00100C04ul)))
#define RCH_CR_TRIM_8M_VAL          (*((volatile uint16_t*) (0x00100C06ul)))
#define RCH_CR_TRIM_4M_VAL          (*((volatile uint16_t*) (0x00100C08ul)))

#define RCL_CR_TRIM_38400_VAL       (*((volatile uint16_t*) (0x00100C20ul)))
#define RCL_CR_TRIM_32768_VAL       (*((volatile uint16_t*) (0x00100C22ul)))

/*******************************************************************************
 * Global variable definitions (declared in header file with 'extern')
 ******************************************************************************/
extern uint32_t SystemCoreClock;
/*******************************************************************************
 * Local type definitions ('typedef')
 ******************************************************************************/

/*******************************************************************************
 * Local variable definitions ('static')
 ******************************************************************************/

/*******************************************************************************
 * Local function prototypes ('static')
 ******************************************************************************/


/*******************************************************************************
 * Function implementation - global ('extern') and local ('static')
 ******************************************************************************/

/**
 *******************************************************************************
 ** \brief SYSCTRL0\SYSCTRL1寄存器操作解锁
 **
 ** \retval None
 ******************************************************************************/
static void _SysctrlUnlock(void)
{
    M0P_SYSCTRL->SYSCTRL2 = 0x5A5A;
    M0P_SYSCTRL->SYSCTRL2 = 0xA5A5;
}

/**
 *******************************************************************************
 ** \brief 系统时钟源使能
 ** \param [in]  enSource   目标时钟源
 ** \param [in]  bFlag      使能1-开/0-关
 ** \retval      Ok         设定成功
 **             其他        设定失败
 ******************************************************************************/
en_result_t Sysctrl_ClkSourceEnable(en_sysctrl_clk_source_t enSource, boolean_t bFlag)
{
    en_result_t enRet = Ok;
    uint32_t u32Temp;
    
    _SysctrlUnlock();
    bFlag = !!bFlag;

    u32Temp = M0P_SYSCTRL->PERI_CLKEN;
    switch (enSource)
    {
        case SysctrlClkRCH:
            M0P_SYSCTRL->SYSCTRL0_f.RCH_EN = bFlag;
            while(bFlag && (1 != M0P_SYSCTRL->RCH_CR_f.STABLE))
            {
                ;
            }
            break;

        case SysctrlClkXTH:
            M0P_SYSCTRL->PERI_CLKEN_f.GPIO = TRUE;
            M0P_GPIO->P0ADS |= 0x06u;
            M0P_SYSCTRL->SYSCTRL0_f.XTH_EN = bFlag;
            while(bFlag && (1 != M0P_SYSCTRL->XTH_CR_f.STABLE))
            {
                ;
            }
            break;

        case SysctrlClkRCL:
            M0P_SYSCTRL->SYSCTRL0_f.RCL_EN = bFlag;
            while(bFlag && (1 != M0P_SYSCTRL->RCL_CR_f.STABLE))
            {
                ;
            }
            break;

        default:
            enRet = ErrorInvalidParameter;
            break;
    }
    M0P_SYSCTRL->PERI_CLKEN = u32Temp;
    
    return enRet;
}

/**
 *******************************************************************************
 ** \brief 外部高速晶振驱动配置
 ** \param [in]  enFreq     外部高速晶振频率范围选择
 ** \param [in]  enDriver   外部高速晶振驱动能力选择
 ** \retval      Ok         设定成功
 **             其他        设定失败
 ******************************************************************************/
en_result_t Sysctrl_XTHDriverCfg(en_sysctrl_xtal_driver_t enDriver)
{
    en_result_t enRet = Ok;

    M0P_SYSCTRL->XTH_CR_f.DRIVER   = enDriver;

    return enRet;
}

/**
 *******************************************************************************
 ** \brief 外部高速时钟稳定周期配置
 ** \param [in]  enCycle     外部高速时钟稳定周期设置
 ** \retval      Ok         设定成功
 **             其他        设定失败
 ******************************************************************************/
en_result_t Sysctrl_SetXTHStableTime(en_sysctrl_xth_cycle_t enCycle)
{
    en_result_t enRet = Ok;
    M0P_SYSCTRL->XTH_CR_f.STARTUP = enCycle;
    return enRet;
}

/**
 *******************************************************************************
 ** \brief 内部低速时钟稳定周期配置
 ** \param [in]  enCycle     内部低速时钟稳定周期设置
 ** \retval      Ok         设定成功
 **             其他        设定失败
 ******************************************************************************/
en_result_t Sysctrl_SetRCLStableTime(en_sysctrl_rcl_cycle_t enCycle)
{
    en_result_t enRet = Ok;
    M0P_SYSCTRL->RCL_CR_f.STARTUP = enCycle;
    return enRet;
}

/**
 *******************************************************************************
 ** \brief 时钟源切换，该函数执行后会开启新时钟源
 ** \note  选择时钟源之前，需根据需要配置目标时钟源的频率/驱动参数/使能时钟源等
 ** \param [in]  enSource   新时钟源
 **
 ** \retval      Ok         设定成功
 **              其他       设定失败
 ******************************************************************************/
en_result_t Sysctrl_SysClkSwitch(en_sysctrl_clk_source_t enSource)
{
    en_result_t enRet = Ok;

    en_sysctrl_clk_source_t ClkNew = enSource;

    _SysctrlUnlock();
    M0P_SYSCTRL->SYSCTRL0_f.CLKSW = ClkNew;

    //更新Core时钟（HCLK）
    SystemCoreClockUpdate();

    return enRet;
}

/**
 *******************************************************************************
 ** \brief   获得系统时钟（HCLK）频率值
 ** \retval  uint32_t         HCLK频率值
 **
 ******************************************************************************/
uint32_t Sysctrl_GetHClkFreq(void)
{
    uint32_t u32Val = 0;
    const uint32_t u32hcr_tbl[] = { 4000000, 8000000, 16000000, 22120000, 24000000};
    const uint16_t u32lcr_tbl[] = { 32768, 38400};
    en_sysctrl_clk_source_t enSrc;
    uint16_t u16Trim[5] = {0};
    u16Trim[4] = RCH_CR_TRIM_24M_VAL;
    u16Trim[3] = RCH_CR_TRIM_22_12M_VAL;
    u16Trim[2] = RCH_CR_TRIM_16M_VAL;
    u16Trim[1] = RCH_CR_TRIM_8M_VAL;
    u16Trim[0] = RCL_CR_TRIM_38400_VAL;

    //获取当前系统时钟
    enSrc = (en_sysctrl_clk_source_t)(M0P_SYSCTRL->SYSCTRL0_f.CLKSW);

    switch (enSrc)
    {
        case SysctrlClkRCH:
            {

                if((M0P_SYSCTRL->RCH_CR_f.TRIM) == (u16Trim[4]))
                {
                    u32Val = u32hcr_tbl[4];
                }
                else if((M0P_SYSCTRL->RCH_CR_f.TRIM) == (u16Trim[3]))
                {
                    u32Val = u32hcr_tbl[3];
                }
                else if((M0P_SYSCTRL->RCH_CR_f.TRIM) == (u16Trim[2]))
                {
                    u32Val = u32hcr_tbl[2];
                }
                else if((M0P_SYSCTRL->RCH_CR_f.TRIM) == (u16Trim[1]))
                {
                    u32Val = u32hcr_tbl[1];
                }
                else
                {
                    u32Val = u32hcr_tbl[0];
                }
            }
            break;
        case SysctrlClkXTH:
            u32Val = SYS_MHZ * 1000000;
            break;
        case SysctrlClkRCL:
            {
                if(u16Trim[0] == (M0P_SYSCTRL->RCL_CR_f.TRIM))
                {
                    u32Val = u32lcr_tbl[1];
                }
                else
                {
                    u32Val = u32lcr_tbl[0];
                }
            }
            break;
        default:
            u32Val = 0u;
            break;
    }

    u32Val = (u32Val >> M0P_SYSCTRL->SYSCTRL0_f.HCLK_PRS);

    return u32Val;
}

/**
 *******************************************************************************
 ** \brief 获得外设时钟（PCLK）频率值
 ** \retval uint32_t   PCLK频率值(Hz)
 **
 ******************************************************************************/
uint32_t Sysctrl_GetPClkFreq(void)
{
    uint32_t u32Val = 0;

    u32Val = Sysctrl_GetHClkFreq();
    u32Val = (u32Val >> (M0P_SYSCTRL->SYSCTRL0_f.PCLK_PRS));

    return u32Val;
}


/**
 *******************************************************************************
 ** \brief 时钟初始化函数
 ** \param [in]  pstcCfg    初始化配置参数
 ** \retval      Ok         设定成功
 **             其他        设定失败
 ******************************************************************************/
en_result_t Sysctrl_ClkInit(stc_sysctrl_clk_cfg_t *pstcCfg)
{
    en_result_t enRet = Ok;

    //系统时钟参数配置
    switch(pstcCfg->enClkSrc)
    {
        case SysctrlClkRCH:

            break;
        case SysctrlClkXTH:
            Sysctrl_XTHDriverCfg(SysctrlXtalDriver3);
            Sysctrl_SetXTHStableTime(SysctrlXthStableCycle16384);
            break;
        case SysctrlClkRCL:
            Sysctrl_SetRCLStableTime(SysctrlRclStableCycle256);
            break;
        default:
            enRet = ErrorInvalidParameter;
            break;
    }

    //时钟源使能
    Sysctrl_ClkSourceEnable(pstcCfg->enClkSrc, TRUE);

    //时钟源切换
    Sysctrl_SysClkSwitch(pstcCfg->enClkSrc);

    //时钟分频设置
    Sysctrl_SetHCLKDiv(pstcCfg->enHClkDiv);
    Sysctrl_SetPCLKDiv(pstcCfg->enPClkDiv);

    return enRet;
}

/**
 *******************************************************************************
 ** \brief 时钟去初始化函数
 ** \param [in]
 ** \retval      Ok         设定成功
 **             其他        设定失败
 ******************************************************************************/
en_result_t Sysctrl_ClkDeInit(void)
{
    en_result_t enRet = Ok;

    //配置RCH为内部4Hz
    Sysctrl_SetRCHTrim(SysctrlRchFreq4MHz);

    //时钟源使能
    Sysctrl_ClkSourceEnable(SysctrlClkRCH, TRUE);

    //时钟源切换
    Sysctrl_SysClkSwitch(SysctrlClkRCH);

    //其它时钟源使能关闭
    Sysctrl_ClkSourceEnable(SysctrlClkXTH, FALSE);
    Sysctrl_ClkSourceEnable(SysctrlClkRCL, FALSE);
    Sysctrl_ClkSourceEnable(SysctrlClkXTL, FALSE);

    //时钟分频设置
    Sysctrl_SetHCLKDiv(SysctrlHclkDiv1);
    Sysctrl_SetPCLKDiv(SysctrlPclkDiv1);

    return enRet;
}

/**
 *******************************************************************************
 ** \brief 内部高速时钟频率TRIM值加载
 ** \param [in]  enRCHFreq  设定的RCH目标频率值
 ** \retval      Ok         设定成功
 **             其他        设定失败或时钟未稳定
 ******************************************************************************/
en_result_t Sysctrl_SetRCHTrim(en_sysctrl_rch_freq_t enRCHFreq)
{
    //加载RCH Trim值
    M0P_SYSCTRL->RCH_CR_f.TRIM = *(RC_TRIM_BASE_ADDR + enRCHFreq);

    return Ok;
}

/**
 *******************************************************************************
 ** \brief 外部高速时钟频率范围设定
 ** \param [in]  enXTHFreq  设定的频率值
 ** \retval      Ok         设定成功
 **              其他       设定失败或时钟未稳定
 ******************************************************************************/
en_result_t Sysctrl_SetXTHFreq(en_sysctrl_xth_freq_t enXTHFreq)
{
    en_result_t enRet = Ok;

    M0P_SYSCTRL->XTH_CR_f.XTH_FSEL = enXTHFreq;

    return enRet;
}

/**
 *******************************************************************************
 ** \brief 内部低速时钟频率TRIM值加载
 ** \param [in]  enRCLFreq  设定的RCL目标频率值
 ** \retval      Ok         设定成功
 **             其他        设定失败
 ******************************************************************************/
en_result_t Sysctrl_SetRCLTrim(en_sysctrl_rcl_freq_t enRCLFreq)
{
    M0P_SYSCTRL->RCL_CR_f.TRIM = *(RC_TRIM_BASE_ADDR + enRCLFreq);

    return Ok;
}

/**
 *******************************************************************************
 ** \brief 系统时钟（HCLK）分频设定
 ** \param [in]  enHCLKDiv  分频设定值
 ** \retval      Ok         设定成功
 **             其他        设定失败
 ******************************************************************************/
en_result_t Sysctrl_SetHCLKDiv(en_sysctrl_hclk_div_t enHCLKDiv)
{
    _SysctrlUnlock();
    M0P_SYSCTRL->SYSCTRL0_f.HCLK_PRS = enHCLKDiv;

    return Ok;
}

/**
 *******************************************************************************
 ** \brief 外设时钟（PCLK）分频设定
 ** \param [in]  enPCLKDiv  分频设定值
 ** \retval      Ok         设定成功
 **             其他        设定失败
 ******************************************************************************/
en_result_t Sysctrl_SetPCLKDiv(en_sysctrl_pclk_div_t enPCLKDiv)
{
    _SysctrlUnlock();
    M0P_SYSCTRL->SYSCTRL0_f.PCLK_PRS = enPCLKDiv;

    return Ok;
}

/**
 *******************************************************************************
 ** \brief 设置外设时钟门控开关
 ** \param [in]  enPeripheral   目标外设
 ** \param [in]  bFlag          使能开关
 ** \retval      Ok             设定成功
 **             其他            设定失败
 ******************************************************************************/
en_result_t Sysctrl_SetPeripheralGate(en_sysctrl_peripheral_gate_t enPeripheral, boolean_t bFlag)
{
  if(bFlag) M0P_SYSCTRL->PERI_CLKEN |= (uint32_t)1 << enPeripheral;
  else M0P_SYSCTRL->PERI_CLKEN &= ~((uint32_t)1 << enPeripheral);
  return Ok;
}

/**
 *******************************************************************************
 ** \brief 获得外设时钟门控开关状态
 ** \param [in]  enPeripheral   目标外设
 ** \retval      TRUE           开
 **              FALSE          关
 ******************************************************************************/
boolean_t Sysctrl_GetPeripheralGate(en_sysctrl_peripheral_gate_t enPeripheral)
{
  return M0P_SYSCTRL->PERI_CLKEN & ((uint32_t)1 << enPeripheral);
}

/**
 *******************************************************************************
 ** \brief 系统功能设定
 ** \param [in]  enFunc     系统功能枚举类型
 ** \param [in]  bFlag      1-开/0-关
 ** \retval      Ok         设定成功
 **             其他        设定失败
 ******************************************************************************/
en_result_t Sysctrl_SetFunc(en_sysctrl_func_t enFunc, boolean_t bFlag)
{
  _SysctrlUnlock();
  
  if(bFlag) M0P_SYSCTRL->SYSCTRL1 |= (uint32_t)1 << enFunc;
  else M0P_SYSCTRL->SYSCTRL1 &= ~((uint32_t)1 << enFunc);
  return Ok;
}

//@} // SysctrlGroup

/*******************************************************************************
 * EOF (not truncated)
 ******************************************************************************/
