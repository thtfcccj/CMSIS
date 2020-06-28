/*******************************************************************************

                              CMSIS���嶨��

�˽ӿ���ҪΪ��MCU���ģ�����ʱ����MCU����ϵ�幹������ʵ���޹ػ�
*******************************************************************************/
#ifndef __CMSIS_H
#define __CMSIS_H

#ifdef SUPPORT_STM32F10
  #include "stm32f10x.h" //��core_cm3.h
#endif

#ifdef SUPPORT_STM32F4
  #include "stm32f4xx.h"  //��core_cm4.h
#endif

#ifdef SUPPORT_HC32
  #include "HC32.h"
#endif

#endif // __CMSIS_H
