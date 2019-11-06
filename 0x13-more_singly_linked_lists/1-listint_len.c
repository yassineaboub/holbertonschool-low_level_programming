#include "lists.h"
#include <stdio.h>
/**
* listint_len - function that returns elements number
*@h: header
*Return: the number of elemets
*/
size_t listint_len(const listint_t *h)
{
size_t x = 0;

while (h != NULL)
{
h = h->next;
x++;
}
return (x);
}
