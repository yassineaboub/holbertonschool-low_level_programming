#include <stdio.h>
/**
* main - print the name
* @argc: number of things in the command line
* @argv: array that holds the string values
* Return: 0
*/
int main(int argc, char* argv[])
{
int x = 10;
if (argc == 1)
{
printf("%s\n", argv[0]);
}
else
{
printf("%s\n", argv[x]);
}
return (0);
}
