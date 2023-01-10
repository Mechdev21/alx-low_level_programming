#include "main.h"
/**
 * _puts_recursion - prints a string follwed by a newline
 * @s: pointer to string
 *
 * Return: Nohing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
