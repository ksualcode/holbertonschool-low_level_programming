#include "lists.h"

/**
 * dlistint_len - Returns the ammount of nodes in a list
 * @h: List to print
 * -----------------------------------------------
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (!h)
		return (NULL);

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}
