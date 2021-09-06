#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* puts2 - print in reverse
* @str: char
*
* Return: nothing
*/
void puts2(char *str)
{
int i, length;

length = strlen(str);
for (i = 0; i < length; i++)
{
puts(str[i]);
}
}
