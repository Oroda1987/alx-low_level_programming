#include <stdio.h>
#include <stdlib.h>
/**
 *_memset - fills memory wiyh a constant byte
 *@s: memory area to be filled
 *@b: char to copy
 *@n:  number of times to copyet numberb
 *Return: pinter to the memory area s
 */

char *_memset(char *s, char b, unsigned ini n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);



/**
 *_calloc - allocate memory for an array
 *
 *@nmemb: number of elements in the array
 *
 *@size: size of each element
 *
 *Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL);
		{
			return (NULL);
		}
	_memset(ptr, o, nmemb * size);


	return (ptr);
}
}
