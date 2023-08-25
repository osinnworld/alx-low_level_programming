#include <stdio.h>
#include "lists.h"

/**
 * print_list - function
 * @h: parameter
 *
 * Return: 0 or 1
 */
size_t print_list(const list_t *h)
{
	const list_t *pt;
	int cp = 0;

	if (h == NULL)
		return (0);
	pt = h;
	while (pt != NULL)
	{
		if (pt->str != NULL)
			printf("[%d] %s\n", pt->len, pt->str);
		else
			printf("[0] (nil)\n");
		pt = pt->next;
		cp++;
	}
	return (cp);
}

