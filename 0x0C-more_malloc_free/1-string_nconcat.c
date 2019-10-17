#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* char *string_nconcat - function
* @n: bytes of s2
* @s1: pointer
* @s2: pointer
* Return: Always 0.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int a;
unsigned int index1;
unsigned int index2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (a = 0; s1[a] != '\0'; a++)
;
ptr = malloc(sizeof(char) * (a + n + 1));
if (ptr == NULL)
return (NULL);
for (index1 = 0; s1[index1] != '\0'; index1++)
ptr[index1] = s1[index1];
for (index2 = 0; index2 < n; index2++, index1++)
ptr[index1] = s2[index2];
ptr[index1] = '\0';
return (ptr);
}
