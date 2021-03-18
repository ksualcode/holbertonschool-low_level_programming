#include "lists.h"

/**
* _strlen - counts the ammount of characters of a string
* @str: string to count
*
* Return: The ammount of characters
*/

unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	for (i = 0; str[i]; i++)
	{
	}

	return (i);
}

/**
* add_node_end - adds a node to the beginning of a list
* @head: list to base in
* @str: string to copy
*
* Return: The direction of the new address
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *search = *head;
/*
*	if (!head)
*		return (NULL);
*/
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);

	if (!temp->str)
	{
		free(temp);
		return (NULL);
	}

	temp->len = _strlen((char *)str);
	temp->next = NULL;

	if (!search)
		*head = temp;
	else
	{
		while (search->next)
			search = search->next;

		search->next = temp;
	}

	return (temp);

}
