/**
  ******************************************************************************
  * @file    stts751_app.h
  * @brief   Header for stts751_app.c module.
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
#ifndef __STTS751_APP_H
#define __STTS751_APP_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"
#include "cmsis_os.h"
#include "sensors_manager.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
extern SM_Init_Param_t STTS751_Init_Param;

/* Exported functions ------------------------------------------------------- */
void STTS751_Peripheral_Init(void);
void STTS751_OS_Init(void);
void STTS751_Data_Ready(uint8_t subSensorId, uint8_t *buf, uint16_t size, double timeStamp);
void STTS751_Start(void);
void STTS751_Stop(void);
uint8_t STTS751_Create_Sensor(const SM_Init_Param_t *pxParams);
uint8_t STTS751_Get_Id(void);

#ifdef __cplusplus
}
#endif

#endif /* __STTS751_APP_H */

