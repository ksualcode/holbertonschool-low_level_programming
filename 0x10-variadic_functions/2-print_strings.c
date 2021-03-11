#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings
 * @separator: character to print between numbers
 * @n: number of parameters you have
 *
 * Return: 0 if succesfull
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *uwu;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		uwu = va_arg(list, char *);
		if (!uwu)
			printf("(nil)");
		else
			printf("%s", uwu);

		if (separator && i + 1 != n)
			printf("%s", separator);
	}
	printf("\n");
}
