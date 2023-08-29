#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - func
 * @head: parameter
 *
 * Return: 0 or 1
 */
void free_listint2(listint_t **head)
{
	listint_t *pt, *tmp;

	if (head == NULL)
		return;
	pt = *head;
	while (pt != NULL)
	{
		tmp = pt;
		pt = pt->next;
		free(tmp);
	}
	*head = NULL;
}
