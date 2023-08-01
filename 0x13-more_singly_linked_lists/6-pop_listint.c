#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 *  linked list, and returns the head node’s data (n).
 *  @head: pointer to pointer
 *
 *  Return: heaf node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	n = (*head)->n;
	temp = temp->next;
	free (*head);
	(*head) = temp;

	return (n);
}
