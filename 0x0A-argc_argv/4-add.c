#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the entry function
 * @argc: number of parameters
 * @argv: string with the parameters
 *
 * Return: A number
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1, sum = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isalpha(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
