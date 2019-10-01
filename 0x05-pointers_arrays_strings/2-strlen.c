#include "holberton.h"
#include <stdio.h>

/**
* _strlen - function
* @s:counter
* Return: Always 0.
*/
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != 0)
i++;
return (i);
}
