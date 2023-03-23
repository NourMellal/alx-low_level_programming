#include "main.h"

/**
 * print_diagonal - function
 *@n :parameter
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i = 0;
	int a;

	while (i < n)
	{
		a = i;
		while (a--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
