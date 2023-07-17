#include <stdio.h>
/**
 * main - Enrty point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
