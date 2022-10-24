#include "lists.h"

/**
 * print_listint - prints elements of a listint_t list
 * @h: pointer to head node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes = nodes + 1;
		h = h->next;
	}
	printf("-> %d elements", nodes);
	return (nodes);
}
