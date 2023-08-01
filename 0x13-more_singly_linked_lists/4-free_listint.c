#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: head pointer
 *
 * Return: nothibg
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		free (temp);
		temp = temp->next;
	}
}
