#include "holberton.h"
/**
* strlen_recursion - length
* @s: char
* Return: strlen_recursion
*/
int strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (strlen_recursion(s + 1) + 1);
}
