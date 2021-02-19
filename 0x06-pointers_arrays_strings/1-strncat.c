#include "holberton.h"

/**
 * *_strncat - Concatenates 2 strings until n
 * @src: string to concatenate
 * @dest: string being concatenated
 * @n: number of characters to concatenate
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}
	for (j = 0; j < n; j++)
		dest[i + j] = src[j];
	/*
	dest[i + j] = '\0';
	*/
	return (dest);
}
