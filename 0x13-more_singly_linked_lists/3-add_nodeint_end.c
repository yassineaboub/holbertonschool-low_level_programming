#include "lists.h"
/**
* add_nodeint_end - Function adds a new node at the end
*@head: head of list
*@n: number
*Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *l, *d;
l = malloc(sizeof(listint_t));
if (l == NULL)
return (NULL);
l->n = n;
if (*head == NULL)
*head = l;
else
{
d = *head;
while (d->next != NULL)
d = d->next;
d->next = l;
l->next = NULL;
}
return (l);
}
