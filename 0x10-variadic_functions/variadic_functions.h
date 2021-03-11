#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct type - struct
 * @type: character to evaluate
 * @f: function to execute
 *
 * Description: struct to determine what function to use
 */

typedef struct type
{
	char *type;
	void (*f)(va_list arg);
} type_t;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif /* #ifndef VARIADIC_FUNCTIONS.H */
