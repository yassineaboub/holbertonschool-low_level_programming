#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* free_grid - free a 2 dimensional grid
*@grid: int
*@height: int
*Return: Nothing
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
