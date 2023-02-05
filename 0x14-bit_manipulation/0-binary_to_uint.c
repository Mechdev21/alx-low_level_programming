#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to zeros amd ones
 *
 * Return:the converted  number if succesfull
 */

unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);
	int i, base = 1, des;

	if (!b)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			des = des + base;
		base = 2 * base;
	}
	return (des);
}
