#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int to retrieve the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (sizeof(n) * 8 < index)
		return (-1);

	bit = n >> index;

	return (bit & 1);
}
