#include "function_pointers.h"

/**
 * print_name - prints a name using a given function pointer
 * @name: pointer to a character array containing the name to print
 * @f: pointer to a function that takes a pointer to a character array
 *     and returns no value
 *
 * This function prints the specified name using the function pointed to by f.
 * If either the name or
 * f pointers are NULL, the function returns without printing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
