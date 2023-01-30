#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of a linked list
 * @str: string to store in the list
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *mama;
	size_t baba = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	while (str[baba])
		baba++;

	new->len = baba;
	new->next = NULL;
	mama = *head;

	if (mama == NULL)
		*head = new;

	else
	{
		while (mama->next != NULL)
		mama = mama->next;
		mama->next = new;
	}

	return (*head);
}
