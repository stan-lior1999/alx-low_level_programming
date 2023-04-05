#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/**
 * struct listint_s-singly linked list
 * @n:integer
 * @next:point to the next node
 * Discription: singly linked list node struction
 *
 */
	typedef struct listint_s
{

	int n;
	struct listint_s *next;
} listint_t;

/*function prototypes */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
#endif
