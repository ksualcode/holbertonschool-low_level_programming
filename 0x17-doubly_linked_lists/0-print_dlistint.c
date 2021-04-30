#include "lists.h"

/**
 * print_dlistint - Prints a double-linked list
 * @h: List to print
 * -----------------------------------------------
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (!h)
		return (0);

	for (i = 0; h; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (i);
}
