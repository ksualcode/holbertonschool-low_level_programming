#include "holberton.h"

/**
 * get_square - returns the natural square root of a number.
 * @n: the number to calculate
 * @i: integer to iterate
 *
 * Return: the root of a numer
 */

int get_square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i == n)
		return (-1);
	else if (i * i != n)
		return (get_square(n, i + 1));

	return (0);
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to root
 *
 * Return: the root of a numer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (get_square(n, 1));
}
