#include "holberton.h"

/**
 * _puts - Basically a puts but with _putchar
 * @str: string to evaluate
 *
 * Return: d
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
