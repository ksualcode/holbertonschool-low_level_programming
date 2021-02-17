#include "holberton.h"

/**
 * print_rev - prints the reverse of a string
 * @s: string to reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
	}
	for (i = i; i > 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
