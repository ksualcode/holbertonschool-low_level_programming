#include "lists.h"

/**
 * free_dlistint - Frees a list
 * @head: The head of a new double linked list
 * ----------------------------------------
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *fire;

	if (!head)
		return;

	for (; head;)
	{
		fire = head;
		head = head->next;
		free(fire);
	}
}
