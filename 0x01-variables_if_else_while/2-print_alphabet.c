#include <stdio.h>

/**
 * Main - Entry point
 *
 * Description - prints alphabet in lowercase followed by newline
 *
 * REturn: Always 0 (success)
 */

int main(void)
{
	char start = 'a';
	char end = 'z';

	while (start <= end)
	{
		putchar(start);
		start++;

	}
	putchar('\n');
	return (0);
}
