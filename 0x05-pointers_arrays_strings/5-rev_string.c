#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *rev_string - Reverse a sting in place
 *
 *@s:input string to be reversed
 *
 */

void rev_string(char *s)
{
	if (s != NULL)
	{
		int a, b;
		int length;

		length = strlen(s);

		for (a = 0, b = length - 1; a < b; a++, b--)
			char temp = s[a];

			s[a] = s[b];
			s[b] = temp;
	}
}
