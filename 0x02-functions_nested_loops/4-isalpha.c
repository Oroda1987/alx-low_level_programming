#include "main.h"
/**
 *_isalpha - checks for lowercase and uppercase
 *@c: parameter to be checked
 *Return: 1 if lowercase or uppercase or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
	return (0);
}
