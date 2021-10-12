#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_listint - prints all elements of a listint_t list
* @h: singly linkd list to print
* Return: number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
size_t i;

for (i = 0; h; i++)
{
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
