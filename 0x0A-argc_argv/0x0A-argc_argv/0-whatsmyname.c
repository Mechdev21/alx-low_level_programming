#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
