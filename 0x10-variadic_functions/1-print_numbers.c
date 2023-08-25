#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - print number followed by new line
 *@separator: string to be printed between numbers
 *@n: The number of integer passed to the function
 *@...: Variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int next;

	va_start(ap, n);
	for (next = 0; next < n; next++)
	{
		printf("%d", va_arg(ap, int));
		if (next != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(ap);

}
