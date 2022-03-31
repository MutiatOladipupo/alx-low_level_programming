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

	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	return (n *= factorial(n - 1));

}
