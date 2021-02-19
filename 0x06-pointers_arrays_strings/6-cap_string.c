#include "holberton.h"

/**
 * *cap_string - Uppercases the first letter of a word
 * @a: string to uppercasear
 *
 * Return: char
 */

char *cap_string(char *a)
{
	int i, j;
	char ws[] = {9, 32, 10, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; a[i]; i++)
	{
		if (i == 0)
		{
			if (a[i] >= 'a' && a[i] <= 'z')
				a[i] = a[i] - 32;
		}
		else
			for (j = 0; ws[j]; j++)
				if (a[i] == ws[j])
					if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
					{
						a[i + 1] = a[i + 1] - 32;
						break;
					}
	}
	return (a);
}
