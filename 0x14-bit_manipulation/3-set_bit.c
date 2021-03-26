#include "holberton.h"

/**
 * set_bit - sets the value of a bit at a given index
 * @n: number to process
 * @index: index
 *
 * Return: 1 if sucess, -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size, check;

	size = sizeof(*n) * 8 - 1;
	if (index > size)
		return (-1);

	check = 1 << index;
	*n = check | *n;

	return (1);
}
