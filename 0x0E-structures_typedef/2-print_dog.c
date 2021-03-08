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
		if (d->name != 0)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");

		printf("Age: %f\n", d->age);

		if (d->owner != 0)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)");
	}
}
