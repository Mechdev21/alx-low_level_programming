#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: chatacter to print
 *
 * Return: on sucess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}