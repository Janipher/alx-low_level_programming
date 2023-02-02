#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: pointer to the first node in the list
 * @n: pointer to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *rose;

	rose = malloc(sizeof(listint_t));

	if (!rose)
		return (NULL);

	rose->n = n;
	rose->next = *head;
	*head = rose;

	return (*head);
}
