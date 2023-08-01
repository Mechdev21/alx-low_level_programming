#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked listint_t list.
 * @h: pointer to head
 *
 * Return: lenght of list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t n = 0;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
