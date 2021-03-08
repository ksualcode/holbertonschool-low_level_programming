#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees all the dogos 
 * @d: dogo to free
 *
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
