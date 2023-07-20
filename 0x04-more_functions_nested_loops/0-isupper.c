#include "main.h"
#include <stdio.h>
/**
 * _isupper -checks for uppercase character
 *@c:parameter to be checked
 * Return: 1 if upper, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
