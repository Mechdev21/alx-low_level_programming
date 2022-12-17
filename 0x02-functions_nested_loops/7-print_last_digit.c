#include "main.h"
/**
 * prints_last_digit - prints the last digit of a number n
 * @n: the number to be passed as argument
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int last_ = n % 10;

	if (last_ < 0)
	{
		last_ = -1 * last_;
	}
	_putchar(last_ + '0');

	return (last_);
}
