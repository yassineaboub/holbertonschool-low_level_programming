#include "holberton.h"

/**
*_strcmp - function
* @s1 : string
* @s2 : string
* Return : difference
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
