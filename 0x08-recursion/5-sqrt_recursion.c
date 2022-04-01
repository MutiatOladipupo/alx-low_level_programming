/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (_sqrt_recursion(n, root));
}

