#include <stdio.h>
#include "3-calc.h"

/**
 * main - contain your main function only
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char j;
	int (*opera)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	opera = get_op_func(argv[2]);

	if (!opera)
	{
		printf("Error\n");
		exit(99);
	}

	j = *argv[2];

	if ((j == '/' || j == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = opera(arg1, arg2);

	printf("%d\n", result);
	return (0);
}
