#include <stdio.h>
#include "lists.h"

/**
 * list_len - function
 * @h: list
 *
 * Return: h
 */
size_t list_len(const list_t *h)
{
	const list_t *pt
		int cp = 0;

	if (h == NULL)
		return (0);
	pt = h;
	while (pt != NULL)
	{
		cp++;
		pt = pt->next;
	}
	return (cp);
}
