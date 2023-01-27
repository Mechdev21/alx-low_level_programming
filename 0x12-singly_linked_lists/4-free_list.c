#include "lists.h"
/**
 * free_list - a function that frees the memory used to
 * a store a list
 * @head: pointer to head
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
