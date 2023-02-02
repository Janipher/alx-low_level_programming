#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: pointer to the 1st node of the linked list
 *
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *ray;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	ray = *head;
	*head = (*head)->next;
	free(ray);

	return (data);
}
