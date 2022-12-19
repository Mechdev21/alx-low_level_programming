#include "main.h"
/**
 * _strlen - returns the length of astring
 * @s: pointer to string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
