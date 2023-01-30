#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * @head: head of the linked list
 * @str: string to store the list
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t b = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[b])
		b++;

	new->str = strdup(str);
	new->len = b;
	new->next = *head;
	*head = new;

	return (*head);
}
