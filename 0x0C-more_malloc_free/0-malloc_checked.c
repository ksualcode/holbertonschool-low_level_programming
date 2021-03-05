#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to allocate
 *
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *uwu;

	uwu = malloc(sizeof(int) * b);
	if (!uwu)
		exit(98);
	return (uwu);
}
