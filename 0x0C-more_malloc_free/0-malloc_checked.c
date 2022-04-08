#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Size of memory that is to be allocated.
 * Return: Return pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *A;
	
	A = malloc(sizeof(b));
	
	if (A == NULL)
	{
		exit(98);
	}
	
	return (A);
}
