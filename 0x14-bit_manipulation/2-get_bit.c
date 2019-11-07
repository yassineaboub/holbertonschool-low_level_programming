#include "holberton.h"
/**
* get_bit - function returns the value of bit in index
* @n: num which converted
* @index: check bits place 
* Return: int
**/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long x;

if (index > 64)
return (-1);
x = ((n >> index) & 1);
return (x);
}
