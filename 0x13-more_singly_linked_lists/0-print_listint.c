#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint - a function that prints the elements of a list listint_t
 * @h: head pointer
 *
 * Return: the number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	const listint_t *temp = h;

	if (temp == NULL)
	{
		printf("Error\n");
		return (-1);
	}

	while (temp != 0)
	{
		printf("%d \n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
