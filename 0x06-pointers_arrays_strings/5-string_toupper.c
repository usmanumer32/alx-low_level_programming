#include <ctype.h>
#include "main.h"
/**
* string_toupper - letters to uppercase
* @str: char
*
* Return: char
*/
char *string_toupper(char *str)
{
int i, size, x;

size = sizeof(str);
for (i = 0; i < size - 1; i++)
{
if (str[i] != '\0')
{
x = isupper(str[i]);
if (x == 0)
{
str[i] = toupper(str[i]);
}
}
}
return (str);
}
