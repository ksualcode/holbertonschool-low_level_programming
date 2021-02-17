#include "holberton.h"

/**
 * print_rev - prints the reverse of a string
 * @s: string to reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
