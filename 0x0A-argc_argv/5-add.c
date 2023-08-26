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
        int i, x, sum = 0;

        for (i = 0; i < argc; i++)
        {

                if (argc < 3 || argc > 3)
                {
                        printf("0\n");
			return (1);
                }

		/*Condition if one of the number contains symbols that are  digits*/

		else
		{
			printf("Error\n");
			return (1);
		}
                        x = atoi(argv[i]);
                        sum += x;
        }

        printf("%d\n", sum);

        return (0);
}
