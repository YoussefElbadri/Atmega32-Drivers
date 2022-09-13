/*
 * Common_Macros.h
 *
 *  Created on: Sep 5, 2022
 *      Author: Youssef Elbadri
 */

#ifndef LIB_COMMON_MACROS_H_
#define LIB_COMMON_MACROS_H_

#define SET_BIT(REG, PIN)       REG |= (1 << PIN)
#define CLEAR_BIT(REG, PIN)     REG &= ~(1 << PIN)
#define READ_BIT(REG, PIN)      (REG >> PIN) & 1
#define TOGGLE_BIT(REG, PIN)    REG ^=  (1 << PIN)

#endif /* LIB_COMMON_MACROS_H_ */