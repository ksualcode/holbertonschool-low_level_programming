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
	printf("%s\n", argv[argc - 1]);
	return (0);
}
