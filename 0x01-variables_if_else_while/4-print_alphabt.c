#include <stdio.h>
/**
 * Main - Entry point
 *
 * Dscription: "prints alphabet in lowercase except 'e' and 'q'
 * then followed by a newline"
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char start = 'a';
	char end = 'z';

	while (start <= end)
	{
		if (start == 'e' && 'q')
			start++;
		putchar(start);
		start++;
	}
	putchar('\n');
	return (0);
}
