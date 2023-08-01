#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of two diagonals of square matrix
 *@a:Perameteer to be added
 *@size:Size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, row, col, sum = 0, a[size];

	if (row == col)
	{
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				if (i == j)
					sum = (sum + a[i][j]);
				printf("%d", sum);
			}
		}
	}
	else
	printf("Matrix is not square diagonal sum is not possible");
}
