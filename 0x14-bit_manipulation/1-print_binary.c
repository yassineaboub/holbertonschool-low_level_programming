#include "holberton.h"

/**
* print_binary -  fucntion prints the binary numbers
* @n: scanned number
* Return: void
*/
void print_binary(unsigned long int n)
{
int i = 0;
unsigned long int x = n;
while ((x >>= 1) > 0)
i++;
while (i >= 0)
{
_putchar ((n >> i) &1 ? '1' : '0');
i--;
}
}
