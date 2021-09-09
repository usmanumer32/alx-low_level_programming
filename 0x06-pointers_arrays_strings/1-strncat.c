#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* _strncat - concatenate two strings
* @dest: char
* @src: char
* @n: int
* Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
