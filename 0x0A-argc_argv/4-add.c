#include <stdio.h>
#include <stdlib.h>
/**
 *main - Enrt point
 *
 *@argc: Argument count
 *
 *@argv: Argument vector
 *
 *Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (argc >= '@' || argc <= 'a')
		{
			printf("Error\n");
			return (1);
		}
		if (argc != 3)
		{
			printf("0\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
