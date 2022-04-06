#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointerto a newly allocated space in memory.
 * @str: The string a copy is made from which is contained in the memory space.
 *
 * Return: Return NULL or a pointer.
 */

char *_strdup(char *str)
{
	int n = 0;
	int k = 0;
	char *A;

	if (str == NULL)
	{
		return (NULL);
	}

	for (n = 0; str[n]; n++)
		k++;

	A = malloc((k + 1) * sizeof(char));

	if (A == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n]; n++)

	{
		A[n] = str[n];

		A[n] = '\0';
	}
	return (A);
}
