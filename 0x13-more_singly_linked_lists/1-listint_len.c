#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: a pointer
 *
 * Return: number of elements in a linked
 */

size_t listint_len(const listint_t *h)
{
	size_t gaver = 0;

	while (h)
	{
		gaver++;
		h = h->next;
	}

	return (gaver);
}
