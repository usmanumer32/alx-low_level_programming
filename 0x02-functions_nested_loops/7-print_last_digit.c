#include "main.h"
/**
* print_last_digit - last digit of an integer
* @num: num of type int
* Return: int
*/
int print_last_digit(int num)
{
int lastdigit = num % 10;

if (lastdigit < 0)
{
lastdigit = lastdigit * -1;
}
_putchar(lastdigit + '0');
return (lastdigit);
}

