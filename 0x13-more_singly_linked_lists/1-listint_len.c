#include "lists.h"

/**
* listint_len - returns the number of elements
* @h: list to process
*
* Return: Number of elements
*/

size_t listint_len(const listint_t *h)
{
	int i;
	listint_t *search = (listint_t *)h;

	if (!h)
		return (0);

	for (i = 0; search; i++)
	{
		search = search->next;
	}
	return (i);
}
