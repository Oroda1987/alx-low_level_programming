#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 98; a++)
	{
		for (b = a + 1; b < 99; b++)
		{
			for (c = b + 1; c < 98; c++)
			{
				for (d = c + 1; d < 99; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					putchar(d + '0');

					if (a == 9 && b == 8 && c == 9 && d == 9)
					break;
						putchar(',');
						putchar(' ');
				}
			}                         
		}
	}
	putchar('\n');
	return (0);
}

