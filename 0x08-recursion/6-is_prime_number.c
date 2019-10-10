#include "holberton.h"
/**
* prime - prime number
*@n: number
*@d: number
*Return: the value
*/
int prime(int n, int d)
{
if (n == d)
return (1);
if (n % d == 0 || n <= 1)
return (0);
return (prime(n, d + 1));
}
/**
* is_prime_number - prime number
*@n: number
*Return: 0 if n is not prime, 1 if n is prime
*/
int is_prime_number(int n)
{
int d;
d = 2;
if (n == 1)
return (0);
return (prime(n, d));
}
