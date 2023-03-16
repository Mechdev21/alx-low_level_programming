#include "lists.h"
/**
 * add_node - a function that creates a node and helps us add
 * it at the beginning of a list
 * @head: head ponter
 * @str: pointer to the string to be printed
 *
 * Return: the address of the n
 */


list_t *add_node(list_t **head, const char *str)
{

	unsigned int i;
	list_t *new;

	new  = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
		new->next = *head;
	}

	if (new == NULL)
		return (NULL);

	new->next = *head;
	*head = new;

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;

	return (new);
}
