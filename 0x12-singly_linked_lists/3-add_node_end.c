#include "lists.h"
#include <string.h>
/**
* add_node_end  - Add new struct to the list
* @head: header pointer
* @str: String
*Return: the address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;
int len;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
for (len = 0; str[len]; len++)
;
new->str = strdup(str);
new->len = len;
new->next = NULL;
if ((*head) == NULL)
(*head) = new;
else
{
temp = *head;
for (; temp->next;)
temp = temp->next;
temp->next = new;
}
return (new);
}
