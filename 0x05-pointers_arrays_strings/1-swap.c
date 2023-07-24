#include "main.h"
#include <stdio.h>
/**
 *swap_int - swaps value of two integers
 *@a: integer to be swaped
 *@b: integer to be swaped
 *Return: no value
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
