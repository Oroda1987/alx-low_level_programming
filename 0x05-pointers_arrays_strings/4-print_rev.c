#include "main.h"
#include <string.h>
/**
 *print_rev - prints a string in reverse
 *@s: parameter to be reversed
 *Returns: No value
 */

void print_rev(char *s)
{
	int j;

	while (s[j] != '\0')
		j++;
	for (j = j - 1; j >= 0; j--)
		print_rev(s[j]);

}
