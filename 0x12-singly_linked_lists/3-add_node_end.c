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
    {
        end->str = NULL;
        end->len = 0;
        end->next = NULL;
    }

    if (!end)
        return (NULL);
    while (str[i])
    {
        i++;
    }
    end->str = strdup(str);
    end->len = i;
    end->next = NULL;

    if (*head == NULL)
    {
        *head = end;
    }
    else
    {
        temp = *head;
    }

    while (temp->next != NULL)
    {
            temp = temp->next;
    }
    temp->next = end;
    return (end);
}
