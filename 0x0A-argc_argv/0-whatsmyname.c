#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: Number of arguments supplied to the program.
 * @argv: Array of pointers to the arguments..
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i = argc - argc;

	printf("%s\n", argv[i]);

	return (0);
}
