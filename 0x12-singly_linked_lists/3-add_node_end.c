#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen_recursion - function
 * @s: parameter
 *
 * Return: Always 0
 */
int _strlen_recursion(const char *st)
{
	if (*st == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(st + 1));
}

/**
 * add_node_end - function
 * @str: parameter
 * @head: parameter
 *
 * Return: 0 or 1
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *pt = *head;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n ->str = strdup(str);
	n->len = _strlen_recursion(str);
	n->next = NULL;

	if (pt == NULL)
	{
		*head = n;
		return (*head);
	}
	while (pt->next != NULL)
		pt = pt->next;
	pt->next = n;
	return (n);
}
