#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of size characters
 * @size: Size of the array
 * @c: Character to initialize
 *
 * Return: NULL if fails, pointer if it works
 */

char *create_array(unsigned int size, char c)
{
	char *uwu;
	unsigned int i;

	uwu = (char *)malloc(sizeof(char) * size);

	if (uwu == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size - 1; i++)
		uwu[i] = c;

	return (uwu);
}
