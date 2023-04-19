#include "3-calc.h"

/**
 * main - performs a simple arithmetic operation on two integers
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * This program takes three command-line arguments: two integers and an
 * arithmetic operator (+, -, *, /, or %). It then performs the appropriate
 * arithmetic operation on the integers and prints the result to stdout.
 *
 * Return: 0 on success, or a non-zero value on failure
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
