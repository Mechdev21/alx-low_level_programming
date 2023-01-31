#include "lists.h"
/**
 * print_listint - a function that prints the elements of a list listint_t
 * @h: head pointer
 *
 * Return: the number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->n == 0)
			return (-1);
		printf("%d \n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
