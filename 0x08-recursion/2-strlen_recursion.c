# include <stdio.h>

/**
 * _strlen_recursion - return the length of a string.
 *
 * @s - pointer to characters.
 * Return - return k.
 */

int _strlen_recursion(char *s)
{
	int k;
	k = 0;

	if (*s)
	{
		_strlen_recursion(s + 1);
		k++;
	}
	return (k);
	
}
