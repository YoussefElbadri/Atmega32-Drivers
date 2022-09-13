/*
 * LED.c
 *
 *  Created on: Sep 5, 2022
 *      Author: Youssef Elbadri
 */

#include "LED.h"

EN_LED_error_t LED_init(uint8_t LEDPort, uint8_t LEDPin)
{
    EN_DIO_error_t error;
    error = DIO_init(LEDPort, LEDPin, OUTPUT);
    if(error == DIO_OK)
    {
        return LED_OK;
    }
    else
    {
        return LED_ERROR;
    }
}

EN_LED_error_t LED_on(uint8_t LEDPort, uint8_t LEDPin)
{
    EN_DIO_error_t error;
    error = DIO_write(LEDPort, LEDPin, HIGH);
    if(error == DIO_OK)
    {
        return LED_OK;
    }
    else
    {
        return LED_ERROR;
    }
}

EN_LED_error_t LED_off(uint8_t LEDPort, uint8_t LEDPin)
{
    EN_DIO_error_t error;
    error = DIO_write(LEDPort, LEDPin, LOW);
    if(error == DIO_OK)
    {
        return LED_OK;
    }
    else
    {
        return LED_ERROR;
    }
}

EN_LED_error_t LED_toggle(uint8_t LEDPort, uint8_t LEDPin)
{
    EN_DIO_error_t error;
    error = DIO_toggle(LEDPort, LEDPin);
    if(error == DIO_OK)
    {
        return LED_OK;
    }
    else
    {
        return LED_ERROR;
    }
}