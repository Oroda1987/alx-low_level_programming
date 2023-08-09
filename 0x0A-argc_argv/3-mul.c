#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry pint
 *
 *@argc: Argument counter
 *
 *@argv: Argument vector
 *
 *Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, x, result = 1 ;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

		for (i = 1; i < argc; i++)
		{
			x = strtol(argv[i], NULL, 10);
			result = result * x;
		}
	}

	printf("%d\n", result);

	return (0);
}
