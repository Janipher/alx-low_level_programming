#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @size: size of the arrays
 * @cmp: pointer to the function
 * @array: Name of the array in which the function acts on
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
					return (i);
					}
					}
					return (-1);
					}
