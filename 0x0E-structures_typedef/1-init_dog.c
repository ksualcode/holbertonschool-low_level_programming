#include "dog.h"

/**
 * init_dog - Function that initialice a dogo
 * @d: a dog type of variable
 * @name: the name of the dogo
 * @age: the age of the dogo
 * @owner: Owner of the dogo
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
