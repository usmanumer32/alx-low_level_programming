#include <stdlib.h>
#include "main.h"
/**
* _calloc - allocate memory using calloc
* @nmemb: unsigned int
* @size: unsigned int
* Return: nothing
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *p;

if (nmemb == 0 || size == 0)
return (NULL);
p = calloc(size, (nmemb *sizeof(int)));
if (p == NULL)
return (NULL);
return (p);
}
