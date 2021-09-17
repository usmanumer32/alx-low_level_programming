#include "main.h"
#include <string.h>
/**
* _strstr - locates substring
* @haystack: char
* @needle: char
* Return: char
*/
char *_strstr(char *haystack, char *needle)
{
char *ret;

ret = strstr(haystack, needle);
return (ret);
}
