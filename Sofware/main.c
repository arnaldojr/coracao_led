#include <p18f452.h>
#include <delays.h>
#include <stdlib.h>
#include "leds.h"

#pragma config WDT = OFF, LVP = OFF, OSC = XT, PWRT = ON, BOR = ON, BORV = 42
//PROTOTIPO DE FUNÇOES



void main()
{
 	//CONFIGURAÇAO DOS PORTS
	TRISA = 0x00; 		// RA0 ATÉ RA5 COMO SAIDA
	TRISB = 0x00;		// RB0 ATÉ RB7 COMO SAIDA ACIONA TRANSISTORES
	TRISC = 0b10000000; // RC7: Rx e RC6:Tx RC2-SAIDA LED
	TRISD = 0x00;		// RD0 ATÉ RD7 COMO SAIDA PARA OS LEDS 
	TRISE = 0x00;		// RE0 ATÉ RE2 COMO SAIDA
	

	while(1)
	{
		int i;
		for (i=0;i<N_LEDS;i++)		/*giro no sentido anti-horario acende um por vez*/
		{
			acender_led(i,vled);
			Delay1KTCYx(250);		// 250ms
		}
		
		for (i=N_LEDS;i=0;i--)		/*giro no sentido horario acende um por vez*/
		{
			acender_led(i,vled);
			Delay1KTCYx(250);		// 250ms
		}		
		
/*		Delay1KTCYx(250);	//Delay  250 * 1000 * 1 = 250000 µs  = 0,25s = 250ms @ 4MHz
		if(PORTB==0b10000000)
		{
			PORTB=0b00000001;
			PORTD = PORTD<<1;
		}
		else PORTB = PORTB<< 1;
		
		if(PORTD==0b10000000)
		PORTD = 0b00000001;
			
*/	
	}
}