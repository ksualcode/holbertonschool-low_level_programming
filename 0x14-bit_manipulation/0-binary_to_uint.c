#include "holberton.h"

/**
 * _strlencheck - counts the ammount of chars of a string
 * @str: string to count
 *
 * Return: the lenght
 */

int _strlencheck(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != '0' && str[i] != '1')
		{
			return (0);
		}
	}

	return (i);
}

/**
 * binary_to_uint - convers a binary number to an u_int
 * @b: binary string to convert
 *
 * Return: the binary number converted
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, mul = 0;
	int length;

	if (!b)
		return (0);

	length = (_strlencheck((char *)b)) - 1;
	/* checks if it's a binary number */
	if (length == -1)
		return (0);

	for (; length >= 0; length--)
	{
		if (mul == 0)
			mul = 1;
		else
			mul *= 2;

		if (b[length] == '1')
		{
			n += mul;
		}
	}

	return (n);
}
