/*
 * LED.h
 *
 *  Created on: Sep 5, 2022
 *      Author: Youssef Elbadri
 */

#ifndef HAL_LED_H_
#define HAL_LED_H_

#include "../../MCAL/LIB/STD_Types.h"
#include "../../MCAL/LIB/Registers.h"
#include "../../MCAL/LIB/Common_Macros.h"
#include "../../MCAL/DIO/DIO.h"

typedef enum EN_LED_error_t 
{
    LED_ERROR,
    LED_OK
}EN_LED_error_t;

EN_LED_error_t LED_init(uint8_t LEDPort, uint8_t LEDPin);
EN_LED_error_t LED_on(uint8_t LEDPort, uint8_t LEDPin);
EN_LED_error_t LED_off(uint8_t LEDPort, uint8_t LEDPin);
EN_LED_error_t LED_toggle(uint8_t LEDPort, uint8_t LEDPin);

#endif /* HAL_LED_H_ */