#include "main.h"

/**
 * print_diagonal - function
 *@n :parameter
 * Return: nothing
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (i < j)
					_putchar (' ')
			}
			_putchar ('\n');

		}


	}
}
