/**
  ******************************************************************************
  * @file    hts221_app.h
  * @brief   Header for hts221_app.c module.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __HTS221_APP_H
#define __HTS221_APP_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"
#include "cmsis_os.h"
#include "sensors_manager.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
#define HTS221_INT_GPIO_CLK_ENABLE()        __HAL_RCC_GPIOD_CLK_ENABLE()

#define HTS221_INT_Pin                      GPIO_PIN_13
#define HTS221_INT_GPIO_Port                GPIOD
#define HTS221_INT_EXTI_LINE                EXTI_LINE_13
#define HTS221_INT_EXTI_IRQn                EXTI15_10_IRQn

/* Exported macro ------------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
extern SM_Init_Param_t HTS221_Init_Param;
extern EXTI_HandleTypeDef hts221_exti;

/* Exported functions ------------------------------------------------------- */
void HTS221_Peripheral_Init(void);
void HTS221_OS_Init(void);
void HTS221_Data_Ready(uint8_t subSensorId, uint8_t *buf, uint16_t size, double timeStamp);
void HTS221_Start(void);
void HTS221_Stop(void);
uint8_t HTS221_Create_Sensor(const SM_Init_Param_t *pxParams);
uint8_t HTS221_Get_Id(void);

uint8_t HTS221_updateConfig(void);

#ifdef __cplusplus
}
#endif

#endif /* __HTS221_APP_H */

