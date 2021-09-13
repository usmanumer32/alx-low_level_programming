#include "main.h"
#include <string.h>
/**
* _strspn - return length of prefix substring
* @s: char
* @accepr: char
* Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
int len;

len = strspn(s, accept);
return (len);
}
