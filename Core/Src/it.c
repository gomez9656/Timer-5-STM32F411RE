/*
 * it.c
 *
 *  Created on: 23/01/2021
 *      Author: PC
 */

void SysTick_Handler(void){

	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();

}

