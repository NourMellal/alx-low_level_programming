#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * This program multiplies two integers passed as command-line arguments and
 * prints the result to the console.
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: 0 if the program completes successfully, otherwise 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);
}
