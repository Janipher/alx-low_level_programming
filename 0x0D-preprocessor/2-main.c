#include <stdio.h>
#include "main.h"

/**
 * main - Compiled at the main
 * Description: program that prints the name of the file it was compiled from
 * Return: 0
 */

int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
