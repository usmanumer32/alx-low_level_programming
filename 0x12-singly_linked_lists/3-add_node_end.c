#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*
* _strlen - gets length of the string
* @s: string
* Return: length of the string
*/
int _strlen(const char *s)
{
int i;

for (i = 0; s[i]; i++)
;
return (i);
}
/**
* add_node_end - adds a new node at the end of a list_t list
* @head: head of list
* @str: string
* Return: address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *current;
char *dupstr;

if (str == NULL)
return (NULL);
dupstr = strdup(str);
if (dupstr == NULL)
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = dupstr;
new->len = _strlen(str);
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (*head);
}
current = *head;
while (current->next != NULL)
current = current->next;
current->next = new;
return (*head);
}
