#include "main.h"
/**
 * _abs - computes absolute value of n
 * @n: number passed
 *
 * Return: the absolute value
 */

int _abs(int n)
{
	int result;

	if (n > 0)
		result = n;
	else if (n < 0)
		result = n * -1;
	else
		result = n;

	return (result);
}
