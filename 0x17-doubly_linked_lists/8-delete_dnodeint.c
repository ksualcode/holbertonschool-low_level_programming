#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a specific node
 * @head: List to use
 * @index: The position to delete the node
 * ----------------------------------------
 * Return: The address of the desired node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *fire;
	unsigned int i; 

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		if (!(*head)->next)
		{
			*head = NULL;
			free(*head);
			return (1);
		}
		fire = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(fire);
		return (1);
	}

	node = *head;

	for (i = 0; i < index; i++)
	{
		if (node)
			node = node->next;
		else
			return (-1);
	}

	if (!node->next)
	{
		fire = node;
		node = node->prev;
		node->next = NULL;
		free(fire);
		return (1);
	}

	fire = node;
	node = node->prev;
	node->next = fire->next;
	fire->next->prev = node;
	free(fire);

	return (1);
}
