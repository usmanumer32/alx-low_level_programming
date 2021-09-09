#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* _strncpy - copy two strings
* @dest: char
* @src: char
* @n: int
* Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
