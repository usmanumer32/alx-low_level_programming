#include <main.h>
/**
* print_triangle - prints triangle
* @size: int
*
* Return: nothing
*/
void print_triangle(int size)
{
int i, j, k, n;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = size - 1; j >= i; j--)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
_putchar('\n');
}
