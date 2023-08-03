#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_puts_recursion - function like puts()
 *@s:Input
 *Return: 0
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
