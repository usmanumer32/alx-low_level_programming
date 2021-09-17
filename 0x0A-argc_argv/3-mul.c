#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - main
* @argc: int (arg count)
* @argv: args array
* Return: int
*/
int main(int argc, char *argv[])
{
int res;

if (!argv[1] || !argv[2])
{
printf("Error\n");
return (1);
}
res = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", res);
return (0);
}
