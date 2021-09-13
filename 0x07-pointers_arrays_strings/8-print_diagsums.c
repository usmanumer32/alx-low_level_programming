#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints sum of two diagonals of a square matrix of integers
* @a: int
* @size: int
* Return: nothing
*/
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;

for (i = 0; i < size; i++){
for (j = 0; j < size; j++){
if (i == j){
sum1 = sum1 + arr[i][j];
}
if ((i + j) == 3){
sum2 = sum2 + arr[i][j];
}
}
}
printf("%d, %d", sum1, sum2);
}
