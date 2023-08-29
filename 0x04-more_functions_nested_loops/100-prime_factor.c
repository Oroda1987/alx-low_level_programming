#include <stdio.h>
/**
 * main - Enrty point
 *
 * Return: Always 0
 */

int main(void)
{
	long long num;
	int maxPrime, oddPrime;

	num = 612852475143;
	maxPrime = 2;
	oddPrime = 37;
	while (num % 2 == 0)
	{
		maxPrime = 2;
		num = num / 2;
	}
	while (num != 1)
	{
		while (num % oddPrime == 0)
		{
			maxPrime = oddPrime;
			num = num / oddPrime;
		}
		oddPrime = oddPrime + 2;
	}
	printf("%d\n", maxPrime);	
}
