#include "main.h"
#include <string.h>
/**
 *_strchr - locates character in a string
 *@s:String
 *@c:First occurrence of the character
 *Return:0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
		return (NULL);
}
