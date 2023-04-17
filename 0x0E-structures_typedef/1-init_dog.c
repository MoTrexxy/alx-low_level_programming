#include "dog.h"

/**
 * init_dog - initializes a dog structure
 * @d: pointer to structure
 * @name: name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Return: null
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
