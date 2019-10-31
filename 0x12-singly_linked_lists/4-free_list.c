#include "lists.h"
/**
* free_list - frees memory of the list
* @head: lists pointer
**/
void free_list(list_t *head)
{
list_t *temp;
while (head)
{
temp = head;
free(head->str);
free(temp);
head = head->next;
}
}
