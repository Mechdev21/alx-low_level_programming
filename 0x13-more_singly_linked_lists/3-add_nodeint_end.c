#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: first pointer
 * @n: value of int
 *
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *end;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);

	end->n = n;
	end->next = NULL;
	
	if (*head == NULL)
	{
		*head = end;
		return (end);
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
