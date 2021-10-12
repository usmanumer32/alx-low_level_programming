#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - add new nodes at the beginning of a list
* @head: head node of the list
* @n: int to add to the head
* Return: address of the new element, or null if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
