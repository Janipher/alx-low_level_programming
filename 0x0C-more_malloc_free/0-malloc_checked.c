#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc
* @b: integer variable that holds the memory size
* Return: Always 0
*/

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
		{
		if (ptr == NULL)
		exit(98);
		}
		return (0);
		}
