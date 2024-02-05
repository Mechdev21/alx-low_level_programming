#include "lists.h"

/**
 * get_dnodeint_at_index - a fuctions that returns a node at a particular index
 * @head: strting node
 * @index: index position
 * Return: node data or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	while (index)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		else
		{
			temp = temp->next;
			index -= 1;
		}
	}
	return (temp);
}
