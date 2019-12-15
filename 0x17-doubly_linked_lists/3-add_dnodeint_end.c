#include "lists.h"
/**
* add_dnodeint_end -add new node to the list
* @head: lists head
* @n: the new node
* Return: the address of the new element or NULL if fail
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
