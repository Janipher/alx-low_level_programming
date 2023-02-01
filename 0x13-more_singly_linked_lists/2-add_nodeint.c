#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: A pointer to the address of the head of the listint_t list
 * @n: an int
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *syntax;

	syntax = malloc(sizeof(listint_t));
	if (syntax == NULL)
	{
		return (NULL);
	}

	syntax->n = n;
	syntax->next = *head;

	*head = syntax;

	return (syntax);
}
