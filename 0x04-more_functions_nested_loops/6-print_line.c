#include "main.h"
/**
* print_line - draw straught line
* @n: int
*
* Return: nothing
*/
void print_line(int n)
{
int i;

if (n > 0)
{
for (i = 0; i <= n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
