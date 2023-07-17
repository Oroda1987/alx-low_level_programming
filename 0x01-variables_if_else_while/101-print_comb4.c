#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;
	int e;
	int f;

	for (d = 0; d < 8; d++)
	{
		for (e = d + 1; e < 9; e++)
		{
			for (f = e + 1; f < 10; f++)
			{
				putchar(d + '0');
				putchar(e + '0');
				putchar(f + '0');
					if (d == 7 && e == 8 && f == 9)
					continue;

					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
