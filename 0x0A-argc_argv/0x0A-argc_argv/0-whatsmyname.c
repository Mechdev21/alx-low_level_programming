#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc,char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	putchar('\n');
	return (0);
}
