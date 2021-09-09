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
int b;

for (i = 0; i < n / 2; i++)
{
b = *a[i];
*a[i] = *a[n - 1 - i];
*a[n - 1 - i] = b;
}
}
