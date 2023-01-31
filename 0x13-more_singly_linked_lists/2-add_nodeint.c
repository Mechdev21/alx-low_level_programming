#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds a new node in yhe list
 * @head: a pointer that points to a pointer
 * @n: value of node
 *
 * Return: adress of the new pointer
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
