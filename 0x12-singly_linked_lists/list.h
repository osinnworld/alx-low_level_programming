#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/**
 * struct list_s - singly l.l
 * @strg: strg
 * @len: parameter
 * @next: parameter
 *
 * Description: singly l.l
 */
typedef struct list_s
{
	unsigned int len;
	char *strg
	struct list_s *next;
} list_t;

int _putchar(char);
size_t print_list(const list_t *);
size_t list_len(const list_t *);
list_t *add_node(list_t **, const char *);
list_t add_node_end(list_t **, const char *);
void free_list(list_t *);

#endif
