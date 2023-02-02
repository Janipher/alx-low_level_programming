#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @index: is the index of the node that should be deleted
 * @head: The head node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ray = *head;
	listint_t *tutu = NULL;
	size_t j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ray);
		return (1);
	}

	while (j < index - 1)
	{
		if (!ray || !(ray->next))
			return (-1);

		ray = ray->next;
		j++;
	}

	tutu = ray->next;
	ray->next = tutu->next;
	free(tutu);

	return (1);
}
