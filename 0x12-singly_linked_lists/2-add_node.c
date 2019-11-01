#include "lists.h"

/**
* add_node - adds a new
* @head: pointer to the start of the list
* @str: a constant character pointer
* Return: a pointer to the new structure
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int len = 0;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
for (; str[len]; len++)
;
new->str = strdup(str);
new->len = len;
new->next = *head;
*head = new;
return (new);
}
