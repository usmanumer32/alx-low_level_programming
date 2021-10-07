#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_list - prints all elements of a list_t list
* @h: singly linkd list to print
* Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
size_t i;

for (i = 0; h; i++)
{
if (h->str == NULL)
{
printf("[0] (nil)");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
}
return (i);
}
