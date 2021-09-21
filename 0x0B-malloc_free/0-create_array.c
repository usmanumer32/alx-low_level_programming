#include <stdlib.h>
#include "main.h"
/**
* create_array - creates array of chars
* @size: int
* @c: char
* Return: char
*/
char *create_array(unsigned int size, char c)
{
char *t;
int i;

if (size == 0)
{
return (NULL);
}
else
{
t = malloc(sizeof(char) * size);
if (t != NULL)
{
for (i = 0; i < size; i++)
{
t[i] = c;
}
}
return (t);
}
}
