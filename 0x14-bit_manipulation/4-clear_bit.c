#include "holberton.h"

/**
* clear_bit - Function sets 0 value to a given index
* @n: Num
* @index: index that set a bit
* Return: 1 on succes and -1 if exist error.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x = 1;
if (index > 64)
return (-1);
x = x << index;
x = ~x;
*n = *n & x;
return (1);
}
