#include "main.h"
#include <stdio.h>
/**
 *_puts_recursion - function that prints  a string
 *@s:Perameter to be printed
 *Return: No value
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}

}
