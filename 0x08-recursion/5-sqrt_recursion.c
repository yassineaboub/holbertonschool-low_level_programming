#include "holberton.h"
/**
* natural_square - natural square
* @x: int
* @y: int
* Return: success
*/
int natural_square(int x, int y)
{
if (x == (y * y))
return (y);
if (y  * y  >  x)
return (-1);
else
return (natural_square(x, y + 1));
}

/**
* _sqrt_recursion - Finds the natural square
* @n: int
* Return: success
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (-1);
else
return (if_natural_square(n, 1));
}
