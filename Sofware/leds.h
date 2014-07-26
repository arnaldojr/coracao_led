#ifndef LEDS_H
#define LEDS_H

/*
*	INCLUEDES
*/
#include <p18f452.h>

/*
*	Defines
*/
#define P_B 0
#define P_D 1
#define P_C 2
#define N_LEDS 	  64			//setar numero de leds na placa
#define N_COLUNAS 3

/*
*	Inicializa vetor leds
*/
extern const rom int vled[N_LEDS][N_COLUNAS];

/*
*	Prototype
*/


void acender_led(int numero_led, int vetor_leds[N_LEDS][N_COLUNAS]);
//void configura_leds(int vetor_leds[N_LEDS][N_COLUNAS]);


#endif