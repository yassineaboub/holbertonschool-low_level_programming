#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all-sum of all parameters
* @n: known parameter
* Return: int sum
**/

int sum_them_all(const unsigned int n, ...)
{
va_list arguments;
unsigned int i = 0;
int sum = 0;
if (n == 0)
return (0);
va_start(arguments, n);
for (i = 0; i < n; i++)
{
sum = sum + va_arg(arguments, int);
}
va_end(arguments);
return (sum);
}
