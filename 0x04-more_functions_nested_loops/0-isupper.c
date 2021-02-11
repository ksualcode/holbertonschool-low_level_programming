#include "holberton.h"

/**
 * _isupper - Checks for uppercase letters
 * @c: character to evaluate
 *
 * Return: 1 if upper, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
