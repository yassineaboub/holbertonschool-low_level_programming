#include <stdio.h>
/**
* main - print the numbers
*@argc: argument count
*@argv: string of pointers
*Return: 0
*/
int main(int argc, __attribute__((unused)) char **argv)
{
argc = argc - 1;
printf("%d\n", argc);
return (0);
}
