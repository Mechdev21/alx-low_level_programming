#include "lists.h"

/**
 * print_dlistint - a function that prints all element of a list
 * @h : pointer to head list
 *
 * Return:Nothig
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n  = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n += 1;
	}
	return (n);
}
