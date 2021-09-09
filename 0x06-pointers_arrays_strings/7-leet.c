#include <ctype.h>
#include <string.h>
#include "main.h"
/**
* leet - encode string
* @str: char
*
* Return: char
*/
char *leet(char *str)
{
int i, j, size, size2;
char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char nums[] = {'4', '3', '0', '7', '1'};

size = sizeof(str);
size2 = sizeof(letters);
for (i = 0; i < size; i++)
{
for (j = 0; j < size2; j++)
{
if (str[i] == letters[j])
{
str[i] = nums[j / 2];
}
}
}
return (str);
}
