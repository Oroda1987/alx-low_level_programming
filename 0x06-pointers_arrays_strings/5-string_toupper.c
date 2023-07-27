#include "main.h"
#include <ctype.h>
/**
 *string_toupper - changes all lowercase character to uppercase
 *@s: character to be changed
 *Return: 0
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);

}
