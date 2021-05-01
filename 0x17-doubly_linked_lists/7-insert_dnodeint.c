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
 * insert_dnodeint_at_index - Insert a new node in the index position
 * @h: List to iterate
 * @idx: The position to add new node
 * @n: value of new node
 * ----------------------------------------
 * Return: The address of the desired node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy, *temp, *new = malloc(sizeof(dlistint_t));

	if (!h || !new)
		return (NULL);

	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}

	copy = get_dnodeint_at_index(*h, idx - 1);

	if (!copy->next)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}

	temp = copy->next;

	new->n = n;
	new->prev = copy;
	copy->next = new;
	new->next = temp;
	temp->prev = new;

	return (new);
}
