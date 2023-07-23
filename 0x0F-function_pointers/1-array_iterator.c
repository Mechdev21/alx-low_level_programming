#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given
 *  as a parameter on each element of an array
 *  @array: array to be printed
 *  @size: size of array
 *  @action: pointer to array
 *
 *  Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
