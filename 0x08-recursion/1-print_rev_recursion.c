#include <stdio.h>

/**
 * _print_rev_recursion: print a string in reverse.
 *
 * @s: pointer to characters
 *
 * Return: return0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
