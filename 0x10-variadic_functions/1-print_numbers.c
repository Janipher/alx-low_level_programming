#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: pointer param
 * @n: param
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list jupiter;
	unsigned int z;

	va_start(jupiter, n);

	for (z = 0; z < n; z++)
	{
		printf("%d", va_arg(jupiter, int));
		if (separator && z < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(jupiter);
}
