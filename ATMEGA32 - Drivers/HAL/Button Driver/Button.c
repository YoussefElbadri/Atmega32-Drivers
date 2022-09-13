/*
 * Button.c
 *
 *  Created on: Sep 5, 2022
 *      Author: Youssef Elbadri
 */

#include "Button.h"

EN_Button_error_t Button_init(uint8_t buttonPort, uint8_t buttonPin)
{
    EN_Button_error_t error;
    error = DIO_init(buttonPort, buttonPin, INPUT);
    if(error == DIO_OK)
    {
        return BUTTON_OK;
    }
    else
    {
        return BUTTON_ERROR;
    }
}

EN_Button_error_t Button_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t *value)
{
    EN_Button_error_t error;
    error = DIO_read(buttonPort, buttonPin, value);
    if(error == DIO_OK)
    {
        return BUTTON_OK;
    }
    else
    {
        return BUTTON_ERROR;
    }
}