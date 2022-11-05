/*
 * button.h
 *
 *  Created on: Nov 3, 2022
 *      Author: Chien
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include"main.h"
#define NMState GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

#define NUM_OF_BUTTON 3

int isButton1Pressed();


void getKeyInput();


#endif /* INC_BUTTON_H_ */
