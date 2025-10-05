/*
 * w1_t1.h
 *
 *  Created on: Oct 5, 2025
 *      Author: KERMENA
 */

#ifndef INC_W1_T1_H_
#define INC_W1_T1_H_

//macros for basic bit manipulation
#define SET_THE_BIT(REG, BIT)     ((REG) |= (1U << (BIT)))
#define CLEAR_THE_BIT(REG, BIT)   ((REG) &= ~(1U << (BIT)))
#define TOGGLE_THE_BIT(REG, BIT)  ((REG) ^= (1U << (BIT)))
#define READ_THE_BIT(REG, BIT)    (((REG) >> (BIT)) & 1U)

//used THE to avoid redefinition with other built in functions



#endif /* INC_W1_T1_H_ */
