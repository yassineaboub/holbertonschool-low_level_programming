#include "lists.h"
/**
* sum_dlistint - returns the sum of all data
* @head: lists head
* Return: sum of the list
*/
int sum_dlistint(dlistint_t *head)
{
int i = 0;
while (head != NULL)
{
i += head->n;
head = head[0].next;
}
return (i);
}
