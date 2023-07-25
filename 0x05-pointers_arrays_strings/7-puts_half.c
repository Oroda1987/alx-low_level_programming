#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts_half - Prints half of a string
 *@str: input string to be printed
 */

void puts_half(char *str)
{
	int n = strlen(str);
	int length;
		for (length = n / 2; length < n; length++)
			_putchar(str[length]);
		_putchar('\n');
}
