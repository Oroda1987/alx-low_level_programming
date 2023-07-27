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
	int length = strlen(s);

	for (i = 0; i < length; i++)
	{
		s[i] = toupper(s[i]);
	}
	return (0);

}
