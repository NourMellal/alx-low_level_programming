#include "main.h"

/**
 * print_numbers - check the code
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int c;

	for (c >= 48; c <= 57; c++)
	{
		_putchar (c % 10 + 48);
	}
	_putchar ('\n');
}
