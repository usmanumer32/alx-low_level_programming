#include "main.h"
/**
* print_diagonal - draw diagonal line
* @n: int
*
* Return: nothing
*/
void print_diagonal(int n)
{
int i, j;

if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 0; j < i - 1; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
