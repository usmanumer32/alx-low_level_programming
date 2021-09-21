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
int i, j;
int **p;

i = j = 0;
if (height < 1)
return (NULL);
p = (int **)malloc(height * sizeof(p));
if (p == NULL)
{
free(p);
return (NULL);
}
for (i = 0; i < height; i++)
{
p[i] = malloc(width * sizeof(int));
if (p[i] == NULL)
{
for (j = 0; j < i; j++)
free(p[j]);
free(p);
return (NULL);
}
for (j = 0; j < width; j++)
p[i][j] = 0;
}
return (p);
}
