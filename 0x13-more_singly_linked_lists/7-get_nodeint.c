#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: list to use
 * @index: index of the node
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *search = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (!search)
			return (NULL);
		search = search->next;
	}
	return (search);
}
