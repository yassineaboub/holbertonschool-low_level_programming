#include "lists.h"
#include <stdio.h>
/**
* print_listint - function prints lists elements
*@h: header
*Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t x = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
x++;
}
return (x);
}
