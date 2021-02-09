#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints the last digit
 * @n: number to roll
 *
 * Return: Nothing
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
		printf("\n");
	}
	else if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
		printf("\n");
	}
	else
		printf("%d\n", n);
}
