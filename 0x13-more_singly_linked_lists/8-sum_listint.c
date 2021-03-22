#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a list
 *
 *
 */

int sum_listint(listint_t *head)
{
	listint_t *search = head;
	int i, n = 0;

	for (i = 0; search; i++)
	{
		n += search->n;
		search = search->next;
	}
	return (n);
}
