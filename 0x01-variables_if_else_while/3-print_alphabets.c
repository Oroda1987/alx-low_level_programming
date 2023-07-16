#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char b;
	char D;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	for (D = 'A'; D <= 'Z'; D++)
	{
		putchar(D);
	}

	putchar('\n');
	return (0);
}
