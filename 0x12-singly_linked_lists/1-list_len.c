#include "lists.h"
/**
 * list_len - function that returns the number of elements
 *  in a linked list_t list.
 *  @h: pointer to list
 *
 *  Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *f = h;

	size_t n = 0;

	while (f != NULL)
	{
		f = f->next;
		n++;
	}
	return (n);
}

