#include <stdio.h>

/**
 * Main - Entry point
 *
 * Desscription: prints the alphabet in lowercase except
 * e and q followed by anew line
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
