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

	for (d = 0; d <= 9; d++)
	{
		for (e = d + 1; e <= 9; e++)
		{
			for (f = e + 1; f <= 9; f++)
			{
				if (d == 8 && e == 9 && f == 0)
				break;
					putchar(d + '0');
					putchar(e + '0');
					putchar(f + '0');
					putchar(',');
					putchar(' ');
			}
			
		}
	}
	putchar('\n');
	return (0);
}
