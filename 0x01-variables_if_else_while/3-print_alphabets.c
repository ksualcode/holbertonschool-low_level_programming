#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c > 'Z'; c++)
	{
		putchar(c);
		if (c == 'z')
			c = 'A';

	}
	putchar('\n');
	return (0);

}
