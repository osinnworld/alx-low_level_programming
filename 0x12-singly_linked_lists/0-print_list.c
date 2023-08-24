#include <stdio.h>
#include "lists.h"

/**
 * print_list - function
 * @n: parameter
 *
 * Return: 0 or 1
 */
size_t print_list(const list_t *h)
{
	const list_t *pt;
	int c = 0;

	if (n == NULL)
		return (0);
	pt = n;
	while (ptr != NULL)
	{
		if (pt->strg != NULL)
			printf("[%d] %s\n", pt->len, pt->strg);
		else
			printf("[0] (nil)\n");
		pt = pt->next;
		c++;
	}
	return (c);
}

