#include "lists.h"
#include "2-add_nodeint.c"

/**
 * insert_nodeint_at_index - Adds a node at a given position
 * @head: list to modify
 * @idx: index where to add the new node
 * @n: n value of the node
 *
 * Return: 0 if succesfull
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *this_node;
	listint_t *new;
	unsigned int i;

	if (!head)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	this_node = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (!this_node)
			return (NULL);

		this_node = this_node->next;
	}

	if (!this_node)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	new->next = this_node->next;
	this_node->next = new;

	return (new);
}
