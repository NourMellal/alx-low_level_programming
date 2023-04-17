#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints a struct of type dog
 * @d: Pointer to a struct of type dog
 *
 * This function takes a pointer to a struct of type dog and prints out its
 * contents. If the pointer is NULL, the function returns without printing
 * anything. If the name or owner members of the struct are NULL, the function
 * prints "(nil)" in their place. If the age member of the struct is negative,
 * the function also prints "(nil)" in its place. This function does not
 * return anything.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
