#include "holberton.h"
/**
* main - check the code for ALX School students
* 
* Return: Always 0
*/
int main(void)
{
print_alphabet_x10();
return (0);
}

void print_alphabet_x10(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
    putchar(c);
}
putchar('\n');
}
return;
}