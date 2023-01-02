#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: pointer to destination object
 * @src: pointer to source string
 * @n: number of bytes to copy
 *
 * Return: value of dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if ((src != NULL) && (dest != NULL))
	{
		for (i = 0; i < n; i++)
		{
			src[i] = dest[i];
		}
	}
	return (dest);
}
