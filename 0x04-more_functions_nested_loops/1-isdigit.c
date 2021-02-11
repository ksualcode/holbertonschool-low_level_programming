#include "holberton.h"

/**
 * int _isdigit - returns if the character is a digit
 * @c: character to evaluate
 *
 * Return: 1 if it's a digit and 0 if not
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
