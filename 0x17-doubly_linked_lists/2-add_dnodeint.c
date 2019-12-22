#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - add new node at the beginning of list
* @head: lists head
* @n: new node
* return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *i;
i = malloc(sizeof(dlistint_t));
if (i == NULL)
return (NULL);
i->n = n;
i->prev = NULL;
if (*head == NULL)
{
i->next = NULL;
*head = i;
}
else
{
i->next = *head;
(*head)->prev = i;
*head = i;
}
return (i);
}
