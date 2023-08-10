#include "main.h"
#include <stdlib.h>
/**
*malloc_checked -allocates memory
*
*@b: number of bytes to be allocated
*
*Return: a pointerto the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
