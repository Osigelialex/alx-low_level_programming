#include "lists.h"

/**
 * add_node - adds a node to the beginning of the list
 *
 * Return: Address of the new Element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t new_node = malloc(sizeof(list_t));

	new_node->str = str;
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
		return;
	new_node->next = *head;
	*head = new_node;
	return new_node;
}
