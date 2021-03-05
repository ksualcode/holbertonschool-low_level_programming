#include "holberton.h"
#include <stdlib.h>

/**
 * hecked - allocates memory using malloc
 * @b: amount of memory to allocate
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *uwu;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	uwu = malloc(size * nmemb);
	if (!uwu)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		uwu[i] = 0;

	return (uwu);
}
