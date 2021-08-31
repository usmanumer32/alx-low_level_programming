#include <ctype.h>
#include "main.h"
/**
* main - check the code for ALX School students
* 
* Return: Always 0
*/
int main(void)
{
int r;

r = _islower('H');
_putchar(r);
_putchar('\n');
return (0);
}

int _islower(int c)
{
int res = islower(c);

if (res > 0)
{
return (1);
}
return (0);
}

