/*
 * Timer.c
 *
 *  Created on: Sep 10, 2022
 *      Author: Youssef Elbadri
 */

#include "Timer.h"

EN_Timer_error_t Timer_init(uint8_t timerNumber, uint8_t timerMode)
{
    switch (timerNumber)
    {
    case TIMER_0:
        switch (timerMode)
        {
        case NORMAL_MODE:
            CLEAR_BIT(TCCR0, WGM00);
            CLEAR_BIT(TCCR0, WGM01);
            return TIMER_OK;
            break;

        case PWM_PHASE_CORRECT:
            SET_BIT(TCCR0, WGM00);
            CLEAR_BIT(TCCR0, WGM01);
            return TIMER_OK;
            break;

        case CTC:
            CLEAR_BIT(TCCR0, WGM00);
            SET_BIT(TCCR0, WGM01);
            return TIMER_OK;
            break;

        case FAST_PWM:
            SET_BIT(TCCR0, WGM00);
            SET_BIT(TCCR0, WGM01);
            return TIMER_OK;
            break;
        default:
            return TIMER_WRONG_TIMER_MODE;
            break;
        }
        break;

    case TIMER_1:
    switch (timerMode)
        {
        case NORMAL_MODE:
            CLEAR_BIT(TCCR1A, WGM10);
            CLEAR_BIT(TCCR1A, WGM11);
            CLEAR_BIT(TCCR1B, WGM12);
            CLEAR_BIT(TCCR1B, WGM13);
            return TIMER_OK;
            break;

        case PWM_PHASE_CORRECT:
            SET_BIT(TCCR1A, WGM10);
            CLEAR_BIT(TCCR1A, WGM11);
            CLEAR_BIT(TCCR1B, WGM12);
            CLEAR_BIT(TCCR1B, WGM13);
            return TIMER_OK;
            break;

        case CTC:
            CLEAR_BIT(TCCR1A, WGM10);
            CLEAR_BIT(TCCR1A, WGM11);
            SET_BIT(TCCR1B, WGM12);
            CLEAR_BIT(TCCR1B, WGM13);
            return TIMER_OK;
            break;

        case FAST_PWM:
            SET_BIT(TCCR1A, WGM10);
            CLEAR_BIT(TCCR1A, WGM11);
            SET_BIT(TCCR1B, WGM12);
            CLEAR_BIT(TCCR1B, WGM13);
            return TIMER_OK;
            break;
        default:
            return TIMER_WRONG_TIMER_MODE;
            break;
        }
        break;

    case TIMER_2:
        switch (timerMode)
        {
        case NORMAL_MODE:
            CLEAR_BIT(TCCR2, WGM20);
            CLEAR_BIT(TCCR2, WGM21);
            return TIMER_OK;
            break;

        case PWM_PHASE_CORRECT:
            SET_BIT(TCCR2, WGM20);
            CLEAR_BIT(TCCR2, WGM21);
            return TIMER_OK;
            break;

        case CTC:
            CLEAR_BIT(TCCR2, WGM20);
            SET_BIT(TCCR2, WGM21);
            return TIMER_OK;
            break;

        case FAST_PWM:
            SET_BIT(TCCR2, WGM20);
            SET_BIT(TCCR2, WGM21);
            return TIMER_OK;
            break;
        default:
            return TIMER_WRONG_TIMER_MODE;
            break;
        }
        break;
    default:
        return TIMER_WRONG_TIMER_NUMBER;
        break;
    }
}

