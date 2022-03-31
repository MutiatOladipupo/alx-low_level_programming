# include <stdio.h>

/**
 * _strlen_recursion - return the length of a string.
 *
 * @s - pointer to characters.
 * Return - return len.
 */

int _strlen_recursion(char *s)
{
	int len;

	for (len = 0; len <= '\0'; len++)
	{
		if (*s)
		{
			_strlen_recursion(s + 1);
		}
	}
		return (len);
	
}
