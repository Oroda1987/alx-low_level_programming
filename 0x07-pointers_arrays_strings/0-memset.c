#include "main.h"
#include <string.h>
/**
 *_memset - Fills memory with constant byte
 *@s: poited destination
 *@b: constant byte
 *@n: bytes
 *Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);

}
