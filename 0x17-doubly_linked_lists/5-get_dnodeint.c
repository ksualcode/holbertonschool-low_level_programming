#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a specific node of a list
 * @head: List to iterate and get the node
 * @index: The index node to retrieve
 * ----------------------------------------
 * Return: The address of the desired node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node = head;

	if (!head)
		return (NULL);

	for (i = 0; i < index; i++)
		node = node->next;

	return (node);
}
