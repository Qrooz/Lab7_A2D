/*	Author: Cruz Ramirez
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab 7  Exercise 3
 *	Exercise Description: [optional - include for your own benefit]
 *	Design an LED to turn on with a given light threshold. 
 *
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 *
 *	Demo Link: Youtube URL> https://www.youtube.com/watch?v=oNPzrFqyAVQ
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

void ADC_init(){
	
	ADCSRA |= (1 << ADEN) | (1 << ADSC) | (1 << ADATE);
}


int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0x00;
	unsigned short x;
    /* Insert your solution below */
    ADC_init();
    while (1) {

	x = ADC;
	
       	if(x >= 415){
		PORTB = 0x01;
	}
	else{
		PORTB = 0x00;
	}

	
    }
    return 0;
}
