#include <stdio.h>

/**
<<<<<<< HEAD
 * _puts_recursion -  print a string, followed by a new line.
 *
=======
 * _puts_recursion - print a string, followed by a new line.
>>>>>>> 7f21f877b9253e420bfdaeb4715f750052fab184
 * @s: pointer to characters
 *
 * Return: return 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		putchar('\n);
}
<<<<<<< HEAD


=======
>>>>>>> 7f21f877b9253e420bfdaeb4715f750052fab184
