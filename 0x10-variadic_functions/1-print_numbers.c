#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers given
 * @separator: character to print between numbers
 * @n: number of parameters you have
 *
 * Return: 0 if succesfull
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (!separator)
		separator = "";

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(list, int), separator);
	}
	printf("\n");
}
