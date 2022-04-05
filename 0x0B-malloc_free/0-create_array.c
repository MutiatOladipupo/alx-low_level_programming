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
<<<<<<< HEAD
	unsigned int n = 0;
	char *A;
=======
        unsigned int n = 0;
        char *A;
>>>>>>> 7d402cea8c08b7da28258e3ba85d67d9f8a8bfea

	if (size == 0)
		 
	{
		return (NULL);
	}

<<<<<<< HEAD
	A = malloc(n * sizeof(char));
=======
	A = malloc(sizeof(char) * size);
>>>>>>> 7d402cea8c08b7da28258e3ba85d67d9f8a8bfea

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
