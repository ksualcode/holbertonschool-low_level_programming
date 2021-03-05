#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory
 * @nmemb: elements of an array
 * @size: size of the elements
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
