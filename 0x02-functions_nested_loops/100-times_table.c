#include "holberton.h"

/**
 * print_times_table - prints the last digit
 * @n: number to print tables
 *
 * Return: the last digit of the number
 */

void print_times_table(int n)
{
	int i, j;
	if (n > 0 && n < 15)
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if ((i * j) >= 10 && (i * j) < 100)
				{
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}

				else if ((i * j) >= 100)
				{
					_putchar(((i * j) / 100) + '0');
					_putchar(((i * j) / 10 % 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}

				else
					_putchar((i * j) + '0');

				if (j == n)
					continue;
				_putchar(',');

				if (j != 0 && (i * j) >= 100)
					_putchar(' ');
				else if (j != 0 && (i * j) >= 10 && (i * j) < 100)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
}
