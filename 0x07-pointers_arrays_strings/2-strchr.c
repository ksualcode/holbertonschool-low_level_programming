#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to check
 * @c: character to check
 *
 * Return: a pointer to the position to the first character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; s++, i++)
		if (*s == c)
			return (s);

	return ('\0');
}
