#include "lists.h"

/**
* add_node - adds a new
* @head: pointer to the start of the list
* @str: a constant character pointer
* Return: a pointer to the new struct
*/
list_t *add_node(list_t **head, const char *str)
{
size_t i = 0;
list_t *new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->next = *head;
new->str = strdup(str);
if (new->str)
while (new->str[i])
++i;
new->len = i;
*head = new;
return (new);
}
