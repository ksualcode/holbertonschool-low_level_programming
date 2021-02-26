#include "holberton.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to search in
 * @needle: string to search
 *
 * Return: pointer to the byte found
 */

char *_strstr(char *haystack, char *needle)
{

	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return ((haystack + i));
	}

	return (0);

}
