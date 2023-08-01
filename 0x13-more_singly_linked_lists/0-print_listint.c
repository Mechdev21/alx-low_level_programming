#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to head
 *
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t n = 0;

	if (h == NULL)
		return (0);

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}
	return (n);
}
