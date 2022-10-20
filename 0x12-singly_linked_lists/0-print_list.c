#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: head node of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		if (*h == '\0')
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
