#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *grave = h;
	size_t result = 0;

	while (grave != NULL)
	{
		if (grave->str != NULL)
			printf("[%d] %s\n", grave->len, grave->str);
		else
			printf("[0] (nil)\n");
		result += 1;
		grave = grave->next;
	}
	return (result);
}
