#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * @h: pointer
 * 
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint *grad = h;
	size_t sum = 0;

	while (grad != NULL)
	{
		printf("%d\n", grad->n);
		sum += 1;
		grad = grad->next;
	}

	return (sum);
}
