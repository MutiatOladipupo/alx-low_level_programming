#include <stdio.h>
#include "main.h"

/**
 * print_binary - program prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	while (n >> 0)
	{
		if (n >> 1)
		{
			if (n & 1)
			{
				_putchar(1);
			}
		}
	}
	else
	{
		_putchar('0');
	}
}
