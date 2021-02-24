#include "holberton.h"

/**
 * get_prime - returns the prime number
 * @n: the number to calculate
 * @i: integer to iterate
 *
 * Return: the root of a numer
 */

int get_prime(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
			return (0);
		else
			return (get_prime(n, i + 1));
	}
	else
		return (1);
}


/**
 * is_prime_number - returns certain numbers if it has a prime number
 * @n: the number to check
 *
 * Return: 0 if the number isn't prime, and 1 if it does
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (get_prime(n, 2));
}
