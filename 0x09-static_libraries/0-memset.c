#include <string.h>
#include "main.h"
/**
* _memset - letters capitalize
* @s: char
* @b: char
* @n: int
* Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
char *ps;

ps = memset(s, b, n);
return (ps);
}
