#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The unsigned long int to be printed.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shift;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, shift = 0; (temp >>= 1) > 0; shift++)
		;

	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
	}
}
