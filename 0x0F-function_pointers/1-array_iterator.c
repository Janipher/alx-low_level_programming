#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - calls a function to act on array elements
 * @size: size of array
 * @array: Name of the array in which the function acts on.
 * @action: a pointer to the function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	action(array[i]);
}
