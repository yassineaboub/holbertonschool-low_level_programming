#include "holberton.h"
/**
* _islower - check for lowercase character
* @c: character recieved
*
*Return: 1 a letter 0 otherwise
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
