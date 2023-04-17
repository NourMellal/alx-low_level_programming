#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * This structure represents a dog, with a name, age, and owner. It is used
 * to hold information about individual dogs in a program. The structure is
 * defined using three members: a character pointer for the name, a float for
 * the age, and another character pointer for the owner.
 */	
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
