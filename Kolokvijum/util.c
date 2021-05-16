/**
 * @file util.c
 * @brief biblioteka koja definise funkcije za sortiranje i provjeru aritmetickog niza
 * @author Dragana Tesovic
 * @date 16-05-2021
 * @version 1.0
 */

#include "util.h"

void Sort(int16_t *array, int16_t array_length, int8_t mode)
{
	int16_t niz[array_length];
	int16_t duzina;
	int8_t i, j;

	for (i = 0; i < array_length; i++)
	{
		for (j = i + 1; j < array_length; j++)
		{
			if (array[i] > array[j])
			{
				if (mode == UP)
					niz[i] = array[i];
				else
					niz[i] = array[j];
			}
		}
	}

	for (i = 0; i < array_length; i++)
	{
		array[i] = niz[i];
	}

}


