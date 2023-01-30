#include "lists.h"

/**
 * free_list - function that frees
 * @head: head of linked lists
 */

void free_list(list_t *head)
{
	list_t *player;

	while ((player = head) != NULL)
	{
		head = head->next;
		free(player->str);
		free(player);
	}
}
