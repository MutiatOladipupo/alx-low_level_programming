#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string.
 * Return: if (b != '0' && b != '1'), return 0
           if (b == '\0'), return NULL
	   else, return the converted number.
*/

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int j = 0;

	if (b[i] == '\0')
	return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
		else
		{
			j += b[i];
		}
	}
	return (j);
}

