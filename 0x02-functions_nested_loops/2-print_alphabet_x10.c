#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - print 10 times alphabet in lowecase
 *
 */
void print_alphabet_x10(void)
{
	char j;
        char i;
	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
int main(void)
{
	print_alphabet_x10();
	return (0);
}
