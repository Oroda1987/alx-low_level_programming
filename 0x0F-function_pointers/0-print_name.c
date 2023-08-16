#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - print name from function pointer
 *@name: char string
 *@f: function pointer tanking arguments from string
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
