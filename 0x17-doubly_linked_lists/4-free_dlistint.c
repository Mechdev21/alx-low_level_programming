#include "lists.h"

/**
 * free_dlistint - a function that fress a list
 * @head: starting of the list
 * Returns: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while(head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

