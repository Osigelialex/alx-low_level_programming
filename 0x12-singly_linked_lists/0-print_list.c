#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: head node of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	while (h != NULL)
	{
		if (*h == '\0')
			printf("[0] (nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
	}
	return (count);
}
