#include "holberton.h"
/**
* _strspn - function
*@s: string
*@accept: string
*Return: the number of character of s
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int c = 0;
int i, j, h;
for (i = 0; s[i] != '\0'; i++)
{
h = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
h = 1;
}
}
if (h == 0)
{
break;
}
c++;
}
return (c);
}
