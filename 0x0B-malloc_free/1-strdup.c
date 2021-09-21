#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* _strdup - _strdup
* @str: char
*
* Return: char
*/
char *_strdup(char *str)
{
char *t;

if (str == NULL)
return (NULL);
char *newString = strdup(str);
if (newString == NULL)
return (NULL);
return (newString);
}
