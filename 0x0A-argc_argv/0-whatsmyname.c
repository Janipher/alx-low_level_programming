#include "main.h"
#include <stdio.h>

/**
 * main - Prints a programmes name
 * @argc: Counts argurments
 * @argv: Argurments
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%s\n", argv[0]);

	return (0);
}
