#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* reverse_array - reverse content of an array
* @a: int
* @n: int
* Return: nothing
*/
void reverse_array(int *a, int n)
{
int i;
int *b[n];

for (i = 0; i < n; i++)
{
b[i] = a[n-1-i];
}
}
