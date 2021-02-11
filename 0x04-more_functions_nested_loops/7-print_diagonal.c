#include "holberton.h"

/**
 * print_diagonal - Prints a diagonal line
 * @n: time the diagonals are printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
