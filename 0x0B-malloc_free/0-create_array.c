#include "holberton.h"
#include <stdlib.h>
/**
* *create_array - make an array
*@size: size
*@c: character
*Return: NULL is size is 0 or a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;

if (size != 0)
{
a = malloc(size * sizeof(c));
}
else
{
return (NULL);
}
if (a == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
a[i] = c;
}
return (a);
}
