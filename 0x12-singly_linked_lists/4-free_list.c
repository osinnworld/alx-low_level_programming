#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function
 * @head: parameter
 *
 */
void free_list(list_t *head)
{
	list_t *pt, *tm;

	pt = head;
	while (pt != NULL)
	{
		tm = pt;
		pt = pt->next;
		free(tm->str);
		free(tm);
	}
}
