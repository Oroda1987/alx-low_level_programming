#include "main.h"
#include <string.h>
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s:first occurrence in the string
 *@accept:Bytes in the string
 *Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}