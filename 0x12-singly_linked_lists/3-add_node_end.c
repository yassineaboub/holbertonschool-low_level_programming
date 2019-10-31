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
list_t *new, *tmp;
unsigned int strlen;

tmp = *head;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
for (strlen = 0 ; str[strlen] != '\0' ; strlen++)
{
}
new->len = strlen;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new;
}
return (new);
}
