/*	Author: Cruz Ramirez
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab 7  Exercise 1
 *	Exercise Description: [optional - include for your own benefit]
 *	Poteniometer 
 *
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 *
 *	Demo Link: Youtube URL> https://www.youtube.com/watch?v=gzyms6s5gcw
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
	DDRB = 0xFF; PORTB = 0xFF;
	DDRD = 0xFF; PORTD = 0x00;
	unsigned short x;
    /* Insert your solution below */
    ADC_init();
    while (1) {

	x = ADC;
	PORTB = x;
       	PORTD = x >> 8;	

	
    }
    return 0;
}
