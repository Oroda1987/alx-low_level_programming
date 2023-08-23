#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - returns the sum of all its parameters.
 *
 *@n: integer to find the sum
 *
 *Return:0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list aq;
	unsigned int i, sum = 0;

	va_start(aq, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)

		sum += va_arg(aq, int);
	va_end(aq);

	return (sum);

	return (0);


}
