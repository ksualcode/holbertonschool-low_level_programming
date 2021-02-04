#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char c = 'a';

	do {
		putchar(c++);
	} while (c != '{');
	putchar('\n');

	return (0);
}
