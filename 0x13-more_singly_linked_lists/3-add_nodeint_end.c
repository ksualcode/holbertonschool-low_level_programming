#include "lists.h"

/**
* add_nodeint_end - adds a node to the beginning of a list
* @head: list to base in
* @str: string to copy
*
* Return: The direction of the new address
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *search = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!search)
		*head = new;
	else
	{
		while (search->next)
			search = search->next;

		search->next = new;
	}
	return (new);
}
