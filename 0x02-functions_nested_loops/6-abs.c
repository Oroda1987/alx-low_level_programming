#include "main.h"
#include <stdio.h>
/**
 * _abs - print the absolute value
 * @c: parametert to be checked
 * Return: ALways 0
 */

int _abs(int c)
{
	if (c < 0)
		return (-c);
	else
		return (c);
	return (0);
}
