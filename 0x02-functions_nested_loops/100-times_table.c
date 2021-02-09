#i8c0cb5anclude "holberton.h"

/**
 * print_spaces - prints the number of spaces
 * @n: number to evaluate
 *
 * Return: Nothing
 */

void print_spaces(int n)


/**
 * print_times_table - prints the last digit
 * @n: number to print tables
 *
 * Return: the last digit of the number
 */

void print_times_table(int n)
{
	int i, j, mult;
	if (n > 0 && n < 15)
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = i * j;
				if (mult >= 10 && mult < 100)
				{
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}

				else if (mult >= 100)
				{
					_putchar((mult / 100) + '0');
					_putchar((mult / 10 % 10) + '0');
					_putchar((mult % 10) + '0');
				}

				else
					_putchar(mult + '0');

				if (j == n)
					continue;
				_putchar(',');

				if (j != 0 && mult >= 100)
					_putchar(' ');
				else if (j != 0 && mult >= 10 && mult < 100)
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
