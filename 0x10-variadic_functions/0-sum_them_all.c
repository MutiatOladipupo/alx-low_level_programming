#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all its parameters.
 * @n: A constant variable.
 * @...: Anonymous parameters.
 * return: Return sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;

	if (n == 0)
	{
		return (0);
	}

	else
	{
		va_arg(n, ...);
		sum(n, ...);
	}
}
