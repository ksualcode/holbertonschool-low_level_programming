#include <stdlib.h>
#include "holberton.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *uwu;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	uwu = malloc(sizeof(int) * size);
	if (uwu == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		uwu[i] = min++;

	return (uwu);
}
