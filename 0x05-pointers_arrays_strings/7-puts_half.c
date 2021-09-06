#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* puts_half - print in reverse
* @str: char
*
* Return: nothing
*/
void puts_half(char *str)
{
int i, n, length;

length = strlen(str);
if (length % 2 != 0)
{
n = (length - 1) / 2;
}
else
{
n = length / 2;
}

for (i = n; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
