#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - function that returns the value of
 * x raised to the power of y
 * @x: nuber to be rasaised
 * @y: power
 *
 * Return: value of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (1 * x);
	}
	return (x *  _pow_recursion(x, y - 1));
}
