#include "3-calc.h"

/**
 * op_add - Adds two variables
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the result of the compute
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substracts two variables
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the result of the compute
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two variables
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the result of the compute
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two variables
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the result of the compute
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Gets the module of two variables
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the result of the compute
 */

int op_mod(int a, int b)
{
	int thefuk = a % b;

	return (thefuk);
}
