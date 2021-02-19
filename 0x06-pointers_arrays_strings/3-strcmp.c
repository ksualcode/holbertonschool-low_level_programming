#include "holberton.h"

/**
 * *_strcmp - compares 2 strings
 * @s1: First string to cmpare
 * @s2: 2nd string to compare
 *
 * Return: depends
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] || s2[i]; i++)
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
	return (0);
}
