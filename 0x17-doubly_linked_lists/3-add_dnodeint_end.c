#include "lists.h"
/**
* add_dnodeint_end -add node to list.
*Description: Function that adds a new node at the end of a dlistint_t list
* @head: Head of the list. Pointer to a structure dlistint_s
* @n: int value in the structure
* Return: the address of the new element or NULL if fail (the new node)
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *nnode, *tp;
if (head == NULL)
return (NULL);
nnode = malloc(sizeof(dlistint_t));
if (nnode == NULL)
return (NULL);
nnode->n = n;
nnode->next = NULL;
if (*head == NULL)
{
nnode->prev = NULL;
*head = nnode;
return (nnode);
}
tp = *head;
while (tp->next != NULL)
tp = tp->next;
nnode->prev = tp;
tp->next = nnode;
return (nnode);
}
