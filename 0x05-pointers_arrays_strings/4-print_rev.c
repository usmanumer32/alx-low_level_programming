#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* print_rev - print in reverse
* @s: char
*
* Return: nothing
*/
void print_rev(char *s)
{
int i, len;

len = strlen(s);
for (i = 1; i < len; i++)
{
if (s[len - 1 - i] == '!')
{
_puthchar('0' + 33);
}
else
{
_putchar(s[len - 1 - i]);
}
}
_putchar('\n');
}
