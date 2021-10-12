#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - add new nodes at the end of a list
* @head: head node of the list
* @n: int to add to the head
* Return: address of the new element, or null if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *tail;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (*head);
}
tail = *head;
while (tail->next != NULL)
tail = tail->next;
tail->next = new;
return (new);
}
