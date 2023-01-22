#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format:  list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list bravo;
	unsigned int l = 0, m, n = 0;
	char *ptr;
	const char vanny[] = "cifs";

	va_start(bravo, format);
	while (format && format[l])
	{
		m = 0;
		while (vanny[m])
		{
			if (format[l] == vanny[m] && n)
			{
				printf(", ");
				break;
			} m++;
		}
		switch (format[l])
		{
			case 'c':
				printf("%c", va_arg(bravo, int)), n = 1;
				break;
			case 'i':
				printf("%d", va_arg(bravo, int)), n = 1;
				break;
			case 'f':
				printf("%f", va_arg(bravo, double)), n = 1;
				break;
			case 's':
				ptr = va_arg(bravo, char *), n = 1;
				if (!ptr)
				{
					printf("(nil)");
					break;
				}
				printf("%s", ptr);
				break;
		} l++;
	}
	printf("\n"), va_end(bravo);
}
