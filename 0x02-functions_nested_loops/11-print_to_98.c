#include <stdio.h>
#include "main.h"
/**
* print_to_98 - print to 98
* @n: int
* Return: nothing
*/
void print_to_98(int n)
{
int i;

if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", \n");
}
}
}
else
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", \n");
}
}
}
}
