/*
 * DIO.h
 *
 *  Created on: Sep 5, 2022
 *      Author: Youssef Elbadri
 */

#ifndef DIO_DIO_H_
#define DIO_DIO_H_

#include "../LIB/STD_Types.h"
#include "../LIB/Registers.h"
#include "../LIB/Common_Macros.h"

typedef enum EN_DIO_error_t 
{
    DIO_WRONG_PIN_NUMBER,
    DIO_WRONG_PORT_NUMBER,
    DIO_WRONG_DIRECTION,
    DIO_OK
}EN_DIO_error_t;

#define PORT_A      'A'
#define PORT_B      'B'
#define PORT_C      'C'
#define PORT_D      'D'

#define INPUT        0
#define OUTPUT       1

#define HIGH         1
#define LOW          0

EN_DIO_error_t DIO_init(uint8_t portNumber, uint8_t pinNumber, uint8_t direction);
EN_DIO_error_t DIO_write(uint8_t portNumber, uint8_t pinNumber, uint8_t value);
EN_DIO_error_t  DIO_read(uint8_t portNumber, uint8_t pinNumber, uint8_t *value);
EN_DIO_error_t DIO_toggle(uint8_t portNumber, uint8_t pinNumber);

#endif /* DIO_DIO_H_ */
