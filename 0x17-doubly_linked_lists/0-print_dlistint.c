#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t nodes = 0;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		nodes++;
		curr = curr->next;
	}
	return (nodes);
}
