#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * @head: pointer to the first node in the linked list
 *
 * Return: sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *ray = head;

	while (ray)
	{
		result += ray->n;
		ray = ray->next;
	}

	return (result);
}
