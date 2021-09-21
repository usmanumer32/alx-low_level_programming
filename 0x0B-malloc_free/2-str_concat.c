#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* lengthOfArray - return length
* @s: char
*
* Return: int
*/
int lengthOfArray(char *s)
{
int size = 0;

while (*s)
{
size++;
s++;
}
return (size);
}
/**
* str_concat - concatenate two strings
* @s1: char
* @s2: char
* Return: char
*/
char *str_concat(char *s1, char *s2)
{
char *str;
int s1Size, s2Size, i, length;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
s1Size = lengthOfArray(s1);
s2Size = lengthOfArray(s2);
length = s1Size + s2Size + 1;
str = malloc(sizeof(char *) * length);
if (str == NULL)
return (NULL);
strcat(s1, s2);
for (i = 0; i < length; i++)
{
str[i] = s1[i];
}
return (str);
}
