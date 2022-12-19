#include "main.h"
/**
 * swap_int - swap values of two interger
 * @a: value to swap
 * @b: value to swap
 *
 * Return: the swaped value
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
