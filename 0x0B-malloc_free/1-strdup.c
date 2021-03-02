#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to reallocate
 *
 * Return: a string
 */

char *_strdup(char *str)
{
	char *uwu;
	int i, strsize;

	if (str == NULL)
		return (NULL);

	for (strsize = 0; str[strsize]; strsize++)
	{
	}

	uwu = malloc(sizeof(char) * strsize);
	if (uwu == NULL)
		return (NULL);

	for (i = 0; i < strsize - 1; i++)
		uwu[i] = str[i];
	return (uwu);
}
