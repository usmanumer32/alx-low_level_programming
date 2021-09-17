#include <ctype.h>
#include "main.h"
/**
* _islower - check for lowercase character
* @c: int
* Return: Always 0 or 1
*/
int _islower(int c)
{
int res = islower(c);

if (res > 0)
{
return (1);
}
return (0);
}

