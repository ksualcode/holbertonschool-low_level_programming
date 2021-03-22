#include "lists.h"

/**
* print_listint - prints all elements of a list
* @h: list to print
*
* Return: The number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int i;
	listint_t *search = (listint_t *)h;

	if (!h)
		return (0);

	for (i = 0; search; i++)
	{
		if (!search->n)
			printf("(nil)\n");
		else
			printf("%i\n", search->n);
		search = search->next;
	}

	return (i);
}
