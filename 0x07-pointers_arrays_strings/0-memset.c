#include "main.h"
#include <string.h>
/**
* _memset - letters capitalize
* @s: char
* @b: char
* @n: int
* Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
