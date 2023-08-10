#include "main.h"
#include <stdio.h>
/**
 *factorial - get the factorial of a number
 *@n: factor to factorialize
 *Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n  == 1)
	{
		return (1);
	}
		return (n * factorial(n - 1));

}
