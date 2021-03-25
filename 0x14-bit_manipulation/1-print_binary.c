#include "holberton.h"

/**
 *binary_printer - prints a binary number
 *@n: Number to print
 *
*/
void binary_printer(unsigned long int n)
{
	unsigned long int temp;

  if (n == 0)
		return;
	temp = n & 1;

	n = n >> 1;
  /* Recursion */
	binary_printer(n);
	_putchar(temp + '0');

}


/**
 *print_binary - calls a function that prints a binary
 *@n: Number to process
 *
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
  
	binary_printer(n);
}
