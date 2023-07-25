#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts2 - Prints every other character of a string
 *@str: input string to be printed
 */

void puts2(char *str)
{
	if (str != NULL)
	{
		int i;

		for (i = 0; str[i] != '\0'; i += 2)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}

}
