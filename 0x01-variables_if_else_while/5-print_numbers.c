#include <stdio.h>

/**
 * Main - Entry point
 *
 * Description: Writes a programme that prints numbers in
 * base 10 starting from 0, followed by a new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int start = 0;
	int end = 9;

	while (start <= end)
	{
		printf("%d", start);
		start++;
	}
	putchar('\n');
	return (0);
}
