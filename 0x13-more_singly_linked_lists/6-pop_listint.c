#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: list to modify
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = (*head)->next;
	int n;

	if (!*head)
		return (0);
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
