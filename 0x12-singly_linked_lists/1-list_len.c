#include "lists.h"
/**
* list_len - funtction that prints the number of the list
* @h: list pointer
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
