/*
 * userInputs.h
 *
 * Created: 6/22/2021 10:43:04 AM
 *  Author: USER
 */ 


#ifndef USERINPUTS_H_
#define USERINPUTS_H_


#include <avr/io.h>
#include <avr/cpufunc.h>
#include "initializePorts.h"

#define SELECT 0
#define DOWN 1
#define UP 2
#define DESELECT 3
#define NOT_SELECTED -1

int buttonInput(){
	int button;
	if ( (1<<BUTTON_SELECT) & PIN_D ) button = SELECT;
	else if ( (1<<BUTTON_DOWN) & PIN_D ) button = DOWN;
	else if ( (1<<BUTTON_UP) & PIN_C ) button = UP;
	else if ( (1<<BUTTON_DESELCT) & PIN_C ) button = DESELECT;
	else button = NOT_SELECTED;
	return button;
}

int keyPadInput(){

#endif /* USERINPUTS_H_ */