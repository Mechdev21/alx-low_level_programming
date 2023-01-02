#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to string to be scaned
 * @c: character to scan for
 *
 * Return: pointer to s
 **/

char *_strchr(char *s, char c)
{
	while (*(s) != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
