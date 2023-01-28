#include "lists.h"
/**
 * print_list - a function that helps bus prints the content
 * of a linked list
 * @h: the head pointer of the list
 *
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t i = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%d] (%s)\n", 0, "nil");
		printf("[%u] %s \n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
