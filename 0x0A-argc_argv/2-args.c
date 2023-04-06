#include "main.h"

/**
 * main - Entry point of the program
 *
 * This program prints each command-line argument passed to it, including
 * the name of the program itself.
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: Always 0 (success)
 */


int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
