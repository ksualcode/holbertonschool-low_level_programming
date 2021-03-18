#include "lists.h"

/**
* print_list - prints all elements of a list
* @h: list to print
*
* Return: The number of nodes
*/

size_t print_list(const list_t *h)
{
	int i;
	list_t *search = (list_t *)h;

	if (!h)
		return (0);

	for (i = 0; search; i++)
	{
		if (!search->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", search->len, search->str);
		search = search->next;
	}

	return (i);
}
