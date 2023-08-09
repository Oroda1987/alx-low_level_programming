#include <stdio.h>
/**
 *main - Entry point
 *@argc: Argument counter
 *@argv: Argument vector
 *Return: Always 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < **argv; i++)
	{
		printf("%d\n", argc);
	}
	return (0);
}
