#include "lists.h"
/**
 * add_node - a function that creates a node and helps us add
 * it at the beginning of a list
 * @head: head ponter
 * @str: pointer to the string to be printed
 *
 * Return: the address of the new node
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *create_node;
	int len = 0;
	int i = 0;

	while (str[i] != '\0')
		i++;
	len = i;


	create_node = malloc(sizeof(list_t));
	if (create_node == 0)
		return (NULL);

	create_node->len = len;
	create_node->str = strdup(str);
	create_node->next = *head;
	*head = create_node;

	return (*head);
}
