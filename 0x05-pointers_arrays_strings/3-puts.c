#include "holberton.h"

/**
* _puts - function
* @str:prints a string
* Always 0.
*/
void _puts(char *str)
{
int i;

i = 0;

while (str[i] != '\0')
{
_putchar (str[i]);
i++;
}
_putchar ('\n');
}
