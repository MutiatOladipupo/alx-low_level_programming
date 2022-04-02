#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program.
 * @argc: is a counter of argument for int.
 * @argv: is a counter for value of the argument to char
 * Return: Always 0.
**/

int main(int argc, char *argv[])
{
(void)argv;

printf("%d\n", (argc - 1));

return (0);
}

