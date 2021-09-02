#include <stdio.h>
/**
* print_triangle - prints triangle
* @size: int
*
* Return: nothing
*/
void print_triangle(int size)
{
int i, j, k, n;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = size - 1; j >= i; j--)
{
printf(".");
}
for (k = 1; k <= i; k++)
{
printf("#");
}
printf("\n");
}
}
}
