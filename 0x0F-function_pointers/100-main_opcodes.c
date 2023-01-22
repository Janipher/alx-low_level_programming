#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 * @argv: argument vector
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *ptr = (char *) main;
	int b, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (b = 0; b < nbytes; b++)
	{
		printf("%02x", ptr[b] && 0xFF);
		if (b != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
