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
	unsigned int n = 0;
	char *A = (char *)malloc(n * sizeof(char));

	if (size ==0)
		 
	{
		return (A = NULL);
	}
	for (n = 0; n < size; n++)

	{
		A[n] = c;
	}
	return (A);
}
