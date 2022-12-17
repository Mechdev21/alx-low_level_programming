#include "main.h"
/**
 * _islower - it checks for lowercase character
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase
 * Returns: 0 otherwise
 */

int _islower(int c)
{
	int i = 1;
	int j = 0;
	int result;

	if (c >= 97)
	{
		if (c <= 122)
			result = i;
	}
	else
		result = j;

	return (result);
}
