#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at an index
 * @head: List to modify
 * @index: number of nodes to move
 *
 * Return: 0 if succesfull
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *this_node, *target;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	this_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(this_node);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		this_node = this_node->next;

		if (!this_node)
			return (-1);
	}

	target = this_node->next;
	this_node->next = target->next;
	free(target);

	return (1);
}
