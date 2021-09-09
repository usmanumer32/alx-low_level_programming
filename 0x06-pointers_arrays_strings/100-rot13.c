#include <ctype.h>
#include <string.h>
#include "main.h"
/**
* rot13 - root13
* @str: char
*
* Return: char
*/
char *rot13(char *str)
{
int i, j, size, alphasize;
char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

size = sizeof(str);
alphasize = sizeof(alpha);
for (i = 0; i < size; i++)
{
for (j = 0; j < alphasize; j++)
{
if (str[i] == alpha[j])
{
str[i] = r[i];
}
}
}
return (str);
}
