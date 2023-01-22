#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: parameter
 * Return: sum if successful, if not 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list jenny;
	unsigned int j;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(jenny, n);

	for (j = 0; j < n; j++)
		sum += va_arg(jenny, int);

	va_end(jenny);
	return (sum);
}
