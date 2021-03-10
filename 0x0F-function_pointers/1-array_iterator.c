#include "function_pointers.h"

/**
 * array_iterator - executes a given parameter
 * @array: array to iterate
 * @size: the size of the array
 * @action: the function to executes
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array)
		if (action)
			for (i = 0; i < size; i++)
				action(array[i]);
}
