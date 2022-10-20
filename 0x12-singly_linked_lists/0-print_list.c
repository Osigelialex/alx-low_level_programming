#include "lists.h"
#include <stdio.h>

/**
 *print_list - Prints all elements of a list_t list.
 *@h: Pointer to the structure list_t.
 *
 *Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	const list_h *ptr = h;
	size_t nodes;

	nodes = 0;

	while (h)
	{

		if (ptr->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}
