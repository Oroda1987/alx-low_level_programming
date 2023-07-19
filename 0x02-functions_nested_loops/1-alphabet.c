#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_alphabet - print alphabet in lower case
 *
 * Return: void if successful
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

