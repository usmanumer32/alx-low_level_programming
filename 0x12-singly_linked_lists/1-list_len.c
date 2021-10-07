#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* list_len - returns the number of elements of a list_t list
* @h: singly linkd list to print
* Return: number of elements in the list
*/
size_t list_len(const list_t *h)
{
size_t i;

for (i = 0; h; i++)
h = h->next;
return (i);
}
