#include "main.h"

/**
 * main - function that prints the sign of a number.
 * @n : number to check
 *
 * Return 1 if greater than 0, 0 if zero, -1 if less than 0
 */

int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}

	return (test);
}

