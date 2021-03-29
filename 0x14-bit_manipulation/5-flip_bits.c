#include "holberton.h"

/**
 * flip_bits - returns the number of bits needed to flip.
 * @n: number to check
 * @m: number to convert
 *
 * Return: number of bits you need fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sum = 0;
	unsigned int count = 0;

	sum = n ^ m;

	while (sum > 0)
	{
		if (sum & 1)
			count++;
		sum >>= 1;
	}
	return (count);
}
