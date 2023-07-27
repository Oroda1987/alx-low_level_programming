#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: String 1 to be compared
 *@s2: String 2 to be copared
 *Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int value;
	value = strcmp(s1, s2);
	if (value < 0)
		return (s1 < s2);
	else if (value > 0)
		return (s1 > s2);
	else
		return (0);

}
