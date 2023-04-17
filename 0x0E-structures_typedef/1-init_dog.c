#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a dog struct with given values
 * @d: Pointer to a struct of type dog
 * @name: Pointer to a char array that represents the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to a char array that represents the owner of the dog
 *
 * This function initializes a struct of type dog with the given values. It
 * takes a pointer to a struct of type dog, a pointer to a char array that
 * represents the name of the dog, the age of the dog as a float, and a
 * pointer to a char array that represents the owner of the dog. If the
 * pointer to the dog struct is not NULL, the function assigns the given
 * values to the corresponding members of the struct. This function does not
 * return anything.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
