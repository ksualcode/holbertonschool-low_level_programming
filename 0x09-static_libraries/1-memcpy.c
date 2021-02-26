#include "holberton.h"

/**
 **_memcpy - Write a function that copies memory area
 * @src: string to copy
 * @dest: string to copy to
 * @n: number of characters to copy
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
