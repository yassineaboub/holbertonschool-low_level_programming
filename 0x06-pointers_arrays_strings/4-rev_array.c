#include "holberton.h"

/**
* reverse_array - reverse
*
* @a: pointer
* @n: number
*/

void reverse_array(int *a, int n)
{
int i = 0, j, k = 0;
for (j = n - 1; i < j; j--)
{
k = a[i];
a[i] = a[j];
a[j] = k;
i++;
}
}
