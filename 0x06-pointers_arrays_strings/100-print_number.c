#include "holberton.h"

/**
 * print_number - Prints a number
 * @n: int to print
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
		m = n;
	if (n / 10 != 0)
	{
		print_number(m / 10);
	}
	_putchar(n % 10 + '0');
}
