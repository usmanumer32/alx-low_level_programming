#include "holberton.h"
/**
* main - check the code for ALX School students
* 
* Return: Always 0
*/
void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
return;
}

int main(void)
{
print_alphabet();
return (0);
}
