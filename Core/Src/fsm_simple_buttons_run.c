/*
 * fsm_simple_buttons.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Chien
 */

int counter ;
#include "fsm_simple_buttons_run.h"

void fsm_simple_buttons_run(){
	switch(status){

	case INIT:
		display7SEG(5);
		if(isButton1Pressed(0)==1){
			counter = 0;
			status = RESET;
			display7SEG(counter);
		}
		if(isButton1Pressed(1)==1){
			counter=counter + 1;
			if(counter>=10){
				counter = 0;
			}
			display7SEG(counter);
			status = INC;

		}
		if(isButton1Pressed(2)==1){
			counter=counter - 1;
			if(counter<0){
				counter = 9;
			}
			display7SEG(counter);
			status = DC;

		}
		break;



	case INC:


		if(isButton1Pressed(0)==1){
			counter = 0;
			display7SEG(counter);
			status = RESET;

		}
		if(isButton1Pressed(1)==1){
			counter=counter + 1;
			if(counter>=10){
				counter = 0;
			}
			status = INC;
			display7SEG(counter);


		}
		if(isButton1Pressed(2)==1){
			counter=counter - 1;
			if(counter<0){
				counter = 9;
			}
			status = DC;
			display7SEG(counter);


		}
		break;

	case DC:

		if(isButton1Pressed(0)==1){
			status = RESET;
			counter = 0;

			display7SEG(counter);
		}
		if(isButton1Pressed(1)==1){
			counter=counter + 1;
			if(counter>=10){
				counter = 0;
			}
			status = INC;
			display7SEG(counter);


		}
		if(isButton1Pressed(2)==1){
			counter=counter - 1;
			if(counter<0){
				counter = 9;
			}
			status = DC;
			display7SEG(counter);


		}
		break;
	case RESET:
			counter = 0;
			if(isButton1Pressed(0)==1){
				status = RESET;
				counter = 0;

				display7SEG(counter);
			}
			if(isButton1Pressed(1)==1){
				counter=counter + 1;
				if(counter>=10){
					counter = 0;
				}
				status = INC;
				display7SEG(counter);


			}
			if(isButton1Pressed(2)==1){
				counter=counter - 1;
				if(counter<0){
					counter = 9;
				}
				status = DC;
				display7SEG(counter);


			}
			break;

}
}
