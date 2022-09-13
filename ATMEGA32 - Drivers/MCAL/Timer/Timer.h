/*
 * Timer.h
 *
 *  Created on: Sep 10, 2022
 *      Author: Youssef Elbadri
 */

#ifndef TIMER_TIMER_H_
#define TIMER_TIMER_H_

#include "../LIB/STD_Types.h"
#include "../LIB/Registers.h"
#include "../LIB/Common_Macros.h"

typedef enum EN_Timer_error_t 
{
    TIMER_WRONG_TIMER_NUMBER,
    TIMER_WRONG_TIMER_MODE,
    TIMER_WRONG_PRESCALLER,
    TIMER_OK
}EN_Timer_error_t;

#define     TIMER_0             'a'
#define     TIMER_1             'b'
#define     TIMER_2             'c'

#define     NORMAL_MODE         0
#define     PWM_PHASE_CORRECT   1
#define     CTC                 2
#define     FAST_PWM            3

EN_Timer_error_t Timer_init(uint8_t timerNumber, uint8_t timerMode);
EN_Timer_error_t Timer_start(uint8_t timerNumber, uint16_t prescaller);
EN_Timer_error_t Timer_interruptEnable(uint8_t timerNumber, uint8_t timerMode);

#endif /* TIMER_TIMER_H_ */
