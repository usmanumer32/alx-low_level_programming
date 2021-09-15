#include "main.h"
/**
* check - check
* @i: int
* @num: int
* Return: int
*/
int check(int i, int num)
{
if (num % i == 0 || num < 2)
{
return (0);
}
else if (i == num - 1)
{
return (1);
}
else if (num > i)
{
return (check(i + 1, num));
}
return (1);
}
/**
* is_prime_number - prime number check
* @n: int
*
* Return: int
*/
int is_prime_number(int n)
{
return (check(2, n));
}
