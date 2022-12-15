#include "main.h"

/**
 * main - function that prints the last digit of a number.
 * @n: int parameter
 *
 * Return: last digit
 */

int print_last_digit(int)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
