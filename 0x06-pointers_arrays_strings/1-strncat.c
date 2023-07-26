#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: Destination of the string
 *@src: Source of the string
 *@n: Perameter
 *Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);

}
