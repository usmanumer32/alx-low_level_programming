#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - allocate memory
* @b: unsigned int
*
* Return: nothing
*/
void *malloc_checked(unsigned int b)
{
unsigned int *p;

p = malloc(sizeof(b));
if (p == NULL)
{
exit(98);
}
return (p);
}
