#include <stdio.h>
#include <stdarg.h>
/**
 *print_all - prints anything
 *@format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sp = " ";

	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char*);
					if (!str)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
					i++;
					continue;
			}
			sp = ",";
			i++;
		}
	}
	printf("\n");

	va_end(ap);

}
