#include "lists.h"
/**
 * add_node_end - a function that helps us insert a node at 
 * the end of a linked list
 * @head: a pointer to head
 * @str: a pointer to string to be printed
 *
 * Return: the address of the new node
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *temp;
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
		i++;
	len = i;

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);
	end->str = strdup(str);
	end->len = len;
	end->next = NULL;

	if (*head == NULL)
		*head = end;
	else
		temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = end;

	return (end);
}
