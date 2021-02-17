#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i]; i++)
	{
	}
	if (i % 2 == 0)
		j = i / 2;
	else
		j = i / 2 + 1;
	for (j = j; str[j]; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
