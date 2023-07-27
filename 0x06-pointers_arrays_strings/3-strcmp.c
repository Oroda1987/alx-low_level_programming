#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: String 1 to be compared
 *@s2: String 2 to be copared
 *Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	/*Compare the characters until we reach the end of s1 or s2 */

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	  /* If both strings are equal, return 0 */
		return (0);

}
