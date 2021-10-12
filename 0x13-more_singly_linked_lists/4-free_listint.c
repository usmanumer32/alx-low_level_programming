#include "lists.h"
#include <stdlib.h>
/**
* free_listint - frees a list
* @head: head node of the list
*
* Return: nothing
*/
void free_listint(listint_t *head)
{
if (head == NULL)
return;
free_listint(head->next);
free(head->n);
free(head);
}
