#include "holberton.h"
/**
* main - check the code for ALX School students
* 
* Return: Always 0
*/
int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
return;
}
