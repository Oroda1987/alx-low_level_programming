#include "main.h"
#include <string.h>
/**
*_memcpy- Copies memory area
*@dest:Destination
*@src:Source
*@n:Perameter to be copied
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);


}
