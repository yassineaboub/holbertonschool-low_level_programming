#include "lists.h"
/**
* free_listint2 - Function frees a list
*@head: head of the list
*/
void free_listint2(listint_t **head)
{
listint_t *k;
if (head == NULL)
return;
k = *head;
while (k != NULL)
{
k = k->next;
free(k);
}
*head = NULL;
}
