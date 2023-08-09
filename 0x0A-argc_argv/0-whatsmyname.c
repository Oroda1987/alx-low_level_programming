#include <stdio.h>
/**
 *main - Entry point
 *@argc: Argument count
 *@argv: Argument vector
 *Return: Always 0
 */

int main(int argc, char **argv)
{
	int j;
	for (j = 0 ; j< argc; j++)
	{
		printf("%s", argv[0]);
	}
	return (0);
}
