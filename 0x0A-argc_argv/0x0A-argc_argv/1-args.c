#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__))  *argv[])
{
	int i = 0;

	while (argc--)
	{
		argc--;
		i++;
	}
	printf("%d\n", i);
	return (0);
}
