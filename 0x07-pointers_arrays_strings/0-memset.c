#include "main.h"
/**
 * _memset - a function that fills memomry with constant byte
 * @s: pointer to destination to be filled
 * @b: character to be filled with
 * @n: number of byte to be filled starting from s to be filled
 *
 * Return: the value of s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
