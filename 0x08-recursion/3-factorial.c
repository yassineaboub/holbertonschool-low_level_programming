#include "holberton.h"
/**
* factorial - function
* @n : int
* Return: factorial
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
else
return (factorial(n - 1) * n);
}
