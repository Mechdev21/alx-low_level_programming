#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a given position.
 * @head: head pointer
 * @idx: index
 * @n:node value
 *
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	temp = *head;
	idx--;

	while (idx)
	{
		temp = temp->next;
		idx--;
	}
	if (!temp)
		return (NULL);

	new->next = temp->next;
	temp->next = new;
	return (new);
}
