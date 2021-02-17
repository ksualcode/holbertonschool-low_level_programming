#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints an array of the length given
 * @a: string to print
 * @n: number of the string
 *
 * Return: d
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
