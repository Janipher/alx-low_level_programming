#include <stdio.h>
#include "main.h"

/**
 *  _strlen - a function to print the length of a string
 *  @s: string to be supplied
 *  Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
