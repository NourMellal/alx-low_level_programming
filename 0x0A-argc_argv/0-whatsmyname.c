#include <stdio.h>

/**
 * main - Prints the name of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	/* Suppress unused parameter warnings */
	(void)argc;
	(void)argv;

	/* Print the program name */
	printf("%s\n", argv[0]);

	return (0);
}
