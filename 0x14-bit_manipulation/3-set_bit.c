#include "main.h"

/**
 *set_bit - set the bit at a given index to 1
 *@n:pointer to the number to be change
 *@index: index of the bit to set to 1
 *Return: i for success, -1 or failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
	return (-1);

	*n = ((1UL << index) | *n);
	return (1);


}
