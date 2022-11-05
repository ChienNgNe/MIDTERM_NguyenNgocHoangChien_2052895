/*
 * fsm_automatic.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Chien
 */

#include"fsm_automatic.h"

#include"global.h"

void fsm_automatic_run(){
	switch(status){
	case INIT:
		//TODO
		status = RESET;

		setTimer(100);
		break;
	case RESET:
		break;
	case INC:
		break;
	case DC:
		break;
	default:
		break;
	}
}
