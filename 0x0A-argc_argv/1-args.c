#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: Counts arguments
 * @argv: Arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	(void) argv[0];

	printf("%i\n", argc - 1);

	return (0);
}
