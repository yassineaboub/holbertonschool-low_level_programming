#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* _strdup -function that allocated space in memory
* @str: string
* Return: NULL if str is NULL and
* on success NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
char *s;
unsigned int i;
unsigned int len;
if (str == NULL)
{
return (NULL);
}
for (len = 0; str[len] != '\0'; len++)
;
s = (char *) malloc(sizeof(char) * (len + 1));
if (s == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
s[i] = str[i];
}
return (s);
}
