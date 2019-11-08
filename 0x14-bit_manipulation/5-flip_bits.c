#include "holberton.h"

/**
* flip_bits - function that returns bits number to change
* @n: nbr 1
* @m: nbr 2
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j, k = 0;
unsigned long int t;
unsigned long int x = n ^ m;
for (j = 63; j >= 0; j--)
{
t = x >> j;
if (t & 1)
k++;
}
return (k);
}
