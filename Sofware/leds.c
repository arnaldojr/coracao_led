#include "leds.h"

void acender_led(int numero_led, int vetor_leds[N_LEDS][N_COLUNAS]){
	PORTB=vetor_leds[numero_led][P_B];
	PORTD=vetor_leds[numero_led][P_D];
	PORTC=vetor_leds[numero_led][P_C];
}

const rom int vled[N_LEDS][N_COLUNAS] = {
									{0b10000000,0b00000000,0b00000100},
									{0b00010000,0b00000000,0b00000100}
									};

/*		
void configura_leds(int vetor_leds[N_LEDS][N_COLUNAS]){

//LED 0
vetor_leds[0][P_B]=0b10000000;
vetor_leds[0][P_D]=0;
vetor_leds[0][P_C]=0b00000100;

//LED 1
vetor_leds[1][P_B]=0b00010000;
vetor_leds[1][P_D]=0;
vetor_leds[1][P_C]=0b00000100;

//LED 2
vetor_leds[2][P_B]=0b00010000;
vetor_leds[2][P_D]=0b00000001;
vetor_leds[2][P_C]=0b00000000;

//LED 3
vetor_leds[3][P_B]=0b00010000;
vetor_leds[3][P_D]=0b00000010;
vetor_leds[3][P_C]=0b00000000;

//LED 4
vetor_leds[4][P_B]=0b00010000;
vetor_leds[4][P_D]=0b00000100;
vetor_leds[4][P_C]=0b00000000;

//LED 5
vetor_leds[5][P_B]=0b00010000;
vetor_leds[5][P_D]=0b00001000;
vetor_leds[5][P_C]=0b00000000;

//LED 6
vetor_leds[6][P_B]=0b00010000;
vetor_leds[6][P_D]=0b00010000;
vetor_leds[6][P_C]=0b00000000;

//LED 7
vetor_leds[7][P_B]=0b00010000;
vetor_leds[7][P_D]=0b00100000;
vetor_leds[7][P_C]=0b00000000;

//LED 8
vetor_leds[8][P_B]=0b00010000;
vetor_leds[8][P_D]=0b01000000;
vetor_leds[8][P_C]=0b00000000;

//LED 9
vetor_leds[9][P_B]=0b00010000;
vetor_leds[9][P_D]=0b10000000;
vetor_leds[9][P_C]=0b00000000;

//LED 10
vetor_leds[10][P_B]=0b00000001;
vetor_leds[10][P_D]=0b00001000;
vetor_leds[10][P_C]=0b00000000;

//LED 11
vetor_leds[11][P_B]=0b00000001;
vetor_leds[11][P_D]=0b00010000;
vetor_leds[11][P_C]=0b00000000;
}
*/