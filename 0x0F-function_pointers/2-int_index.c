#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: int array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: index of the number found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

