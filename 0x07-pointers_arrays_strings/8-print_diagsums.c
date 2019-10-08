#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - sum
*@a: array
*@size: size
*Return: Nothing
*/
void print_diagsums(int *a, int size)
{
int i, j, k, s;
i = 0;
k = 0;
s = 0;
j = size * size;
while (i < j)
{
k = k + a[i];
i = i + size + 1;
}
i = size - 1;
while (i < (j - 1))
{
s = s + a[i];
i = i + size - 1;
}
printf("%d, %d", k, s);
printf("\n");
}
