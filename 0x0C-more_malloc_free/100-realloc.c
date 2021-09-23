#include <stdlib.h>
#include "main.h"
/**
* _realloc - reallocate memory block
* @old_size: unsigned int
* @new_size: unsigned int
* Return: nothing
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p, *castptr;
int i, min_size;

if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
min_size = new_size > old_size ? old_size : new_size;
p = realloc(ptr, new_size);
castptr = ptr;
for (i = 0; i < min_size; i++)
p[i] = castptr[i];
free(ptr);
return (p);
}
