#include "main.h"
/**
 *print_alphabet_x10 - print 10 times alphabet in lowecase
 *
 */
void print_alphabet_x10(void)
{
	int a, b;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 26; b++)
		{
			_putchar(alphabet[b]);
		}
		_putchar('\n');
	}
}
