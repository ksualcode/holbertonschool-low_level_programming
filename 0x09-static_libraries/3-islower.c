#include "holberton.h"

/**
 * _islower - Checks for lowercase characters
 * @c: Character to evaluate
 *
 * Return: 1 or 0, depending of a condition
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
