#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* listint_len - return number of elements of a listint_t list
* @h: singly linkd list to print
* Return: number of nodes in the list
*/
size_t listint_len(const listint_t *h)
{
size_t i;

for (i = 0; h; i++)
{
h = h->next;
}
return (i);
}
