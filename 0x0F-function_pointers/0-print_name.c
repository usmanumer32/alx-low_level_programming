#include "function_pointers.h"
#include <stddef.h>
/**
* print_name - prints a name
* @name: char
* @f: function
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
