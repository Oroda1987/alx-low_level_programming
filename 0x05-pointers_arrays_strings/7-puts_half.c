#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts_half - Prints half of a string
 *@str: input string to be printed
 */

void puts_half(char *str)
{
	int length;
	int startIndex;

	length = strlen(str);
	if (length % 2 == 0)
	{
		startIndex = length / 2;
	}
	else	
	{
		startIndex = (length - 1) / 2;	
	}
	_putchar(*str);
	_putchar('+');
	_putchar(startIndex);
	_putchar('\n');
}
