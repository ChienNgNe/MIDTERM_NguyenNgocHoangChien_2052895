/*
 * button.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Chien
 */
#include "button.h"



int buttonListPin[NUM_OF_BUTTON] = {RESET_Pin, INC_Pin, DC_Pin};
int buttonListPort[NUM_OF_BUTTON] = {RESET_GPIO_Port, INC_GPIO_Port, DC_GPIO_Port};

int KeyReg0[NUM_OF_BUTTON] = {NMState, NMState, NMState};
int KeyReg1[NUM_OF_BUTTON] = {NMState, NMState, NMState};
int KeyReg2[NUM_OF_BUTTON] = {NMState, NMState, NMState};
int KeyReg3[NUM_OF_BUTTON] = {NMState, NMState, NMState};


int TimerForKeyPress = 300;

int button1_flag[NUM_OF_BUTTON] = {0, 0, 0};



int isButton1Pressed(int index){
	if(button1_flag[index] == 1){
		button1_flag[index] = 0;
		return 1;
	}

	return 0;
}



void subKeyProcess( int index ){
	button1_flag[index] = 1;
}

void getKeyInput(){
	for(int i = 0; i < NUM_OF_BUTTON; i++){
	KeyReg0[i] = KeyReg1[i];
	KeyReg1[i] = KeyReg2[i];
	KeyReg2[i] = HAL_GPIO_ReadPin(buttonListPort[i], buttonListPin[i]);
	if((KeyReg0[i] == KeyReg1[i]) && (KeyReg1[i] == KeyReg2[i])){
		if(KeyReg3[i] != KeyReg2[i]){
			KeyReg3[i] = KeyReg2[i];

			if(KeyReg2[i] == PRESSED_STATE){

				subKeyProcess(i);
				TimerForKeyPress = 100;
			}
		}
		else {
			TimerForKeyPress--;
			if(TimerForKeyPress == 0){
				if(KeyReg2[i] == PRESSED_STATE){
				subKeyProcess(i);
				}
				TimerForKeyPress = 100;
			}
		}
	}
}

}

