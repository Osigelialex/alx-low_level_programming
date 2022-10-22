#include "lists.h"

/**
 * list_len - returns number of elements in a linked list_t list
 * @h: pointer to head node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		count++;
	}
	return (count);
}
