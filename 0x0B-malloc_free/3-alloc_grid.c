#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - returns pointer to a 2-d array if integers
* @width: int
* @height: int
* Return: int
*/
int **alloc_grid(int width, int height)
{
int **pptr;
int i, j;

if (width == 0 || height == 0)
return (NULL);
pptr = (int **)malloc(sizeof(int *) * width);
for (i = 0; i < height; i++)
pptr[i] = (int *)malloc(sizeof(int) * height);
if (pptr == NULL)
return (NULL);
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
pptr[i][j] = 0;
}
}
return (pptr);
}
