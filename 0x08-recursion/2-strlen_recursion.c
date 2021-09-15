#include "main.h"
#include <string.h>
/**
* _strlen_recursion - return length of string
* @s: char
*
* Return: int
*/
int _strlen_recursion(char *s)
{
if (strlen(s) == 0)
return 0;
return 1 + _strlen_recursion(s + 1);
}
