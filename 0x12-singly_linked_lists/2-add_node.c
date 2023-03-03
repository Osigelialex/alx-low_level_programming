#include "lists.h"

/**
 * add_node - adds a node to the beginning of the list
 *
 * @head: head of the linked list
 * @str: string stored at node
 *
 * Return: Address of the new Element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (*head == NULL)
	{
		*head = new_node;
		return new_node;
	}

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
