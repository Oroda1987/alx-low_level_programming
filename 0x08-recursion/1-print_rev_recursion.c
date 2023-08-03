#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion - print a string in revers
 *@s: Perameter to be printed in revers
 *Return: No value
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
