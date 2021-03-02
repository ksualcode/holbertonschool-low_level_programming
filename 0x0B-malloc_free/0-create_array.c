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

	if (size <= 0)
		return ('\0');

	uwu = malloc(sizeof(char) * size);
	if (uwu == '\0')
		return ('\0');

	for (i = 0; i < size - 1; i++)
		uwu[i] = c;

	return (uwu);
}
