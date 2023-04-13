#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers containing all values from
 * min to max ordered from min to max
 *
 * @min: The minimum value in the range
 * @max: The maximum value in the range
 *
 * Return: A pointer to the newly created array, or NULL if
 * the allocation fails or min > max
 */
int *array_range(int min, int max)

{
	int size, *arr, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
