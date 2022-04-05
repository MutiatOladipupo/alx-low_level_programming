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
	unsigned int n;

	if (size == 0)

	{
		
		return (NULL);
	}

	char* A = (char*)malloc(size * sizeof(char));
	if (n == 0)

	{
		A[n] = c;
		n++;
	}
	
	return (A);
}
