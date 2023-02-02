#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position
 * @head: pointer to the first node in the linked list
 * @idx: index of the list where the new node should be added
 * @n: The integer data of the new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *mode, *ray = *head;
	size_t j = 0;

	mode = malloc(sizeof(listint_t));
	if (!mode)
		return (NULL);

	mode->n = n;
	mode->next = NULL;

	if (!*head && !idx)
	{
		*head = mode;
		return (mode);
	}

	else if (!*head && idx)
		return (NULL);

	else if (!idx)
	{
		mode->next = ray;
		*head = mode;
		return (mode);
	}

	while (j < (idx - 1))
	{
		ray = ray->next;
		j++;
	}
	mode->next = ray->next;
	ray->next = mode;

	return (mode);
}
