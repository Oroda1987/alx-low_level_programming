#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts_half - Prints half of a string
 *@str: input string to be printed
 */

void puts_half(char *str)
{
	int m = strlen(str);
	int length;

	for (length = m / 2; length < m; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');

}
