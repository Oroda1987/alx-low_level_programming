#include "main.h"
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int sum;
	char c;

	srand (time (NULL));
	 sum = 0;

	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(27772 - sum);
	return (0);

}
