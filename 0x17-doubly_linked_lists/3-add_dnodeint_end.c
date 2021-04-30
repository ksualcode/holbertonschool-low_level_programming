#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));
    dlistint_t *search = *head;

    if (!head || !new)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (!(*head))
    {
        new->prev = NULL;
        *head = new;
        return (*head);
    }


    for (; search->next;)
        search = search->next;

    new->prev = search;
    search->next = new;

    return (new);
}