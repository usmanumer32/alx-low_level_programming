#include "lists.h"
#include <stdlib.h>
/**
* sum_listint - return sum of all data of list
* @head: head node of the list
*
* Return: sum
*/
int sum_listint(listint_t *head)
{
int sum;

for (sum = 0; head; sum += head->n, head = head->next)
;
return (sum);
}
