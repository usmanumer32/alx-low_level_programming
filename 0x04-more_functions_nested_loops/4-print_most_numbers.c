#include "main.h"
/**
* print_most_numbers - print numbers
* Return: nothing
*/
void print_most_numbers(void)
{
int i = 0;

while (i <= 9)
{
if (i!= 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
return;
}
