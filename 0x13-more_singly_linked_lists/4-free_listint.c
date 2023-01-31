#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - a function that frees up dynamic memmory
 * @head: poniter to head
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != 0)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
