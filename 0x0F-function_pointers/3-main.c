#include "3-calc.h"

/**
 * main - Entry function
 * @argc: amount of arguments passed
 * @argv: argmuents passed
 *
 * Return: 0 if succesfull
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	char *op;
	int (*fun)(int, int);

	/* Checks right ammount of parameters */
	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* assigning valors to s */
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	/* Checks if dividing by 0 */
	if ((op[0] == '/' || op[0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Makes the calculation and assigns it to result */
	fun = get_op_func(op);

	/* checking if operator is valid */
	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = fun(a, b);
	printf("%d\n", result);
	return (0);
}
