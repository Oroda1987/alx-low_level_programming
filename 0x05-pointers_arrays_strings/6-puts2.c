#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts2 - Prints every other character of a string
 *@str: input string to be printed
 */

void puts2(char *str)
{
	int position = 0;

	while (*str != '\0')
	{
		if (position % 2 == 0)
		{
			_putchar(*str);
		}
	str++;
	position++;
	}
	_putchar('\n');
}
