#include "holberton.h"
#include <stdio.h>

/**
 * main - the entry function
 * @argc: number of parameters
 * @argv: string with the parameters
 *
 * Return: A number
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
