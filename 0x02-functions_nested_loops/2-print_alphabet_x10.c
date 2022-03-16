#include "main.h"

/**
 * print_alphabet_×10 - print alphabet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_×10(void)
{
	char c = 'a';
	int i, k;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(c + i);
		}
		_putchar(10);
	}

