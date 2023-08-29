#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - func
 * @head: parameter
 * @index: parameter
 *
 * Return: num
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *pt = head;

	while (num != index && pt != NULL)
	{
		num++;
		pt = pt->next;
	}

	if (pt == NULL)
		return (NULL);
	else
		return (pt);
}
