#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 * @n: number given
 *
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
