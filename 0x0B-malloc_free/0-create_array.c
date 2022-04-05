#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with
 * @size: Size of array.
 * @c: The character the array is to be initialized with.
 * Return: Return NULL or a pointer.
 */

char *create_array(unsigned int size, char c)
{
        chat *A;
        unsigned int n = 0;

	if (size == 0)
		 
	{
		return (NULL);
	}

	char *A = malloc(size * sizeof(char));

	if (A == NULL)
	{
		return (NULL);
        }
	for (n = 0; n < size; n++)

	{
		A[n] = c;
	}
	return (A);
}
