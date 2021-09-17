#include "main.h"
#include <string.h>
/**
* _memcpy - copy memory area
* @dest: char
* @src: char
* @n: int
* Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char **pdest;

pdest = &dest;
memcpy(dest, src, n);
return (dest);
}
