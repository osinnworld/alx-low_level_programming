#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * _strlen_recursion - function
 *
 * @s: parameter
 * Return: 0
 */
int _strlen_recursion(const char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * add_node - function
 * @str: parameter
 * @head: parameter
 *
 * Return: 0 or 1
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = _strlen_recursion(str);
	n->next = *head;
	*head = n;

	return (n);
}
