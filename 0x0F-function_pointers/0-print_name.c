#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: name to be printed
 * @f: pointer function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
