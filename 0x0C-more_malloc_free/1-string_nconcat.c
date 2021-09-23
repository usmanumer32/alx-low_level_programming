#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* string_nconcat - concatenate two strings
* @s1: char
* @s2: char
* @n: unsigned int
* Return: char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
int s1size, s2size, totalsize, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (s1size = 0; s1[s1size]; s1size++)
;
for (s2size = 0; s2[s2size]; s2size++)
;
if (n < s2size)
s2size = n;
else
{
n = s2size;
}
totalsize = s1size + s2size + 1;
p = malloc(totalsize *sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; i < totalsize; i++)
{
i < s1size ? (p[i] = s1[i]) : (p[i] = s2[i - s1size]);
}
p[i] = '\0';
return (p);
}
