#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = i; k < 10; k++)
			{
				if (i == k)
					l = j + 1;
				else
					l = 0;
				for (l; l < 10; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (i == 9 && j == 8)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
