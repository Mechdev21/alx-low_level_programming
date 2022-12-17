#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char start = 'a';
		char end = 'z';

		while (start <= end)
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');
		i++;
	}
}
