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
<<<<<<< HEAD
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (argc >= '@' || argc <= 'a')
=======
	int i, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);

		if (*flag)
>>>>>>> 38d1c22c3f659dec91825b8d4353c2ef8b7eeadc
		{
			printf("Error\n");
			return (1);
		}
<<<<<<< HEAD
		if (argc != 3)
		{
			printf("0\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
=======
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

>>>>>>> 38d1c22c3f659dec91825b8d4353c2ef8b7eeadc
	return (0);
}
