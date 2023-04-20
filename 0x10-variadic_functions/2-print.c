#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			else
				printf("%s", str);
			if (i != (n - 1) && separator)
				printf("%s", separator);
		}
		va_end(args);
		printf ("\n");
}
