#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}	