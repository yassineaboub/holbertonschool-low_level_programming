#include "holberton.h"
#include <stdio.h>

/**
* rev_string
*@s:reverse
* Always 0.
*/
void rev_string(char *s)
{
int i = 0;
int j = 0;
char c;

while (*(s + i) != '\0')
i += 1;
i -= 1;

while (j < i)
{
c = s[i];
s[i] = s[j];
s[j] = c;
j++;
i--;
}
}
