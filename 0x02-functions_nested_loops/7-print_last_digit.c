#include "main.h"
/**
* print_last_digit - last digit of an integer
* @num: num of type int
* Return: int
*/
int print_last_digit(int num)
{
int lastdigit = num % 10;

_putchar(lastdigit);
return (lastdigit);
}
