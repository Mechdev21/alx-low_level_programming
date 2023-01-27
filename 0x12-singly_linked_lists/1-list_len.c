#include "lists.h"
/**
 * list_len - a functions that tells us the number of nodes
 * in a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int i = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
