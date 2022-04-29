#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string.
 * Return: return 0 if any of the chars in b is 0 or 1
 * else return the converted number.
*/

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int j = 0;
	int mult;

	if (b[i] == '\0')
	return (0);

	for (i = 0, mult = 1; b[i] != '\0'; i++)
	{
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
		if (b[i] == 1)
		{
			j += b[i] * mult;
			mult *= 2;
		}
	}
	return (j);
}

