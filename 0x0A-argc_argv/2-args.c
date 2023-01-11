#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: Counts arguments
 * @argv: Arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
	}
	return (0);
}
