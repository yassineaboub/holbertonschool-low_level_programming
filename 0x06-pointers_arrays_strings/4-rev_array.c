#include "holberton.h"

/**
* reverse_array - reverse
* @a: array;
* @n: number of elements in array
* Return: 0
*/

void reverse_array(int *a, int n)
{
int i;
int temp;

i = 0;
n = n - 1;
while (i <= n)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
i++;
n--;
}
