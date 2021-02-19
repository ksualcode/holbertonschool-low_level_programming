#include "holberton.h"

/**
 * *_strncpy - Copy 2 strings until n
 * @src: string to concatenate
 * @dest: string being concatenated
 * @n: number of characters to concatenate
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; src[i]; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		if (j < i)
			dest[j] = src[j];
		else
			dest[j] = '\0';
	}
	/* dest[i] = '\0'; */
	return (dest);
}
