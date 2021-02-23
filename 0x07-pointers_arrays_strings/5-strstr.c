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
	int bool = 0;

	for (i = 0; haystack[i]; i++)
	{
		bool = 0;
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] == needle[j])
				bool = 1;
			else
			{
				bool = 0;
				break;
			}
		}
		if (bool)
			return ((haystack + i));
	}
	return ('\0');

}
