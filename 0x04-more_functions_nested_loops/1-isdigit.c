#include "main.h"
#include <ctype.h>
/**
* _isdigit - check for digit
* @c: int
*
* Return: int
*/
int _isdigit(int c)
{
int res;

res = isdigit(c);
if (res > 0)
{
return (1);
}
return (0);
}
