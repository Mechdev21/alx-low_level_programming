#include "lists.h"
/**
 * listint_len - a function that checks for the number of nodes in a list
 * @h: head pointer
 *
 * Return: number of nodes present
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t i = 0;

	while (temp != 0)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
