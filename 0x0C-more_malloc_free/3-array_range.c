#include <stdlib.h>
#include "main.h"
/**
* array_range - create an array of integers
* @min: int
* @max: int
* Return: int
*/
int *array_range(int min, int max)
{
int *p;
int size, i;

if (min > max)
return (NULL);
size = (max - min) + 1;
p = calloc(size, sizeof(int));
if (p == NULL)
return (NULL);
for (i = 0; i <= size; i++)
p[i] = min + i;
return (p);
}
