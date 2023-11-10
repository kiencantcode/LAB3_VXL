/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RED_1_Pin GPIO_PIN_1
#define RED_1_GPIO_Port GPIOA
#define YELLOW_1_Pin GPIO_PIN_2
#define YELLOW_1_GPIO_Port GPIOA
#define GREEN_1_Pin GPIO_PIN_3
#define GREEN_1_GPIO_Port GPIOA
#define RED_2_Pin GPIO_PIN_4
#define RED_2_GPIO_Port GPIOA
#define YELLOW_2_Pin GPIO_PIN_5
#define YELLOW_2_GPIO_Port GPIOA
#define GREEN_2_Pin GPIO_PIN_6
#define GREEN_2_GPIO_Port GPIOA
#define BUTTON_1_Pin GPIO_PIN_0
#define BUTTON_1_GPIO_Port GPIOB
#define BUTTON_2_Pin GPIO_PIN_1
#define BUTTON_2_GPIO_Port GPIOB
#define BUTTON_3_Pin GPIO_PIN_2
#define BUTTON_3_GPIO_Port GPIOB
#define EN_VAL_0_Pin GPIO_PIN_12
#define EN_VAL_0_GPIO_Port GPIOB
#define EN_VAL_1_Pin GPIO_PIN_13
#define EN_VAL_1_GPIO_Port GPIOB
#define EN_MODE_0_Pin GPIO_PIN_14
#define EN_MODE_0_GPIO_Port GPIOB
#define EN_MODE_1_Pin GPIO_PIN_15
#define EN_MODE_1_GPIO_Port GPIOB
#define MODE_A_Pin GPIO_PIN_9
#define MODE_A_GPIO_Port GPIOA
#define MODE_B_Pin GPIO_PIN_10
#define MODE_B_GPIO_Port GPIOA
#define MODE_C_Pin GPIO_PIN_11
#define MODE_C_GPIO_Port GPIOA
#define MODE_D_Pin GPIO_PIN_12
#define MODE_D_GPIO_Port GPIOA
#define MODE_E_Pin GPIO_PIN_13
#define MODE_E_GPIO_Port GPIOA
#define MODE_F_Pin GPIO_PIN_14
#define MODE_F_GPIO_Port GPIOA
#define MODE_G_Pin GPIO_PIN_15
#define MODE_G_GPIO_Port GPIOA
#define VALUE_A_Pin GPIO_PIN_3
#define VALUE_A_GPIO_Port GPIOB
#define VALUE_B_Pin GPIO_PIN_4
#define VALUE_B_GPIO_Port GPIOB
#define VALUE_C_Pin GPIO_PIN_5
#define VALUE_C_GPIO_Port GPIOB
#define VALUE_D_Pin GPIO_PIN_6
#define VALUE_D_GPIO_Port GPIOB
#define VALUE_E_Pin GPIO_PIN_7
#define VALUE_E_GPIO_Port GPIOB
#define VALUE_F_Pin GPIO_PIN_8
#define VALUE_F_GPIO_Port GPIOB
#define VALUE_G_Pin GPIO_PIN_9
#define VALUE_G_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
