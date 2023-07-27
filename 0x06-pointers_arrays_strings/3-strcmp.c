#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: String 1 to be compared
 *@s2: String 2 to be copared
 *Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	if (strcmp(s1, s2) == 0)
		return (*s1 == *s2);
	else
		return (*s1 != *s2);
	return (0);

}
