#include "holberton.h"

/**
 * reverse_array - reverses an array
 * @n: number of elements
 * @a: string to reverse
 *
 * Return: d
 */

void reverse_array(int *a, int n)
{
	int i, buffer;

	for (i = 0, n = n - 1; i < n; i++, n--)
	{
		buffer = a[i];
		a[i] = a[n];
		a[n] = buffer;
	}
}
