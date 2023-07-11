#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 *  it with a specific char
 *  @size: size of the array
 *  @c: character to be assigned
 *
 *  Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *strs;
	unsigned int i;

	if (size == 0)
		return (NULL);
	strs = malloc(sizeof(char) * size);
	if (strs == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		strs[i] = c;
		i++;
	}
	strs[i] = '\0';
	return (strs);
}
