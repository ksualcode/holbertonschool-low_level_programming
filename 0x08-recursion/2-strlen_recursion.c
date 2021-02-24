#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to calculate the length
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == 0)
		return (0);
	n = _strlen_recursion(s + 1);
	n++;
	return (n);
}
