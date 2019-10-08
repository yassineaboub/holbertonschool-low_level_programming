#include "holberton.h"
/**
* *_strchr - function
*@s: string pointed
*@c: character to search
*Return: s
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
else
{
return ('\0');
}
}
