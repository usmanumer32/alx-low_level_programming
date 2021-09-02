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

if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
