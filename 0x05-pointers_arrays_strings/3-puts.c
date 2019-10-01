#include "holberton.h"

/**
* _puts
* @str:prints a string
* Always 0.
*/
void _puts(char *str)
{
int i;
{
i = 0;
{ while (str[i] != 0)
putchar (str[i]);
i++;}
putchar ('\n');
return (i);
}
