#include "main.h"
#include <string.h>
/**
* print_rev - print in reverse
* @s: char
*
* Return: nothing
*/
void print_rev(char *s)
{
char str[];
int i, len;

len = strlen(s);
for (i = 0; i < len; i++)
{
str[i] = s[len - 1];
}
puts(str);
}
