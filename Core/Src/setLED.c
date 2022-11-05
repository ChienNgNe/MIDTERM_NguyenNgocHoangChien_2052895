/*
 * setLED.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Chien
 */
#include"setLED.h"



void display7SEG(int num){

	//0
		if(num == 0){
		 HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);
		    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
		    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
		    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_RESET);
		    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_RESET);
		    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_RESET);
		    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_SET);
		    }
		//1
	    if(num==1){
	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_SET);
	    }
	    //2
	    if(num==2){
	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);//
	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_RESET);
	    }
	    //3
	    if(num==3){
	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_RESET);
	   }
	    //4
	    if(num==4){
	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_RESET);
	    }
	   //5
	    if(num==5){
	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_RESET);
	    }
	    if(num==6){
	    	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_SET);
	    	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_RESET);
	    	    }
	    	    //7
	    	    if(num==7){
	    	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_SET);
	    	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_SET);
	    	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_SET);
	    	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_SET);
	    	    }
	    	    //8
	    	    if(num==8){
	    	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_RESET);
	    	   }
	    	    //9
	    	    if(num==9){
	    	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_SET);
	    	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_RESET);
	    	    }


}

