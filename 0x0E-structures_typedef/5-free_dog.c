#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog struct
 * @d: Pointer to the dog struct to be freed
 *
 * This function frees the memory allocated for a dog struct, including
 * the memory allocated for the name and owner character arrays, and the
 * memory allocated for the dog struct itself. If the input pointer is NULL,
 * the function does nothing. This function is useful for avoiding memory leaks
 * when working with dynamically allocated dog structs.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
