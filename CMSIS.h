/*******************************************************************************

                              CMSIS总体定义

此接口主要为各MCU相关模块调用时，与MCU及体系体构解耦以实现无关化
*******************************************************************************/
#ifndef __CMSIS_H
#define __CMSIS_H

#ifdef SUPPORT_STM32F10
  #include "stm32f10x.h" //含core_cm3.h
#endif

#ifdef SUPPORT_STM32F4
  #include "stm32f4xx.h"  //含core_cm4.h
#endif

#ifdef SUPPORT_HC32
  #include "HC32.h"
#endif

#endif // __CMSIS_H
