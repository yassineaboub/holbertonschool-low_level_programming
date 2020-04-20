#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The first index where value is located else -1.
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
