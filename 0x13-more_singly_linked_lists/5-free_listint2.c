#include "lists.h"
#include <stdlib.h>
/**
* free_listint - frees a list
* @head: head node of the list
*
* Return: nothing
*/
void free_listint2(listint_t **head)
{
listint_t *new, *tmp;

if (head == NULL)
return;
new = *head;
while (new != NULL)
{
tmp = new;
new = new->next;
free(tmp);
}
*head = NULL;
}
