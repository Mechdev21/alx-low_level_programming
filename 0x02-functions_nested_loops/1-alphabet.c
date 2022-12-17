#include "main.h"
/**
 * print_alphabet - prints the alphabet in small letters
 *
 */

void print_alphabet(void)
{
	char start = 'a';
	char end = 'z';

	while (start <= end)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
