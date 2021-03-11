#include "variadic_functions.h"

/**
 * sum_them_all - Adds all the parameters given
 * @n: number of parameters you have
 *
 * Return: 0 if succesfull
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int num = 0;
	va_list list;

	if (n <= 0)
		return (0);

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		num += va_arg(list, int);
	}

	return (num);
}
