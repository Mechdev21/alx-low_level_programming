#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: start of node
 * @str: value of node
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	int i;

	list_t *temp;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	end = malloc(sizeof(list_t));
	if (end == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	if ((*head) == NULL)
	{
		(*head) = end;
		end->str = strdup(str);
		end->len = i;
		end->next = NULL;
		return (end);
	}
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = end;

	end->str = strdup(str);
	end->len = i;
	end->next = NULL;
	return (end);
}


