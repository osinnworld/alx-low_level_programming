#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - func
 * @head: parameter
 *
 * Return: 0 or 1
 */
void free_listint(listint_t *head)
{
	listint_t *pt, *tmp;

	pt = head;
	while (pt != NULL)
	{
		tmp = pt;
		pt = pt->next;
		free(tmp);
	}
}
