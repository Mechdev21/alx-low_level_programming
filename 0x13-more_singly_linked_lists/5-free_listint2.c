#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list. head equal null
 * @head: pointer to pointer to head
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		listint_t *aux = temp;
		temp = temp->next;
		free (aux);
	}
	*head = NULL;
}
