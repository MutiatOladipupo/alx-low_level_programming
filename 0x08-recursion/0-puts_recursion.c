#include <stdio.h>

/**
 * _puts_recursion: print a string using recursion
 *
 * @s: pointer to characters
 *
 * Return: return0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		putchar('\n');
}

