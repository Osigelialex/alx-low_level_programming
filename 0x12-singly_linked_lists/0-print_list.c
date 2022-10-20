#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: head node of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (*h == '\0')
			printf("[0] (nil)");
		h = h->next;
		count++;
	}
	return (count);
}
