#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: param
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list paul;
	unsigned int p;
	char *sea;

	va_start(paul, n);

	for (p = 0; p < n; p++)
	{
		sea = va_arg(paul, char *);

		if (sea)
		{
			printf("%s", sea);
		}
		else
		{
			printf("(nil)");
		}
		if (p < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(paul);
}
