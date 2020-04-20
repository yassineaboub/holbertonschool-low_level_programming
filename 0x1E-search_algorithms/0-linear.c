#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/*
* linear_search - function that searches for a value in an array of integers
* int i : elp
* return : -1
*/


int linear_search(int *array, size_t size, int value)
{
size_t i = 0;
for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
