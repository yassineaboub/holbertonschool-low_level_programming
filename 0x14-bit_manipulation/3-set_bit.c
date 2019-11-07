#include "holberton.h"
/**
* set_bit - Function sets the value of bit to 1 at a given index
*@n: number
*@index: index to set a bit
*Return: 1 if it worked or -1 if an error occurred.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int k;

if (index > 64)
return (-1);
k = 1 << index;
*n = *n | k;
return (1);
}
