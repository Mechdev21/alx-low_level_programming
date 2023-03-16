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

    end = malloc(sizeof(list_t));

    if (str == NULL)
        return (NULL);
    if (end == NULL)
        return (NULL);
    while (str[i])
        i++;
    if (*head == NULL)
    {
        end->len = i;
        end->str = strdup(str);
        end->next = NULL;
        *head = end;
        return (end);
    }

    temp = *head;

    while (temp->next != NULL)
        temp = temp->next;
    temp->next = end;
    end->len = i;
    end->str = strdup(str);
    end->next = NULL;
    return (end);
}
