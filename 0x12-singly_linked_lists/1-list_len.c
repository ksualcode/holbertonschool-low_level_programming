#include "lists.h"

/**
* list_len - returns the number of elements
* @h: list to process
*
* Return: Number of elements
*/

size_t list_len(const list_t *h)
{
	int i;
	list_t *search = (list_t *)h;

	if (!h)
		return (0);

	for (i = 0; search; i++)
	{
		search = search->next;
	}
	return (i);
}
