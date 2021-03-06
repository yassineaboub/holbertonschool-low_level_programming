#include "holberton.h"

/**
* binary_to_uint - function converts binary to an unsigned int
*@b: string
*Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int nbr;
int l, k;
if (b == NULL)
return (0);
l = 0;
while (b[l + 1] != '\0')
l++;
k = 1;
nbr = 0;
while (l >= 0)
{
if (b[l] != '1' && b[l] != '0')
return (0);
nbr += (b[l] - '0') * k;
k *= 2;
l--;
}
return (nbr);
}
