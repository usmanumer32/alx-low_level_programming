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
int *ptr;
int i, j;

if (width == 0 || height == 0)
return (NULL);
ptr = malloc(sizeof(int) * width * height);
if (ptr == NULL)
return (NULL);
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
ptr[i][j] = 0;
}
}
return (ptr);
}
