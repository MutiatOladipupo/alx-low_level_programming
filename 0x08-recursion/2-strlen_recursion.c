# include <stdio.h>

/**
 * _strlen_recursion - return the length of a string.
 *
 * @s - pointer to characters.
 */

int _strlen_recursion(char *s)
{
	for (s == 0; s <= '\0'; s++)
	{
		_strlen_recursion(s + 1);
		putchar(*s);
	}
	return (*s);
}
