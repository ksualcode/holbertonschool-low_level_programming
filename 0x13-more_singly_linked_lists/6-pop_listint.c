#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: list to modify
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t = temp = *head;
	int n = temp->n;

	if (!head)
		return (0);
	if (!*temp->next)
		free (*head);
	else
		*head = *head->next
	free (temp);
	return (n);
}
