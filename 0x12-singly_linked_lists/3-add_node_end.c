#include "lists.h"
/**
 * add_node_end - a function that helps us insert a node at 
 * the end of a linked list
 * @head: a pointer to head
 * @str: a pointer to string to be printed
 *
 * Return: the addres of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int i;
	list_t *new;
	list_t *temp;

	new  = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	if (*head == NULL)
	{
		*head = new;
		new->len = i;
		new->str = strdup(str);
		new->next = NULL;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	return (new);

}
