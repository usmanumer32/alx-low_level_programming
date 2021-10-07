#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
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
* add_node - adds a new node at the beginning of a list_t list
* @head: head of list
* @str: string
* Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
int i, len;
char *content;
list_t *new_node;

if (str == NULL || head == NULL)
return (NULL);
len = _strlen(str);
new_node = *head;
content = malloc((len + 1) * sizeof(char));
if (content == NULL)
return (NULL);
content = strdup(str);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(content);
return (NULL);
}
new_node->str = content;
new_node->len = len;
new_node->next = *head;
*head = new_node;
return (new_node);
}
