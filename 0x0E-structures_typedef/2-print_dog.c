#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dogo with all its characteristics
 * @d: pointer to doggo
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf ("Name: %s\n", d->name);
		printf ("Age: %f\n", d->age);
		printf ("Owner: %s\n", d->owner);
	}
}
