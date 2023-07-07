#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	while(*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
