#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that frees the vhead node of a linked list
 * @head: a pointer to the first node
 *
 * Return: the head nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head != NULL)
	{
		temp = *head;
		*head = (*(head))->next;
		n = temp->n;
		free(temp);
		return (n);
	}
	return (0);
}

