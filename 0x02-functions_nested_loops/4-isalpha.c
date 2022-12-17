#include "main.h"
/**
 * _isalpha - checks for valphabetic character
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter upper or lower
 * : 0 otherwise
 */

int _isalpha(int c)
{
	int i = 1;
	int j = 0;
	int result;

	if (c >= 65)
	{
		if (c <= 90)
			result = i;
	}
	else if (c >= 97)
	{
		if (c <= 122)
			result = i;
	}
	else
		result = j;

	return (result);
}
