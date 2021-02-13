#include "holberton.h"

/**
 * swap_int - swaps the values of a and b
 * @a: 1st value
 * @b: 2nd value
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
