#include "variadic_functions.h"

/**
 * print_strings - Prints a variable number of strings, separated by a string.
 *
 * @separator: The string to print between the strings.
 * @n: The number of strings to print.
 * @...: The strings to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(args);
}
