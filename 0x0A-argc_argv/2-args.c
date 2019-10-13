#include <stdio.h>
/**
* main - print the arguments received
*@argc: argument count
*@argv: string of arguments
*Return: 0 (success)
*/
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc ; i++)
printf("%s\n", argv[i]);
return (0);
}
