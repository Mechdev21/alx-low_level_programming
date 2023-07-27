#include "lists.h"
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: start of the list
 * @str: value of the list
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
