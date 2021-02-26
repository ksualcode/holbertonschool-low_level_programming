#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry function
 * @argc: number of parameters
 * @argv: string with the parameters
 *
 * Return: A number
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
