#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - main
* @argc: int (arg count)
* @argv: args array
* Return: int
*/
int main(int argc, char *argv[])
{
int num1, num2, res;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (get_op_func(argv[2]) == NULL)
{
printf("Error\n");
exit(99);
}
if ((argv[2] == '/' || argv[2] == '%') && (num2 == 0))
{
printf("Error\n");
exit(100);
}
res = (*get_op_func(argv[2]))(num1, num2);
printf("%d\n", res);
return (0);
}