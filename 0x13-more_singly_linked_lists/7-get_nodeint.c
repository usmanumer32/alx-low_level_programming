#include "lists.h"
#include <stdlib.h>
/**
* get_nodeint_at_index - return nth node of list
* @head: head node of the list
* @index: index of node
* Return: data
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

i = 0;
while (i < index)
{
if (head->next == NULL)
return (NULL);
head = head->next;
i++;
}
return (head);
}
