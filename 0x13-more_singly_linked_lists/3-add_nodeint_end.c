#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node created
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *rose;
	listint_t *temp = *head;

	rose = malloc(sizeof(listint_t));

	if (!rose)
		return (NULL);

	rose->n = n;
	rose->next = NULL;

	if (*head == NULL)
	{
		*head = rose;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = rose;
	return (*head);
}
