#include <stdio.h>
/**
 * main - program that prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (i = 0; *argv; argv++,  i++)
			;
	}
	printf("%d\n", i - 1);
	return (0);
}
