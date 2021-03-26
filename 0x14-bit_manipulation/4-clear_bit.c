#include "holberton.h"

/**
 *clear_bit - sets the index bit to 0
 *@n: Number to process
 *@index: index
 *
 *Return: 1 if success, -1 if not
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size, check = 1;

	size = sizeof((*n)) * 8;
	if (index > size)
		return (-1);

	check = ~(check << index);
	*n = *n & check;

	return (1);
}
