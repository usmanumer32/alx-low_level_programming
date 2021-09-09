#include <ctype.h>
#include "main.h"
/**
* cap_string - letters capitalize
* @str: char
*
* Return: char
*/
char *cap_string(char *str)
{
int i, j, size, size2;
char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

size = sizeof(str);
size2 = sizeof(separators);
for (i = 0; i < size - 1; i++)
{
int matched = 0;
for (j = 0; j < size2; j++)
{
if (str[i] == separators[j])
{
matched = 1;
break;
}
}
if (matched == 1)
{
int x;
x = isalpha(str[i + 1]);
if (x != 0)
{
str[i + 1] = toupper(str[i + 1]);
}
}
}
return (str);
}
