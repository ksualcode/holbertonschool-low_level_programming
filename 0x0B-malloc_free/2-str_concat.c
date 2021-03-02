#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_count - counter
 * @s: string to count
 *
 * Return: number of characters
 */

int string_count(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
	}

	return (i);
}


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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = string_count(s1);
	size2 = string_count(s2);

	tlength = size1 + size2 + 1;
	uwu = malloc(sizeof(char) * tlength);
	if (uwu == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		uwu[i] = s1[i];

	for (i = 0; i < size2; i++)
		uwu[size1 + i] = s2[i];

	return (uwu);
}
