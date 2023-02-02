#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: a pointer
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t gaver = 0;

	while (h)
	{
		printf("%d\n", h->n);
		gaver++;
		h = h->next;
	}

	return (gaver);
}
