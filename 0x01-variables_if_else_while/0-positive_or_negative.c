#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d greater than 0 is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d number is 0 is zero\n", n);
	}
	else
	{

		printf("%d number is less than 0 is negative", n);
	}
	return (0);
}
