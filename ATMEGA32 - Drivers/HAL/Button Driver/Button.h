/*
 * Button.h
 *
 *  Created on: Sep 5, 2022
 *      Author: Youssef Elbadri
 */

#ifndef HAL_BUTTON_H_
#define HAL_BUTTON_H_

#include "../../MCAL/LIB/STD_Types.h"
#include "../../MCAL/LIB/Registers.h"
#include "../../MCAL/LIB/Common_Macros.h"
#include "../../MCAL/DIO/DIO.h"

typedef enum EN_BUTTON_error_t 
{
    BUTTON_ERROR,
    BUTTON_OK
}EN_Button_error_t;

EN_Button_error_t Button_init(uint8_t buttonPort, uint8_t buttonPin);
EN_Button_error_t Button_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t *value);

#endif /* HAL_BUTTON_H_ */