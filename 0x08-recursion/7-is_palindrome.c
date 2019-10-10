#include "holberton.h"
/**
* _strlen_recursion - length of a string
*@s: string
*Return: length of a string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (1 + _strlen_recursion(s));
}
/**
* palindrome - the palindrome string
*@s: string
*@len: length
*Return: the value needed
*/
int palindrome(char *s, int len)
{
if (len <= 1)
return (1);
else if (*s == *(s + len - 1))
return (palindrome(s + 1, len - 2));
else
return (0);
}

/**
* is_palindrome - a palindrome
*@s: string
*Return: 1 if string is a palindrome and0 if is not
*/
int is_palindrome(char *s)
{
int len;
len = _strlen_recursion(s);
if (len <= 1)
return (1);
return (palindrome(s, len));
}
