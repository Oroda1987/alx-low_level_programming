#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 90 == 0)
		{
			_putchar('f');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('b');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (a % 5 == 0)
		{
			_putchar('b');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (a % 3 == 0)
		{
			_putchar('f');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			_putchar('a');
		}
		_putchar('\n');

		return (0);
	}

}

