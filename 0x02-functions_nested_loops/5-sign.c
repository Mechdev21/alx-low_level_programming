#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 *
 * Return: 1 and print + if positive
 */

int print_sign(int n)
{
	int i = 1;
	int j = 0;
	int k = -1;
	int result;

	if (n > 0)
	{
		_putchar(43);
		result = i;
	}
	else if (n == 0)
	{
		_putchar(48);
		result = j;
	}
	else
	{
		_putchar(45);
		result = k;
	}
	return (result);
}
