#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Short description (this is main function)
* @void: no parameter
* Return: returns 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive", n);
}
if (n == 0)
{
printf("%d is zero", n);
}
if (n < 0)
{
printf("%d is negative", n);
}
return (0);
}
