#include "holberton.h"

/**
 * _isalpha - Checks for lowercase and uppercase characters
 * @c: Character to evaluate
 *
 * Return: 1 or 0, depending of a condition
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
