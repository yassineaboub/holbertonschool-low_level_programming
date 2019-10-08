#include "holberton.h"
/**
* *_memset - copies a character
*@s: string
*@b: value
*@n: bytes
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
