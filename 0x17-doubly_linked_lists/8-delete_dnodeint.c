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
	{
		if (node)
			node = node->next;
		else
			return (NULL);
	}
	return (node);
}

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

	node = get_dnodeint_at_index(*head, index);

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
