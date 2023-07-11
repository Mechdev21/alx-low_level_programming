#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int l;
	char *str2;
	int i;

	if (str == NULL)
		return (NULL);

	l = strlength(str);
	str2 = malloc(sizeof(char) * l + 1);
	if (str2 != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			str2[i] = str[i];
		}
		str2[i] = '\0';
	}
	else
		return (NULL);
	return (str2);
}

/**
 * strlength - counts the lenght of the string
 * @s: string to count
 *
 * Return: length of string
 */
int strlength(char *s)
{
	int lens = 0;

	while (*s)
	{
		s++;
		lens++;
	}
	lens++;
	return (lens);
}
