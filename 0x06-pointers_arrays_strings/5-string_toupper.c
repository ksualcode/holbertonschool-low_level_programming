#include "holberton.h"

/**
 * *string_toupper - changes all characters to uppercase
 * @a: string to uppercasear
 *
 * Return: character
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i]; i++)
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
	return (a);
}
