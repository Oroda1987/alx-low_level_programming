#include "main.h"
#include <string.h>
/**
 *print_rev - prints a string in reverse
 *@s: parameter to be reversed
 *Returns: No value
 */

void print_rev(char *s)
{
	if (s != NULL)
	{
		int j;
		int length;

		length = strlen(s);
		for (j = length - 1; j >= 0; j--)
		{
			_putchar(s[j]);
		}
		_putchar('\n');

	}

}
