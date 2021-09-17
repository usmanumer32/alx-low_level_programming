#include "main.h"
#include <string.h>
/**
* _strpbrk - search string
* @s: char
* @accepr: char
* Return: char
*/
char *_strpbrk(char *s, char *accept)
{
char *ret;

ret = strpbrk(s, accept);
return (ret);
}
