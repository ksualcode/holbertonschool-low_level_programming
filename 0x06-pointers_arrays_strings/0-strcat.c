#include "holberton.h"

/**
 * *_strcat - Concatenates 2 strings
 * @src: string to concatenate
 * @dest: string being concatenated
 *
 * Return: @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}
	for (j = 0; src[j]; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
