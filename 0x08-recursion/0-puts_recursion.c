#include "holberton.h"

/**
* _puts_recursion - print a string
* @s: char
* Return : nothing
*/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1)
}
}
