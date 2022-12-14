#include <stdio.h>

/**
 * main - Entry point
 *
 * Dscription: prints the alphabet in lowercase and
 * then in lowercase followed by new line
 *
 * Return:  Always 0 (success)
 */

int main(void)
{
	char start = 'a';
	char end = 'z';
	char start1 = 'A';
	char end2 = 'Z';

	while (start <= end)
	{	putchar(start);
		start++;
	}
		while (start1 <= end2)
		{
			putchar(start1);
			start1++;
		}
	putchar('\n');
	return (0);
}
