#include "holberton.h"
/**
* *_strstr - function
*@haystack: string
*@needle: string
*Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{
int i, j, b;
i = 0;
while (haystack[i] != '\0')
{
j = 0;
b = i;
while (haystack[i] == needle[j] && haystack[i] != '\0'
&& needle[j] != '\0')
{
i++;
j++;
}
if (needle[j] == '\0')
return (haystack + b);
i = b + 1;
}
return ('\0');
}
