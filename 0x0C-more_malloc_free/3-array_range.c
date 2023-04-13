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
	int size, i;
	int *ptr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
