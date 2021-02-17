#include "holberton.h"

/**
 * rev_string - reverse string
 * @s: string to reverse
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j, buff;

	for (i = 0; s[i]; i++)
	{
	}
	i--;
	for (j = 0; j < i; j++, --i)
	{
		buff = s[j];
		s[j] = s[i];
		s[i] = buff;
	}
}
