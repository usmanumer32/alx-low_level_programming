#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* str_concat - concatenate two strings
* @s1: char
* @s2: char
* Return: char
*/
char *str_concat(char *s1, char *s2)
{
char *str;
int length, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
length = sizeof(s1) + sizeof(s2);
str = malloc((sizeof(char) * length);
if (str == NULL)
return (NULL);
strcat(s1, s2);
for (i = 0; i < length; i++)
{
str[i] = s1[i];
}
return (str);
}
