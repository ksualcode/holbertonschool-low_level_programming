#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list 
 * @head: The head of a new double linked list
 * @n: The data of the new node
 * ----------------------------------------
 * Return: The address of the new node 
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));

    if (!head || !new)
        return (NULL);

    new->n = n;
    new->prev = NULL;
    new->next = *head;
    if (*head)
        (*head)->prev = new;
    *head = new;

    return (*head);
}