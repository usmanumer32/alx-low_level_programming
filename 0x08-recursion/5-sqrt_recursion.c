#include "main.h"
/**
* check - checker
* @i: int
* @base: int
* Return: int
*/
int check(int i, int base){
if (i * i == base) {
return (i);
}
if (i * i > base)
{
return (-1);
}
return (check(i+1, base));
}
/**
* _sqrt_recursion - return square root of a given number
* @n: int
*
* Return: int
*/
int _sqrt_recursion(int n)
{
return (check(1, n));
}
