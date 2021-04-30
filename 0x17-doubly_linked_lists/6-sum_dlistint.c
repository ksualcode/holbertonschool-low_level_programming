#include "lists.h"

/**
 * sum_dlistint - Adds all the values of a doubly list
 * @head: The head of a list
 * ----------------------------------------
 * Return: The sum of all the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int n = 0;

	if (!head)
		return (0);

	for (; head;)
	{
		n += head->n;
		head = head->next;
	}

	return (n);
}
