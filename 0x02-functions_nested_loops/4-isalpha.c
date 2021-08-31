#include <ctype.h>
#include "main.h"
/**
* _isalpha - check for alphabetic character
* 
* Return: Always 0
*/
int _isalpha(int c)
{
int res = isalpha(c);

if (res > 0)
{
return (1);
}
return (0);
}