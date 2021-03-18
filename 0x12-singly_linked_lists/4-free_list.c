#include "lists.h"

/**
* free_list - frees a list
* @head: list to free
*
*/

void free_list(list_t *head)
{
	list_t *buscador = head;
	list_t *temp;

	if (!head)
		return;

	while (buscador->next)
	{
		temp = buscador;
		buscador = buscador->next;
		if (temp->str)
			free(temp->str);
		free(temp);
	}

	if (buscador->str)
		free(buscador->str);
	free(buscador);
}
