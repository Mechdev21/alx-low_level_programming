#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head pointer
 * @index: nth positon of the node to return
 *
 * Return: a node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	while (index != 0)
	{
		temp = temp->next;
		index--;
	}
	if (!temp)
		return (NULL);
	
	return (temp);
}

