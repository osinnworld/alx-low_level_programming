
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - func
 * @head: parameter
 * @n: parameter
 *
 * Return: 1 or 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *pt = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (pt == NULL)
	{
		*head = new;
		return (*head);
	}
	while (pt->next != NULL)
		pt = pt->next;
	pt->next = new;
	return (new);
}
