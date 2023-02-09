#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is where the program starts
 * a function that prints its name
 * @argc: argument count
 * @argv: argumentbvector
 *
 * Return: always zero
 */


int main(int argc, char **argv)
{
	int i;

	if (argc == 1)
	{
		for (i = 0; i < argc ; i++)
		{
			printf("%s \n", argv[i]);
		}
	}

	return (0);
}