EN_Timer_error_t Timer_start(uint8_t timerNumber, uint16_t prescaller)
{
    switch (timerNumber)
    {
    case TIMER_0:
        switch (prescaller)
        {
        case 0:
            SET_BIT(TCCR0, CS00);
            CLEAR_BIT(TCCR0, CS01);
            CLEAR_BIT(TCCR0, CS02);
            return TIMER_OK;
            break;
        case 8:
            CLEAR_BIT(TCCR0, CS00);
            SET_BIT(TCCR0, CS01);
            CLEAR_BIT(TCCR0, CS02);
            return TIMER_OK;
            break;
        case 64:
            SET_BIT(TCCR0, CS00);
            SET_BIT(TCCR0, CS01);
            CLEAR_BIT(TCCR0, CS02);
            return TIMER_OK;
            break;
        case 256:
            CLEAR_BIT(TCCR0, CS00);
            CLEAR_BIT(TCCR0, CS01);
            SET_BIT(TCCR0, CS02);
            return TIMER_OK;
            break;
        case 1024:
            SET_BIT(TCCR0, CS00);
            CLEAR_BIT(TCCR0, CS01);
            SET_BIT(TCCR0, CS02);
            return TIMER_OK;
            break;
        default:
            return TIMER_WRONG_TIMER_MODE;
            break;
        }
        break;
    case TIMER_1:
        switch (prescaller)
        {
        case 0:
            SET_BIT(TCCR1B, CS10);
            CLEAR_BIT(TCCR1B, CS11);
            CLEAR_BIT(TCCR1B, CS12);
            return TIMER_OK;
            break;
        case 8:
            CLEAR_BIT(TCCR1B, CS10);
            SET_BIT(TCCR1B, CS11);
            CLEAR_BIT(TCCR1B, CS12);
            return TIMER_OK;
            break;
        case 64:
            SET_BIT(TCCR1B, CS10);
            SET_BIT(TCCR1B, CS11);
            CLEAR_BIT(TCCR1B, CS12);
            return TIMER_OK;
            break;
        case 256:
            CLEAR_BIT(TCCR1B, CS10);
            CLEAR_BIT(TCCR1B, CS11);
            SET_BIT(TCCR1B, CS12);
            return TIMER_OK;
            break;
        case 1024:
            SET_BIT(TCCR1B, CS10);
            CLEAR_BIT(TCCR1B, CS11);
            SET_BIT(TCCR1B, CS12);
            return TIMER_OK;
            break;
        default:
            return TIMER_WRONG_TIMER_MODE;
            break;
        }
        break;
    case TIMER_2:
        switch (prescaller)
        {
        case 0:
            SET_BIT(TCCR2, CS20);
            CLEAR_BIT(TCCR2, CS21);
            CLEAR_BIT(TCCR2, CS22);
            return TIMER_OK;
            break;
        case 8:
            CLEAR_BIT(TCCR2, CS20);
            SET_BIT(TCCR2, CS21);
            CLEAR_BIT(TCCR2, CS22);
            return TIMER_OK;
            break;
        case 64:
            SET_BIT(TCCR2, CS20);
            SET_BIT(TCCR2, CS21);
            CLEAR_BIT(TCCR2, CS22);
            return TIMER_OK;
            break;
        case 256:
            CLEAR_BIT(TCCR2, CS20);
            CLEAR_BIT(TCCR2, CS21);
            SET_BIT(TCCR2, CS22);
            return TIMER_OK;
            break;
        case 1024:
            SET_BIT(TCCR2, CS20);
            CLEAR_BIT(TCCR2, CS21);
            SET_BIT(TCCR2, CS22);
            return TIMER_OK;
            break;
        default:
            return TIMER_WRONG_TIMER_MODE;
            break;
        }
        break;
    default:
        return TIMER_WRONG_TIMER_NUMBER;
        break;
    }
}

EN_Timer_error_t Timer_interruptEnable(uint8_t timerNumber, uint8_t timerMode)
{
    switch (timerNumber)
    {
    case TIMER_0:
        switch (timerMode)
        {
        case NORMAL_MODE:
            SET_BIT(TIMSK, TOIE0);
            return TIMER_OK;
            break;
        case CTC:
            SET_BIT(TIMSK, OCIE0);
            return TIMER_OK;
            break;        
        default:
            return TIMER_WRONG_TIMER_MODE;
            break;
        }
        break;
    case TIMER_1:
        switch (timerMode)
        {
        case NORMAL_MODE:
            SET_BIT(TIMSK, TOIE1);
            return TIMER_OK;
            break;
        case CTC:
            SET_BIT(TIMSK, OCIE1A);
            SET_BIT(TIMSK, OCIE1B);
            return TIMER_OK;
            break;        
        default:
            return TIMER_WRONG_TIMER_MODE;
            break;
        }
        break;
    case TIMER_2:
        switch (timerMode)
        {
        case NORMAL_MODE:
            SET_BIT(TIMSK, TOIE2);
            return TIMER_OK;
            break;
        case CTC:
            SET_BIT(TIMSK, OCIE2);
            return TIMER_OK;
            break;        
        default:
            return TIMER_WRONG_TIMER_MODE;
            break;
        }
        break;
    default:
        return TIMER_WRONG_TIMER_NUMBER;
        break;
    }
}