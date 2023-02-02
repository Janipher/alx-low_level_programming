#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer to the first node of the linked list
 * @index: index of the node
 *
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t j = 0;
	listint_t *tutu = head;

	while (tutu && j < index)
	{
		tutu = tutu->next;
		j++;
	}
	return (tutu ? tutu : NULL);
}
