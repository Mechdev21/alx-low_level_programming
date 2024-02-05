#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node to a list
 * @head: head of the lists
 * @n: data part of the list
 * Return: address of a new list or null
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
	}
	else
	{
		(*head)->prev = new;
		new->next = *head;
	}
	*head = new;

	return (new);
}
