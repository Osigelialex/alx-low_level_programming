#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of linked list
 * @head: head of the list
 * @index: nth index
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int track_index = 0;

	while (head != NULL)
	{
		if (track_index == index)
			return (head);

		head = head->next;
		track_index++;
	}
	return (NULL);
}
