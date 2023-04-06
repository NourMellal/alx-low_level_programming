#include "main.h"

/**
 * main - Entry point of the program
 *
 * This program prints the number of command-line arguments passed to it,
 * excluding the name of the program itself.
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: Always 0 (success)
 */

int main(int  argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
