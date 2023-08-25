#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - prints strings
 *@separator: the string to be printed between numbers
 *@n: number of integers passed to the function
 *@...: A variable number of numbers to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int next;

	va_start(ap, n);

	for (next = 0; next < n; next++)
	{
		str = va_arg(ap, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (next != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
