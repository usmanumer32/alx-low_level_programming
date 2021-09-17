#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
* main - main
* @argc: int (arg count)
* @argv: args array
* Return: int
*/
int main(int argc, char *argv[])
{
int i, isdig, sum = 0;
bool allNumbers = true;

if (argc == 1)
{
printf("%d\n", 0);
}
else
{
for (i = 1; i < argc; i++)
{
isdig = isdigit(argv[i]);
if (isdig == 0)
{
allNumbers = false;
}
else
{
sum = sum + atoi(argv[i]);
}
}
if (!allNumbers)
{
printf("Error\n");
return (1);
}
printf("%d\n", sum);
}
return (0);
}
