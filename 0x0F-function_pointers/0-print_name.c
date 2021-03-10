#include "function_pointers.h"

/**
 * print_name - Prints a given name with the passed function
 * @name: name to print
 * @f: function to use
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name)
		if (f)
			f(name);
}
