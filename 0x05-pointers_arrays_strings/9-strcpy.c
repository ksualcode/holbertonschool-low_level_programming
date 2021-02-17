#include "holberton.h"
#include "stdio.h"

/**
 * *_strcpy - Copies a string to another string 
 * @dest: destination array
 * @src: array to be copied 
 *
 * Return: the pointer to "dest"
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] ; i++)
	{
		dest[i] = src[i];
	}
	return(dest);
}
