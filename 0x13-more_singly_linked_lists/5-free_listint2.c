#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointer to the 1st node of the linked list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *rose;

	if (head == NULL)
		return;

	while (*head)
	{
		rose = (*head)->next;
		free(*head);
		*head = rose;
	}

	*head = NULL;
}
