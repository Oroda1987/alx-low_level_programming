#include "main.h"
#include <math.h>
/**
 *_pow_recursion - return value of x raised to power y
 *@x: Value to rais
 *@y: power
 *Return: result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
