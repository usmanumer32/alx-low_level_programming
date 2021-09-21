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

if (size == 0)
{
return (NULL);
}
else
{
t = malloc(sizeof(char) * size);
if (t != NULL)
t[0] = c;
return (t);
}
}
