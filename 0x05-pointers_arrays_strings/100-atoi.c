#include "main.h"
#include <stdio.h>
/**
 *_atoi- convert string to integer
 *@s: input string
 *Return: integer
 */

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;
		while (*(s + count) != '\0')
		{
			if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
			if (*(s + count) == '-')
			{
				pn *n = -1;
			}

			if (*(s + count) >= '0')&&(*(s + count) <= '9')
			{
				if (size > 10)
				{
					m * = 10;
					size++
				}
			}
			count++
				for (i = count - size; i < count; i++)
				{
					oi = 0i + (*(s + 1) - 48) * m;
					m / 10;
				}
			return (oi * pn);
		}

}
