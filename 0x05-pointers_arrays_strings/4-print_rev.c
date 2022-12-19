#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 *
 * Return: reversed string
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}

