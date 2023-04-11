#include "main.h"

/**
 * create_array - Creates an array of characters, initializes it with a
 *                specific character, and returns a pointer to the array
 * @size: The size of the array to be created
 * @c: The character to initialize the array with
 *
 * Return: On success, returns a pointer to the newly created array. If size
 * is 0 or if memory allocation fails, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
