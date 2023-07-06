#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to count
 *
 * Return: length of a string.
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s == '\0')
	{
		return (a);
	}
	a++;
	return (a + _strlen_recursion(s + 1));

}
