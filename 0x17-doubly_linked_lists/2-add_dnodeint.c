#include "lists.h"

/**
 * add_dnodeint - adds node at beginning
 * @head: head of the list
 * @n: value of the node
 * Return: address of new element or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->next = NULL;
		(*head) = new_node;
		return (new_node);
	}
	else
	{
		new_node->next = (*head);
		(*head)->prev = new_node;
		new_node->prev = NULL;
		(*head) = new_node;
		return (new_node);
	}
}
