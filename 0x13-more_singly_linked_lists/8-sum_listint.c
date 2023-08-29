#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - func
 * @head: parameter
 *
 * Return: number
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *pt = head;

	if (head == NULL)
		return (0);

	while (pt != NULL)
	{
		sum = sum + pt->n;
		pt = pt->next;
	}

	return (sum);
}
