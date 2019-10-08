#include "holberton.h"
/**
* *_strpbrk - searches a string
*@s: pointer
*@accept: pointer
*Return: pointer
*/
char *_strpbrk(char *s, char *accept)
{
int i, j, h;
for (i = 0; s[i] != '\0'; i++)
{
h = 0;
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
h = 1;
}
}
if (h == 1)
{
return (s + i);
}
}
return ('\0');
}
