#include "holberton.h"

/**
 * print_last_digit - prints the last digit
 * @n: number to evaluate
 *
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit = -lastdigit;

	_putchar(lastdigit + '0');
	return (lastdigit);
}
