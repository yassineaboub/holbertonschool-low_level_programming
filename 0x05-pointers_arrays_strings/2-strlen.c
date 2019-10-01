#include "holberton.h"
#include <stdio.h>

/**
* int _strlen
*@i:counter
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
