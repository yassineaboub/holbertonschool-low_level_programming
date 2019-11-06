#include "lists.h"
/**
* free_listint - Function frees the linked list
*@head: head of list
*/
void free_listint(listint_t *head)
{
listint_t *p;
if (head == NULL)
return;
p = head;
while (head != NULL)
{
p = head;
head = head->next;
free(p);
}
}
