#include "holberton.h"

/**
 * get_length - gets the length of a string
 * @s: string to evaluate
 *
 * Return: the length of a string
 */

int get_length(char *s)
{
	int n = 0;

	if (*s == 0)
		return (0);
	n = get_length(s + 1);
	n++;
	return (n);
}

/**
 * palindrome_check - checks if it's a palindrome
 * @s: string to evaluate
 * @i: start of the search
 * @max: maximum of the string
 *
 * Return: if it's palindrome
 */

int palindrome_check(char *s, int i, int max)
{
	max--;
	if (s[i] != s[max])
		return (0);
	else if (i >= max)
		return (1);
	return (palindrome_check(s, i + 1, max));
}

/**
 * is_palindrome - returns the check of the palindrome_check function
 * @s: string to evaluate
 *
 * Return: if it's a palindrome or not
 */

int is_palindrome(char *s)
{
	/*
	 * if (*s == 0)
	 *	return (1);
	 */
	return (palindrome_check(s, 0, get_length(s)));
}
