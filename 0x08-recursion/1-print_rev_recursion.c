#include "main.h"
#include <string.h>
/**
* _print_rev_recursion - print string in reverse
* @s: char
*
* Return: nothing
*/
void _print_rev_recursion(char *s)
{
if (strlen(s) == 0)
{
return;
}
_print_rev_recursion(s + 1);
_putchar(s[0]);
}
