#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - function that creates a file.
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i] != '\0'; i++)
		;
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	write(fd, text_content, i);
	return (1);
}