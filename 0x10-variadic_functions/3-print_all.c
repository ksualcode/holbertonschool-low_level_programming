#include "variadic_functions.h"
#include <stdio.h>

/**
 * p_char - prints a character
 * @arg: list to use
 *
 */

void p_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * p_int - prints an int
 * @arg: list to use
 *
 */

void p_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * p_float - prints a float
 * @arg: list to use
 *
 */

void p_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * p_str - prints a string
 * @arg: list to use
 *
 */

void p_str(va_list arg)
{
	char *uwu = va_arg(arg, char*);

	if (uwu)
		printf("%s", uwu);
	else
		printf("(nil)");
}

/**
 * print_all - Function that prints anything
 * @format: format to print
 *
 * Return: 0 if succesfull
 */

void print_all(const char * const format, ...)
{
	va_list list;
	type_t type[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_str}
	};
	char *separator = "";
	int i = 0;
	int j = 0;

	va_start(list, format);
	while (format && format[i] != '\0')
	{
		while (j < 4)
		{
			if (format[i] == *type[j].type)
			{
				printf("%s", separator);
				type[j].f(list);
				separator = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(list);
}
