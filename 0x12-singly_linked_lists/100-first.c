#include <stdio.h>
/**
* b - prints from init by the loader before main
*/
void b(void) attribute ((constructor));
void b(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
