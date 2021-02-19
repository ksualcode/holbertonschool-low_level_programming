#include "holberton.h"

/**
 * *leet - turn into 1337
 * @a:
 *
 * Return: d
 */

char *leet(char *a)
{
	int i, j;
	char let[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; a[i]; i++)
	{
		for (j = 0; let[j]; j++)
		{
			if (let[j] == a[i] || (let[j] - 32) == a[i])
			{
				a[i] = num[j];
				break;
			}
		}
	}
	return (a);
}
