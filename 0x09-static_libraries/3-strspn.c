#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to process
 * @accept: accepted chars
 *
 * Return: a number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{

	int i, j;
	int count = 0;
	int bool = 0;

	for (i = 0; s[i]; i++)
	{
		bool = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				bool = 1;
				count++;
			}
		}
		if (!bool)
			break;
	}

	return (count);

}
