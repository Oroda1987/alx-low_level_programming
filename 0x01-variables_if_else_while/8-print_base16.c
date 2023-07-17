#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int  main(void)
{
	int m;

	for (m = 0; m <= 15; m++)
	{
		if (m < 10)
		{
		putchar(m + '0');
		}
		else
		{
		putchar(m - 10 + 'a');
		}

	}
	putchar('\n');

	return (0);
}
