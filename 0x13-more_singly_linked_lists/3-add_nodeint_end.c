#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds  a node at the end a list
 * @head: pointer to pointer of head in main
 * @n: value of node
 *
 * Return: the address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *temp;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		temp = *head;
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = end;

	return (end);
}

