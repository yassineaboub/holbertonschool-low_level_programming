#include "lists.h"
/**
* add_nodeint - Function adds a new node at the beginning
*@head: pointer of the head
*@n: number
*Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newone;
newone = malloc(sizeof(listint_t));
if (newone == NULL)
return (NULL);
newone->n = *head;
*head = newone;
return (newone);
