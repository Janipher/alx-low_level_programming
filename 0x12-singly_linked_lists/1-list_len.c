#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: a pointer
 * Return:  number of elements in a linked
 */

size_t list_len(const list_t *h)
{
	size_t result;

	result = 0;
	while (h != NULL)
	{
		h = h->next;
		result++;
	}
	return (result);
}
