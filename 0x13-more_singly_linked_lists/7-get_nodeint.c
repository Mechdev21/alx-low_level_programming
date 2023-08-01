#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to head pointer
 * @index: index of the node
 *
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (index)
	{
		head = head->next;
		index--;
	}
	if (!head)
		return (NULL);
	return (head);
}
