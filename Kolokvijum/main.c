/**
 * @file main.c
 * @brief Glavni main fajl
 * @author Dragana Tesovic
 * @date 16-05-2021
 * @version 1.0
 */

#include <stdint.h>
#include <stdlib.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
#include <string.h>
#include "../usart/usart.h"
#include "../timer0/timer0.h"
#include "util.h"

int main()
{
	usartInit(9600);
	int16_t niz[64];
	int16_t duzina = 16;

	while(1)
	{
		usartPutString("Unesite duzinu niz: \r\n");

		while(!usartAvailabe())
		;
		timer0DelayMs(100);

		duzina = usartGetString(niz);


	}

	return 0;
}


