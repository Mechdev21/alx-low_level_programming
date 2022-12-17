#include "main.h"
/**
 * Main - Entry point prints _putchar followed by newline
 * Description: A program that prints _putchar
 *
 * Return: on success 0.
 */

int main(void)
{
	int i = 0;
	char s[9] = "_putchar";

	while (i < 8)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
