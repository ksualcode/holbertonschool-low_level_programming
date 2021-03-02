#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a double pointer
 */

int **alloc_grid(int width, int height)
{
	int **uwu, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	uwu = malloc(sizeof(int *) * height);
	if (uwu == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		uwu[i] = malloc(sizeof(int) * width);
		if (uwu[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(uwu[i]);
			free(uwu);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			uwu[i][j] = 0;
	return (uwu);
}
