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

	list_t *new;
    unsigned int len = 0;
    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    if (str == NULL)
    {
        new->str = NULL;
        new->len = 0;
        new->next = *head;
    }
    while (str[len])
    {
        len++;
    }

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (new);
}
