#include "main.h"
#include <stdio.h>
/**
 *print_array - prints element of an array of integers
 *@a: Array element to be printed
 *@n:Number of element of array to be printed
 *Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");

}
