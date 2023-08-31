#include "main.h"
/**
 *binary_to_uint - converts binary to unsigned int
 *
 *@b:pointing to a string of 0 and 1 chars
 *
 *Return:the converted number, or 0 if
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length = strlen(b);
	int i;
	
	if (b == NULL)
		return (0);

	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result = result * 2  + (b[i] - '0');
	}
	return (result);
}
