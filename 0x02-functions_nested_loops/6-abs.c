#include "holberton.h"

/**
 * _abs - computes the absolute of a number
 * @n: number to evaluate
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
