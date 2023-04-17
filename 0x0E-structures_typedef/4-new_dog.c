#include "dog.h"
#include <stdlib.h>

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * new_dog - Creates a new dog struct and initializes its members
 *
 * @name: Pointer to a character array that represents the name of the dog
 * @age: Age of the dog as a float
 * @owner: Pointer to a character array that represents the owner of the dog
 * Return: new_dog
 * This function creates a new dog struct, initializes its members with the
 * given values, and returns a pointer to the new struct. It first calculates
 * the lengths of the name and owner character arrays using the _strlen
 * function, and then allocates memory for the dog struct, name, and owner
 * using malloc. If any of the memory allocations fail, the function frees
 * any previously allocated memory and returns NULL. The function also
 * copies the name and owner character arrays into the corresponding members
 * of the dog struct using _strcpy. This function returns a pointer to the
 * newly created struct, or NULL if any errors occur during the memory
 * allocation process.
 */
dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
