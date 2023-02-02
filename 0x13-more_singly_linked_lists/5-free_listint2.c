#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - a functions that frees a list
 * @head:  pointer to head node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*(head))->next;
		free(temp);
	}
	*head = NULL;
}
