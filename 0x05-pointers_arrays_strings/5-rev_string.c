#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* rev_string - print in reverse
* @s: char
*
* Return: nothing
*/
void rev_string(char *s)
{
char str[sizeof(s)];
int i, len;

len = strlen(s);
for (i = 1; i < len; i++)
{
str[i] = s[len - 1 - i];
}
puts(str);
}
