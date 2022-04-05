#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a specific char.
 * @size: Size of array.
 * @c: The character the array is to be initialized with.
 * Return: Return NULL or a pointer.
 */

char *create_array(unsigned int size, char c)
{
	int n;
	char *A;

	char *A = (char*)malloc(size * sizeof(char));
	if (size == 0)
	{
		free(A);
		return (A = NULL);
	}

	else
	{
		for (n = 0, n < size, n++)
		{
			char A[n] = c;
		}

		return (A);
	}
}
