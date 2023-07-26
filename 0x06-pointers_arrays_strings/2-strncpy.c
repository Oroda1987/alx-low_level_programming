#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: Destination
 *@src: Source
 *@n: Perameter to be used
 *Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
