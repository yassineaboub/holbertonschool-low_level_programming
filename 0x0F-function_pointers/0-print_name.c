#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - function to prints a name
* @name: name to print
* @f: function pointer to print the name
*/

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
