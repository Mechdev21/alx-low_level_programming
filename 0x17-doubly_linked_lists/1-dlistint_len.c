#include "lists.h"

/**
 * dlistint_len - function that returns length of a list
 * @h: pointer to the head of the list
 * Return: Leght of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		n += 1;
	}
	return (n);
}
