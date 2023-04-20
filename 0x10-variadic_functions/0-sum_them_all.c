#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of its variable arguments
 *
 * @n: the number of arguments passed to the function
 *
 * Return: the sum of the arguments, or 0 if the number of arguments is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);
		while (i < n)
		{
			sum = sum + va_arg(args, int);
			i++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
