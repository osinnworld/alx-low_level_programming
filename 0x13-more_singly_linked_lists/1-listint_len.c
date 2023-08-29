#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function
 * @h: parameter
 *
 * Return: 0 or 1
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *pt;
	int cp = 0;

	if (h == NULL)
		return (0);
	pt = h;
	while (pt != NULL)
	{
		pt = pt->next;
		cp++;
	}
	return (cp);
}
