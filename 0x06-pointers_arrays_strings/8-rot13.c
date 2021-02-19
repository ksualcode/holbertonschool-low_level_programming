#include "holberton.h"

/**
 * *rot13 - turn into 1337
 * @a:
 *
 * Return: d
 */

char *rot13(char *a)
{
	int i, j;
	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cod[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i]; i++)
	{
		for (j = 0; let[j]; j++)
		{
			if (let[j] == a[i])
			{
				a[i] = cod[j];
				break;
			}
		}
	}
	return (a);
}
