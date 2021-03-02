#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: 1st string to concatenate
 * @s2: 2nd string to concatenate
 *
 * Return: Pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, tlength;
	char *uwu;

	for (i = 0; s1[i]; i++)
	{
	}
	size1 = i;

	for (i = 0; s2[i]; i++)
	{
	}
	size2 = i;
	tlength = size1 + size2 + 1;
	uwu = malloc(sizeof(char) * (tlength));
	if (uwu == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		uwu[i] = s1[i];

	for (i = 0; i < size2 + 2; i++)
		uwu[size1 + i] = s2[i];

	return (uwu);

}
