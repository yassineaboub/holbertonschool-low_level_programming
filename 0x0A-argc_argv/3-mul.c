#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies 2 numbers
*@argc: argument
*@argv: string
*Return: 1
*/
int main(int argc, char *argv[])
{
int n1, n2, sum;
if (argc != 3)
printf("Error\n");
else
{
n1 =atoi (argv[1]);
n2 =atoi (argv[2]);
sum = n1 *n2;
printf("%d\n", sum);
}
return (1);
}
