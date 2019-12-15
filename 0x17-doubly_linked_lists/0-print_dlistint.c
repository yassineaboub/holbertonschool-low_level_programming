#include "lists.h"

/**
* print_dlistint - print elements of dlistint_t
* @h: list's head
*Return: nodes number
*/

size_t print_dlistint(const dlistint_t *h)
{
int i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
