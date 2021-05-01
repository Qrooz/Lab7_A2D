/*	Author: Cruz Ramirez
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab 7  Exercise 4
 *	Exercise Description: [optional - include for your own benefit]
 *	Design a set of eight LED to turn on w/ increasing light intensity to a photoresistor. 
 *
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 *
 *	Demo Link: Youtube URL> https://www.youtube.com/watch?v=l607io3S-N4 
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

       	if(x >= 170){
		PORTB = 0x01;
	}
	if(x >= 200){
		PORTB = 0x03;
	}
        if(x >= 300){
		PORTB = 0x07;
        }
        if(x >= 400){
		PORTB = 0x0F;
        }
        if(x >= 450){
		PORTB = 0x1F;
        }
        if(x >= 475){
		PORTB = 0x3F;
        }
        if(x >= 500){
		PORTB = 0x7F;
        }
        if(x >= 525){
		PORTB = 0xFF;
        }
	else{
		PORTB = 0x00;
	}

	
    }
    return 0;
}
