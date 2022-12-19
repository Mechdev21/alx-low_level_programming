#include "main.h"
/**
 * _puts - prinst a string followed by newline
 * @str: pointer to string
 *
 * Return: string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
