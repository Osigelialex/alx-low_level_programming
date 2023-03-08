#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the lists
 * @idx: index add node
 * @n: value of node
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *curr = *h;
	unsigned int track_count = 0;

	if (*h == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = curr;
		curr->prev = new_node;
		new_node->prev = NULL;
		(*h) = new_node;
		return (new_node);
	}

	while (curr->next != NULL)
	{
		if (track_count == idx)
		{
			new_node->prev = curr->prev;
			curr->prev->next = new_node;
			new_node->next = curr;
			curr->prev = new_node;
			return (new_node);
		}
		track_count++;
		curr = curr->next;
	}
	if (track_count == idx)
	{
		curr->next = new_node;
		new_node->prev = curr;
		new_node->next = NULL;
		return (new_node);
	}
	return (NULL);
}
