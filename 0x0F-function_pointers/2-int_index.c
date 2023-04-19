#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a comparison function
 * @array: pointer to an integer array
 * @size: size of the array
 * @cmp: pointer to a function that takes an integer argument and returns
 *       an integer value
 *
 * This function searches for an integer in the specified array by applying
 * the specified comparison function to each element of the array. If the
 * comparison function returns a non-zero value for an element, the index of
 * that element is returned. If the integer is not found, the function returns
 * -1. If either the array or cmp pointer is NULL, the function returns -1.
 *
 * Return: the index of the first element for which the comparison function
 *         does not return 0, or -1 if no such element is found or if the
 *         array or cmp pointer is NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
