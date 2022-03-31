#include "stdio.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The given number 
 *
 * Return: return int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else 
	{
		return (n * factorial(n - 1));
	}
}
