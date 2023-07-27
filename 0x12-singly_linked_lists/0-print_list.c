#include "lists.h"
#include <string.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to list
 *
 * Return: always 0
 */
size_t print_list(const list_t *h)
{
	const list_t *f = h;

	size_t i;

	i = 0;
	
	
	while (f != NULL)
	{
		if (f->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", f->len, f->str);
		f = f->next;
		i++;
	}
	return (i);
}
