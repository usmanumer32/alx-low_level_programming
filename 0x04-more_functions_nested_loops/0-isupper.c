#include "main.h"
#include <ctype.h>
/**
* _isupper - check for uppercase character
* @c: int
*
* Return: int
*/
int _isupper(int c)
{
int res;

res = isUpper(c);
if (res > 0)
{
return (1);
}
return (0);
}