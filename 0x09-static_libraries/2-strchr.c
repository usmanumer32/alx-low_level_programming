#include "main.h"
#include <string.h>
/**
* _strchr - locate char in a string
* @s: char
* @c: char
* Return: char
*/
char *_strchr(char *s, char c)
{
char *ret;

ret = strchr(s, c);
return (ret);
}
