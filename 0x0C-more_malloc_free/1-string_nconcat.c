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
 * string_nconcat - concatenates 2 strings
 * @s1: 1st string to concatenate
 * @s2: 2nd string to concatenate
 * @n: number of characters to copy from s2
 *
 * Return: a pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1max, s2max, i;
	char *uwu;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1max = string_count(s1);
	s2max = string_count(s2);

	if (n >= s2max)
		n = s2max;

	uwu = malloc(sizeof(char) * (s1max + n + 1));

	if (!uwu)
		return (NULL);

	for (i = 0; i < s1max; i++)
		uwu[i] = s1[i];
	for (i = 0; i < n; i++)
		uwu[s1max + i] = s2[i];
	uwu[s1max + i] = '\0';

	return (uwu);
}
