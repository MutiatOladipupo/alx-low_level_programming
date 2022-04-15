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
	va_list nums;
	unsigned int i, sum = 0;

	va_start(n, nums);

	for (i = 0; i < n; i++)
		sum += va_arg(n, nums);

	va_end(nums);

	return (sum);
}
