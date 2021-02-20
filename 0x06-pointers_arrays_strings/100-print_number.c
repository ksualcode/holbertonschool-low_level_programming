#include "holberton.h"

/**
 * print_number - Prints a number
 * @n: int to print
 *
 * Return: nothing
 */

void print_number(int n)
{
	/* unsigned int m; */
	int m;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n / 10 != 0)
	{
		m = n / 10;
		print_number(m);
	}
	_putchar(n % 10 + '0');
}
