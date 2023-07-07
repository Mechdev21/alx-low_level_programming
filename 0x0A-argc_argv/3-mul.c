#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int multi = 1;
	int i;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for ( i = 1; i < argc; i++)
	{
		multi = multi * atoi(argv[i]);
	}
	printf("%d\n", multi);
	return (0);
}
