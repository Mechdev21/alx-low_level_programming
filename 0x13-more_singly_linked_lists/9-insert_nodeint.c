#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a node at any index postion
 * @head: head pointer
 * @idx: index position
 * @n: data value
 *
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new;
    unsigned int i = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        i++;
    }
    temp = *head;

    if (idx > i)
    {
        return (NULL);
    }

	new = malloc(sizeof(listint_t));

	if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (idx == 0)
    {
        *head = new;
        new->n = n;
        new->next = *head;
        return (new);
    }

    while(--idx)
    {
        temp = temp->next;
    }
    new->next = temp->next;
    temp->next = new;

    return (new);
    free(new);
}
