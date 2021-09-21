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
char *newString;

if (str == NULL)
return (NULL);
newString = strdup(str);
if (newString == NULL)
return (NULL);
return (newString);
}
