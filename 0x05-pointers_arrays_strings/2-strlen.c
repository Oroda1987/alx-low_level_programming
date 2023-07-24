#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strlen - returns the length of string
 *@s: paremeter length to be checked
 *Return: 0
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{	
		length++;
		s++;
	}
		return (length);
}
